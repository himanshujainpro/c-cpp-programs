#include<iostream>
#include<algorithm>
using namespace std;

// demo of searching in the array using inbuilt c++ library!
// using binary_search method
int main(){
    int a[10]={9,8,7,6,5,4,3,2,1,10};
    int i;
    sort(a,a+10);
    
    // starting and ending address of the array, and element to be searched!
    if(binary_search(a,a+10,10)) cout<<"Yes Present";
    else cout<<"Not present";

    cout<<endl;

    if(binary_search(a,a+10,0)) cout<<"Yes Present";
    else cout<<"Not present";

    cout<<endl;
}
