#include <iostream>
using namespace std;

int countSumOfDigits(int n){
    if(n<10) return n;
    return countSumOfDigits(n/10)+n%10;
}

int main(){
    cout<<countSumOfDigits(125);
}
