#include<iostream>
#include<stack>

using namespace std;

// demo of searching in the array using inbuilt c++ library!
// using binary_search method
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    
    cout<<endl<<"Stack"<<endl;
    cout<<"Size of the stack: "<<s.size()<<endl;
    cout<<"Top of the stack: "<<s.top()<<endl;

}
