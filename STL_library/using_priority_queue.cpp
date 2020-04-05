#include<iostream>
#include<queue>
using namespace std;


int main(){

    priority_queue <int> pq;

    pq.push(5);
    pq.push(100);
    pq.push(10);
    pq.push(70);
    pq.push(80);

    cout<<endl<<"Priority Queue"<<endl;
    cout<<"Back of the queue: "<<pq.top()<<endl;

    pq.pop();


    cout<<"New Back of the queue: "<<pq.top()<<endl;

}
