//deleting specefic elements of array
#include <bits/stdc++.h>
using namespace std;
int main(){
     int arr[20] = {5,1,4,3,2,6};
     int n=6;
     int pos;
     int key =3;
     for(int i=0;i<n;i++){
        if(arr[i]==key){
           pos=i;
        }
     }
     for(int i=pos;i<n;i++){
        arr[i] = arr[i+1];
     }
     for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
     }
}