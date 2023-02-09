//inserting element in an array which is sorted
#include <bits/stdc++.h>
using namespace std;
int insertsort(int arr[],int key,int n,int capacity){
    if(n>=capacity)
    return n;
    int i;
    for(i=n-1;(i>=0 &&arr[i]>key);i--){
        arr[i+1] = arr[i];
    }
    arr[i+1] = key;
    return n+1;
}
int main(){
    int arr[20] = {1,2,4,5,6};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 5;
    int key = 3;
    n = insertsort(arr,key,n,capacity);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}