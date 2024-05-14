#include<bits/stdc++.h>

using namespace std;

#define MAX_LEN 1000

void build_tree(int arr[],int tree[],int node,int start ,int end){
  cout << node<< "\n";
  if (start == end){
    tree[node] = arr[start];
  }
  else {
    int mid = (start + end)/2;
    int left_node = 2* node + 1;
    int right_node = 2*node + 2;
    build_tree(arr,tree,left_node,start,mid);
    build_tree(arr,tree,right_node,mid+1,end);
    tree[node] = tree[left_node] + tree[right_node];
  }
}

void update_tree(int arr[],int tree[],int node,int start ,int end,int idx,int val){
  if (start == end){
    tree[idx] = val;
    tree[node] = val;
  }
  else{
    int mid = (start+end) /2;
    int left_node = 2 * node + 1;
    int right_node = 2 * node +2;
    if (idx >= start && idx <= mid){
      update_tree(arr,tree,left_node,start,mid ,idx,val);
    }
    else {
      update_tree(arr,tree,right_node,mid+1,end,idx,val);
    }
    tree[node] = tree[left_node] + tree[right_node];
  }
}

int query_tree(int arr[],int tree[],int node,int start ,int end,int L,int R){
  cout << start << "\n";
  cout << end << "\n";
  cout << "\n";
  if(R < start || L > end){
    return 0;
  }
  else if( L <= start && end <= R){
    return tree[node];
  }
  else if(start == end){
    return tree[node];
  }
  else {
    int mid = (start + end) /2;
    int left_node = 2*node +1;
    int right_node =2*node +2;
    int sum_left = query_tree(arr,tree,left_node,start,mid,L,R);
    int sum_right = query_tree(arr,tree,right_node,mid+1,end,L,R);
    return sum_right+sum_left;
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int arr[] = {1,3,4,5,9,11};
  int size = 6;
  int tree[MAX_LEN] = {0};
  build_tree(arr,tree,0,0,size-1);

  for (int i=0;i<15;i++){
    cout << "tree[" << i << "]" << tree[i] << "\n"; 
  }

  cout << "\n";

  update_tree(arr,tree,0,0,size-1,4,6);
  for (int i=0;i<15;i++){
    cout << "tree[" << i << "]" << tree[i] << "\n"; 
  }

  int s = query_tree(arr,tree,0,0,size-1,2,5);
  cout << s << "\n";

  return 0;
}
