#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"Enter the no pf vertex and edges:";
cin>>n>>m;


int adj[n+1][n+1];
for( int i=0;i<n;i++){
   int u,v;
   cin>>u>>v;
   adj[u][v]=1;
   adj[v][u]=1; 
}


    return 0;
}