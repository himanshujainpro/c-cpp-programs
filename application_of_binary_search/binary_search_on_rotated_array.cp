#include <bits/stdc++.h>
using namespace std;

int binary_search_recursive(int arr[],int low,int high,int key){
        int mid=(low+high)/2;
        if(arr[mid]==key) return mid;
        if(low>high) return -1;
        if(low==high&&arr[low]!=key) return -1;
        if(arr[mid]>key) binary_search_recursive(arr,low,mid,key);
        else binary_search_recursive(arr,mid+1,high,key);
}

// This program can find max element index in sorted rotated array.
// This program is also used find index of element in sorted rotated array.
int find_pivot_element_index(int arr[],int low,int high){
    int mid=(low+high)/2;
    if(low==high) return low;
    if(arr[mid]>arr[mid+1]) return mid;

    else if(arr[mid]<arr[mid+1]){
            if(arr[mid]<arr[0]) find_pivot_element_index(arr,low,mid-1);
            else find_pivot_element_index(arr,mid+1,high);
    }
    else find_pivot_element_index(arr,low,mid-1);
}

// main function
int binary_search_on_rotated_array(int arr[],int high,int key){
    int pivot_index=find_pivot_element_index(arr,0,high);
    if(arr[0]==key) return 0;
    if(arr[pivot_index]==key) return pivot_index;
    if(arr[0]>key) return binary_search_recursive(arr,pivot_index+1,high,key);
    else return binary_search_recursive(arr,0,pivot_index-1,key);

}

// Driver function
int main() {
    int arr[]={10,20,30,40,50,60,1,2,3};
    cout<<binary_search_on_rotated_array(arr,8,3);

    cout<<binary_search_on_rotated_array(arr,8,10);

    cout<<binary_search_on_rotated_array(arr,8,40);

    cout<<binary_search_on_rotated_array(arr,8,4);

    cout<<binary_search_on_rotated_array(arr,8,0);
}
