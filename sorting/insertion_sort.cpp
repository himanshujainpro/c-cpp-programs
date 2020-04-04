#include <bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        j=i+1;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,100};
    int n=10;
    insertion_sort(arr,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
