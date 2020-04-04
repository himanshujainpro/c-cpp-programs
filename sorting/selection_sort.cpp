#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[],int n){
    int i,j,minI=0;
    for(i=0;i<n;i++){
        minI=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minI]){
              minI=j;
            }
        }
        swap(arr[i],arr[minI]);
    }
}



int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,100};
    int n=10;
    selection_sort(arr,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
