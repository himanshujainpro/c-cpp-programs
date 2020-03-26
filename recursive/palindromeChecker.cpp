#include <iostream>
using namespace std;
bool isPalindrome(char str[],int s,int e){
    if(s==e | s==e+1) return true;
    if(str[s]!=str[e]) return false;
    else return isPalindrome(str,s+1,e-1);
}
int main(){
    char str[]="Himanshu";
    cout<<isPalindrome(str,0,7);
}
