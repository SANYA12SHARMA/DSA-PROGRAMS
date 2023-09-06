#include <bits/stdc++.h>
using namespace std;

pair <int,int> twoSum(vector<int> &arr,int n,int target){
  unordered_map<int,int> m;
  for(int i=0;i<n;i++){
    int rem=target-arr[i];
    if(m.find(rem)!=m.end(){
      return {m[rem],i};
    }
    m[arr[i]]=i;
  }
  return {-1,-1};
}
int main()
{
  int n;
  scanf("%d",&n);
  vector<int> arr={2,6,5,8,11};
  int target=14;
  pair<int,int> p=twoSum(arr,n,target);
  printf("Indexes of two sum are: %d and %d ",p.first,p.second);
  
}
