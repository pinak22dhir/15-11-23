//quick sort algorithm 
// divide proble into sub __ARRAY_OPERATORSconqyer solve the subarrays
// combine solutionsof subproblems  partition algorithm et 2 pointers after that swap random first last depends on time coplexity
#include<iostream>
using namespace std;
int partition(int arr[],int first,int last){
    int pivot=arr[last];
    int i=first-1;
    //for inserting elements <pivot
    int j=first;
    //for finding elements<pivot
    for(;j<last;j++){
        if(arr[j]<pivot)
{
    i++;
    swap(arr[i],arr[j]);
}    
}//now i is pointing to last element <pivot
//correct position for pivot will be -i+1;
swap(arr[i+1],arr[last]);
return i+1;
// quick sort not stable 
// merge sort vs quick sort
}
void quicksort(int arr[], int first,int last){
    //base case 
    if(first>=last){
        return;
    }
    //recursive case
    int pi=partition(arr,first,last);
    quicksort(arr,first,pi-1);
    quicksort(arr,pi+1,last);
} 
