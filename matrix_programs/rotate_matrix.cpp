#include<iostream>
#include <bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    int i,j;
    int n=0,m=0;
    cout<<"Enter Row Count"<<endl;
    cin>>n;
    cout<<"Enter Column Count"<<endl;
    cin>>m;


    cout<<"Enter Matrix element"<<endl;

    int mat[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"Rotate Matrix by 90 degree"<<endl;
    /// we can rotate matrix in multiple of 90 degree only hence we can rotate matrix 
    /// by 90,180,270,360.....
    /// for this we can rotate matrix by 90 degree for (degree to be rotated/90) times.
    /// for ex. rotate matrix by 270 degree hence rotate matrix 90 degree for 270/90=3 
    /// means 3 times!
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<mat[j][(n-1)-i]<<" ";
        }
        cout<<endl;
    }
}
