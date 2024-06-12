#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
bool vis[N];
vector<int>g[N];
vector<vector<int>>store;
vector<int>v;


void dfs(int vertex){
vis[vertex]=true;
v.push_back(vertex);
for(auto child: g[vertex]){

  if(vis[child])continue;
  dfs(child);
}
}

int main(){
  int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
int e1,e2;
cin>>e1>>e2;
g[e1].push_back(e2);
g[e2].push_back(e1);
}

for(int i=1;i<=n;i++){
if(vis[i])continue;
  v.clear();
  dfs(i);
  store.push_back(v);
}
  for(auto it:store){
    for(auto vertex:it){
      cout<<vertex<<" ";}
    cout<<endl;
  }
  
}

///Time Complexity: o(N)
///Space Complexity: o(N)
