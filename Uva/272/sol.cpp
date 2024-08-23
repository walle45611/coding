#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int c,q=1;
  while((c= getchar()) != EOF){
    if(c == '"'){
      printf("%s",(q ? "``" : "''"));
      q = !q;
    }    
    else{
      printf("%c",c);
    }
  }

  return 0;
}

