#include <bits/stdc++.h>
using namespace std;

bool checkNumIsPowerOfTwoOrNot(int n){
    if(n==0) return false;
    if((n & (n-1))==0) return true;
    return false;
}

int main() {
    if(checkNumIsPowerOfTwoOrNot(5)) cout<<"Yes";
    else cout<<"No";
}
