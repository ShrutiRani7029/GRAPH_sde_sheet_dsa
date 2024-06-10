#include<bits/stdc++.h>
using namespace std;
const int n=1e5+10;
vector<int>graph[n];

int main(){
  int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
int e1,e2;
cin>>e1>>e2;
graph[e1].push_back(e2); /// -a
graph[e2].push_back(e1); /// -b

//a->directed
//a+b->undirected
}

for(int i=0;i<n;i++){
for(int j=0;j<graph[i].size();j++){
cout<<graph[i][j]<<" ";
}
cout<<endl;
}
}

//Time Complexity: o(n)
//Space Complexity: o(n);

