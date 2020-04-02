#include <bits/stdc++.h>
using namespace std;

int index=-1;

int findLeftMostIndexOfElementRecursive(int arr[],int low, int high, int key){
    if(low>high) return index;
    int mid;

    mid=(low+high)/2;
    if(low==high && arr[mid]!=key) return index;

    if(arr[mid]==key){
            index=mid;
            findLeftMostIndexOfElementRecursive(arr,low,mid-1,key);
    }else{
        if(arr[mid]>key) findLeftMostIndexOfElementRecursive(arr,low,mid,key);
        else findLeftMostIndexOfElementRecursive(arr,mid+1,high,key);
    }
    return index;
}

int main() {
    int arr[]={2,3,3,3,3,3};
    int n=sizeof(arr)/sizeof(int);

    cout<<findLeftMostIndexOfElementRecursive(arr,0,5,3);
}
