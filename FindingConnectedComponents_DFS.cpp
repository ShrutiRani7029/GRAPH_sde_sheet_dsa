///finding connected components in graph
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool vis[N];
vector<int>graph[N];

void dfs(int vertex){
vis[vertex]=true;
for(auto child:graph[vertex]){

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

graph[e1].push_back(e2);
graph[e2].push_back(e1);
}
int count=0;
for(int i=1;i<=n;i++){
 if(vis[i])continue;
  dfs(i);
  count++;
}
cout<<count<<endl;

}


///Time Complexity: o(N)
///Space Complexity: o(N) 
