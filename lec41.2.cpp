// create buckets of size 
// // namespace insert elements into buckets arr[i]*n=index;
// sort individuals buckets 
// combine all elements
#include<iostream>
#include<vector>
using namespace std;
void bucketsort(int arr[],int size){
vector<vector<float>>bucket(size, vector<float>());
//step1:
float  max_element=arr[0];
float min_element=arr[0];
for(int i=0;i<size;i++){
    max_element=max(max_element,arr[i]);
        min_element=min(min_element,arr[i]);
}
float range=(max_element-min_element)/size;
//step2: inserting elements into bucket 
for(int i=0;i<size;i++){
    // int index=arr[i]*size;
      int index=(arr[i]-min_element)/range;
      //boundary elements
      float diff=(arr[i]-min_element)/range-index;
      if (diff==0 && arr[i]!=min_element){
bucket[index-1].push_back(arr[i]);
      }
      else{
    bucket[index].push_back(arr[i]);}
}
//step3: sorting individual buckets
for(int i=0;i<size;i++){
    if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
    }
}
//step4 combining elements from buckets
int k=0;
for(int i=0;i<size;i++){
    for(int j=0;j<bucket[i].size();j++){
        arr[k++]=bucket[i][j];

    }
}
}
int main(){
float arr[]={0.13,0.45,0.12,0.89};
int size=sizeof(arr)/sizeof(arr[0]);
bucketsort(arr,size);
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
    return 0;
}
// time complexity 
// any case O(n+k)
// worst casr O(n2)
// space O(n+k)
