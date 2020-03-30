#include <bits/stdc++.h>
using namespace std;

int stockBuyAndSell(int arr[], int n){
    int profit=0,i;
    bool buy=true;
    int stockPrice=0;

    for(i=0;i<n;i++){
        if(buy){
            if(arr[i+1]>arr[i]) {
                stockPrice=arr[i];
                buy=false;
            }
        }else{
            if(i==n-1){
                profit+=arr[i]-stockPrice;
                stockPrice=0;
                buy=true;
            }

            if(arr[i+1]<arr[i]){
                profit=arr[i]-stockPrice;
                stockPrice=0;
                buy=true;
            }
        }
    }
    return profit;
}


int main() {
    // Stock arry
    int arr[]={1,2,3};
    cout<<stockBuyAndSell(arr,3);
}
