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

    cout<<"Boundary Traversal of the matrix"<<endl;

    /// Print first row, last column, last row, first column

    /// printing first row
    for(j=0;j<m;j++){
            cout<<mat[0][j]<<" ";
    }
    cout<<endl;
    ///printing last column
    for(j=0;j<m;j++){
            cout<<mat[j][(m-1)]<<" ";
    }
    cout<<endl;
    ///printing last row
    for(j=0;j<m;j++){
            cout<<mat[(n-1)][(m-1)-j]<<" ";
    }
    cout<<endl;
    /// printing first column
    for(j=0;j<m;j++){
            cout<<mat[(m-1)-j][0]<<" ";
    }
}
