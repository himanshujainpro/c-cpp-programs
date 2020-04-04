#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    int b[100];

    while(i<=mid && j<=high){
        if(arr[i]<arr[j]) b[k++]=arr[i++];
        else b[k++]=arr[j++];
    }

    for(;i<=mid;i++){
        b[k++]=arr[i];
    }

    for(;j<=high;j++){
        b[k++]=arr[j];
    }

    for(i=low;i<=high;i++){
        arr[i]=b[i];
    }
}

void merge_sort(int arr[],int low,int high){
    int mid;

    if(low<high){
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main() {
    int arr[]={9,8,7,6,5,4,3,2,1,100};
    int n=10;
    merge_sort(arr,0,n-1);
    
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
