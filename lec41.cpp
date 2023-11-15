//count sort 
#include<iostream>
#include<vector>
using namespace std;
// void countsort(vector<int> &v){
//     int n=v.size();
//     //find maximum element
//     int max_element=INT_MIN;
//     for(int i=0;i<n;i++){
//         max_element=max(v[i],max_element);
//     }
//     //create freq array
//     vector<int> freq(max_element+1,0);
//     for(int i=0;i<max_element;i++){
// freq[i]++;
//     }
//     //calculate cumulative freq
//     for(int i=1;i<=max_element;i++){
    
//     freq[i]+=freq[i-1];}
//     //calculate sorted array 
//         for(int i=n-1;i>=0;i--){
//        ans[--freq[v[i]]] =v[i];}
//        //cop back the ans to original array
//        for(int i=0;i<=n;i--){
//     v[i]=ans[i];
//        }

// }
//radix sort 
void countsort(vector<int> &v, int pos){
    int n=v.size();
    //create freq array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    //cumulative freq
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    //ans array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i++){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
void radixsort(vector <int> &v){
    int max_element=INT_MIN;
    for(auto x: v){
        max_element=max(x,max_element);
    }
    for(int pos=1;max_element/pos>0;pos*=10){
        countsort(v,pos);
    }
}
// int main input call and output