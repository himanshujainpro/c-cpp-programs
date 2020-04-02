#include <bits/stdc++.h>
using namespace std;

int index=-1;

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

int main() {
    int arr[]={2,3,3,3,3,3,4};
    int n=sizeof(arr)/sizeof(int);

    cout<<findRightMostIndexOfElement(arr,0,6,3);
}
