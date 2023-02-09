//binary search
#include <bits/stdc++.h>
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
int main(){
    int arr[11] = {10,20,30,40,50,60,80,110,130,140,170};
    int key = 110;
    int n=11;
    int position = binarysearch(arr,0,n-1,key);
    cout<<"Position"<<position<<endl;
}