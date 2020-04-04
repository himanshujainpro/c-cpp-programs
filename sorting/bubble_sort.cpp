#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}


int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,100};
    int n=10;
    bubble_sort(arr,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
