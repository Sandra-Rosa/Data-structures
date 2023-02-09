//selection sort
#include <bits/stdc++.h>
using namespace std;
void swap(int *xp,int *yp){
    int temp;
    temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionsort(int arr[],int n){
    int minidx;
    for(int i=0;i<n-1;i++){
      minidx = i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx]){
            minidx = j;
        }
      }
      if(minidx!=i)
      swap(arr[i],arr[minidx]);
    }
}
int main(){
    int arr[10] = {64,25,12,22,11};
    int n =5;
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}