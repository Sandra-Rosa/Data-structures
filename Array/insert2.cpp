//inserting at any position
#include <bits/stdc++.h>
using namespace std;
void insert(int arr[],int pos,int n, int key){
    for(int i=n-1;i>pos;i++){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = key;
}
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    int pos=5;
    int key=50;
    if(pos>=capacity){
        cout<<"cannot insert";
    }else{
        insert(arr,pos,n,key);
    }for(int i=0;i<n+1;i++){
       cout<<arr[i]<<",";
    }

}