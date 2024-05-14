#include<bits/stdc++.h>

using namespace std;

int scoreHand(vector<int>& hand) {
  map<int, int> rankCount;
  map<int, int> suitCount;
  vector<int> ranks;
  int maxRankFreq = 0, maxSuitFreq = 0;

  for (int card : hand) {
    int rank = (card - 1) % 13;
    int suit = (card - 1) / 13;
    rankCount[rank]++;
    suitCount[suit]++;
    maxRankFreq = max(maxRankFreq, rankCount[rank]);
    maxSuitFreq = max(maxSuitFreq, suitCount[suit]);
    if (find(ranks.begin(), ranks.end(), rank) == ranks.end()) {
      ranks.push_back(rank);
    }
  }

  bool isFlush = (maxSuitFreq == 5);
  bool isStraight = false;
  sort(ranks.begin(), ranks.end());

  if (ranks[0] == 0 && find(ranks.begin(), ranks.end(), 12) != ranks.end()) {
    ranks.push_back(13);
  }

  if (ranks.size() >= 5) {
    for (int i = 0; i <= int(ranks.size()) - 5; ++i) {
      if (ranks[i + 4] - ranks[i] == 4) {
        isStraight = true;
        break;
      }
    }
  }

  if (isFlush && isStraight) return 7;
  if (maxRankFreq == 4) return 6; 
  if (maxRankFreq == 3 && rankCount.size() == 2) return 5; 
  if (isStraight) return 4;   
  if (maxRankFreq == 3) return 3; 
  if (maxRankFreq == 2 && rankCount.size() == 3) return 2; 
  if (maxRankFreq == 2) return 1; 

  return 0; 
}

int evaluateMaxScore(vector<int>& cards) {
  int maxScore = 0;
  vector<int> combination;

  for (int i = 0; i < (1 << 6); i++) {
    if (__builtin_popcount(i) == 5) {
      combination.clear();
      for (int j = 0; j < 6; j++) {
        if (i & (1 << j)) {
          combination.push_back(cards[j]);
        }
      }
      maxScore = max(maxScore, scoreHand(combination));
    }
  }

  return maxScore;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    vector<int> cards(6);
    for (int i = 0; i < 6; ++i) {
      cin >> cards[i];
    }
    cout << evaluateMaxScore(cards) << endl;
  }
  return 0;
}

