#include <bits/stdc++.h>
using namespace std;

int index=-1;
int findLeftMostIndexOfElement(int arr[],int low, int high, int key){
    if(low>high) return index;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(low==high && arr[mid]!=key) return index;

        if(arr[mid]==key){
            index=mid;
            high=mid-1;
        }else{
            if(arr[mid]>key) high=mid;
            else low=mid+1;
        }
    }

    return index;
}

int findRightMostIndexOfElement(int arr[],int low, int high, int key){
    if(low>high) return index;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(low==high && arr[mid]!=key) return index;

        if(arr[mid]==key){
            index=mid;
            low=mid+1;
        }else{
            if(arr[mid]>key) high=mid;
            else low=mid+1;
        }
    }

    return index;
}

int findOccuerenceOfElement(int arr[],int low, int high, int key){
    index=-1;
    int lmi=findLeftMostIndexOfElement(arr,low,high,key);
    if(lmi==-1) return -1;
    index=-1;
    int rmi=findRightMostIndexOfElement(arr,low,high,key);
    if(rmi==-1) return -1;
    return rmi-lmi+1;
}

int main() {
    int arr[]={2,3,3,3,3,3,4};
    int n=sizeof(arr)/sizeof(int);

    cout<<findOccuerenceOfElement(arr,0,6,3);
}
