#include <iostream>
using namespace std;

int countSumOfDigits(int n,int val){
    if(n==0) return val;
    return countSumOfDigits(n/10,val+n%10);
}

int main(){
    cout<<countSumOfDigits(125,0);
}
