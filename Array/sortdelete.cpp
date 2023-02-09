//deleting an element from a sorted array
#include  <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int key){
    if(high<low)
    return -1;
    int mid = (high+low)/2;
    if(key==arr[mid])
     return mid;
    if(key>arr[mid])
     return binarysearch(arr,(mid+1),high,key);
    return binarysearch(arr,low,(mid-1),key);
}
int deletesort(int arr[],int position,int n){
    if(position!=-1){
        for(int i=position;i<n-1;i++){
            arr[i] = arr[i+1];
        }
    }
    n= n-1;
    return n;
}
int main(){
    int arr[20] = {1,2,3,4,5,6};
    int key=3;
    int n=6;
    int position = binarysearch(arr,0,n-1,key);
    n = deletesort(arr,position,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}