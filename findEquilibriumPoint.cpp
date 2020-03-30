#include <bits/stdc++.h>
using namespace std;

bool findEquilibriumPoint(int arr[],int n){
    int total_sum_of_array=0;
    int left_sum=0;
    int i;

    for(i=0;i<n;i++){
        total_sum_of_array+=arr[i];
    }

    for(i=0;i<n;i++){
        if(left_sum==total_sum_of_array-arr[i]){
            return true;
        }

        left_sum+=arr[i];
        total_sum_of_array-=arr[i];
    }

    return false;
}

int main() {
    int arr[]={3,4,8,-9,20,6};

    int n=sizeof(arr)/sizeof(int);
    if(findEquilibriumPoint(arr,n))
        cout<<"Yes";
    else cout<<"NO";
}
