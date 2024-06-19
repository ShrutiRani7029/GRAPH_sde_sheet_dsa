#include<bits/stdc++.h>
using namespace std;

int n=1e3+10;
int graph[n][n];

int main(){
  int n,m;
  cin>>n>>m;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
graph[i][j]=0;
}}

for(int i=0;i<m;i++)//edges
{
int e1,e2;
cin>>e1>>e2;
  graph[e1][e2] = 1; //  - a
  graph[e2][e1] = 1; //  - b

  ///if we only want to print the directed graph then we have to only considered a
  ///if we want to print both directed+undirected ->a+b->considered
}

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++){
cout<<graph[i][j]<<" ";
}
cout<<endl; 
}

//time complexity: o(n^2)
//space complexity: o(n^2)
}






