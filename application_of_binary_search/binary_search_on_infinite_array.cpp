#include <bits/stdc++.h>
using namespace std;

//Simple binary search
int binary_search(int arr[],int high,int key){
    int mid;
    int low=0;
    while(low<=high){
        mid=(low+high)/2;
        if(low==high && arr[low]!=key) return -1;
        if(arr[mid]==key) return mid;
        if(arr[mid]>key) high=mid;
        else low=mid+1;
    }
}


//This Program can find element of index in array without high index or indefinite array
int binary_search_on_infinite_array(int arr[],int key){
    int i=1;
    if(arr[0]==key) return 0;
    while(arr[i]<key) i*=2;
    if(arr[i]==key) return i;
    else return binary_search(arr,i,key);
}


int main() {
    int arr[]={10,20,30,40,50,60};


    cout<<binary_search_on_infinite_array(arr,10)<<endl;
    cout<<binary_search_on_infinite_array(arr,20)<<endl;
    cout<<binary_search_on_infinite_array(arr,60)<<endl;

    cout<<binary_search_on_infinite_array(arr,0)<<endl;
    cout<<binary_search_on_infinite_array(arr,70)<<endl;
}
