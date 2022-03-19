#include<bits/stdc++.h>
using namespace std;
int kthsmallest(int arr[],int size,int k){
  priority_queue<int> pq;
  //step1:
  for(int i=0;i<k;i++)
  {
    pq.push(arr[i]);
  }
  //step2
  for(int i=k;i<size;i++){
  if(arr[i]<pq.top()){
    pq.pop();
    pq.push(arr[i]);
  }
  }
  //step3
  int ans=pq.top();
  return ans;
}
int main(){
  
  return 0;}
