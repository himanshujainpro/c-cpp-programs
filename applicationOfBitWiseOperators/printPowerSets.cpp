#include <bits/stdc++.h>
using namespace std;

void printPowerSets(string s){
    int c=(1<<s.length());
    int i,j;

    for(i=0;i<c;i++){
        for(j=0;j<c;j++){
                // checking jth bit is set or not in i!
            if((i & (1<<(j)))!=0) cout<<(s[j]);
        }
        cout<<endl;
    }
}

int main() {
    printPowerSets("ABC");
}
