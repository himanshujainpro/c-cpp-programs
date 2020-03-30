#include <bits/stdc++.h>
using namespace std;

bool checkKthBitIsSetOrNot(int n,int k){
    if((n & (1<<(k-1)))!=0) return true;
    return false;
}

int main() {
    if(checkKthBitIsSetOrNot(5,3)) cout<<"Yes";
    else cout<<"No";
}
