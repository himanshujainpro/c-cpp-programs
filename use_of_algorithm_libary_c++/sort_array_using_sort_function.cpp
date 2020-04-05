#include<iostream>
#include<algorithm>
using namespace std;

// demo of sorting in the array using inbuilt c++ library!
int main(){
    int a[10]={9,8,7,6,5,4,3,2,1,10};
    int i;

    // starting and ending address of the array
    sort(a,a+10);

    for(i=0;i<10;i++) cout<<a[i]<<" ";

    cout<<endl;
}
