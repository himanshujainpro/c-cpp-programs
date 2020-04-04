#include <bits/stdc++.h>
using namespace std;

int find_partion_position(int arr[],int low,int high){
    int i=low+1;
    int j=high-1;

    int pivot=arr[low];
    
    // flags
    bool iF=false;
    bool jF=false;

    while(j>=i){

        if(arr[i]>pivot){
            iF=true;
        }else{
            i++;
        }

        if(arr[j]<=pivot){
            jF=true;
        }else{
            j--;
        }


        if(iF && jF){
            swap(arr[i],arr[j]);
            jF=false;
            iF=false;
        }
    }

    swap(arr[j],arr[low]);
    return j;
}

void quick_sort(int arr[],int low,int high){
    int p;

    if(high>low){
            p=find_partion_position(arr,low,high);
            quick_sort(arr,low,p);
            quick_sort(arr,p+1,high);
    }

}
int main() {
    // in quick sort we have to max element to the end of the array hence i kept 100!
    int arr[]={9,8,7,6,5,4,3,2,1,100};
    int n=10;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
