#include <bits/stdc++.h>
using namespace std;

int temp;

void reverseArray(int arr[],int low,int high){
    if(low==high) return;
    if(low<high){
        swap(arr[low],arr[high]);
        reverseArray(arr,low+1,high-1);
    }

}
void rotateArray(int arr[],int low,int high,int d){
    reverseArray(arr,low,d-1);
    reverseArray(arr,d,high);
    reverseArray(arr,low,high);
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    rotateArray(arr,0,8,4);
    int i;

    for(i=0;i<9;i++){
        cout<<arr[i];
    }
}
