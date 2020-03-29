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

int main() {
    int arr[]={1,2,3,4,5};
    reverseArray(arr,0,4);
    int i;

    for(i=0;i<5;i++){
        cout<<arr[i];
    }
}
