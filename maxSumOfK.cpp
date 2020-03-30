#include <bits/stdc++.h>
using namespace std;

// using     sliding window protocol
int maxSumOfK(int arr[], int n,int k){
    int window_sum=0,new_window_sum=0;
    int i;
    int max_sum=0;

    for(i=0;i<k;i++){
        window_sum+=arr[i];
    }

    max_sum=window_sum;
    for(i=1;i<k;i++){
        new_window_sum=window_sum-arr[i-1]+arr[i+k-1];

        if(new_window_sum>max_sum) max_sum=new_window_sum;
        window_sum=new_window_sum;
    }

    return max_sum;
}

int main() {
    int arr[]={1,2,3,4,5};
    cout<<maxSumOfK(arr,5,3);
}
