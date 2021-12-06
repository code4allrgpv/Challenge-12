#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> f[1000000] ;
bool used[1000000] ;
 
void dfs(int v) {
    used[v] = true ;
    for (size_t i = 0; i < (int) f[v].size(); ++i) {
      int to = f[v][i];
      if (!used[to])
        dfs(to);
    }
}
 
int main(){
  int p,comp=0;
  cin>>n>>p;
  for(int i=0; i<p; i++){
    int u,v;
    cin>>u>>v;
    f[u].push_back(v);
    f[v].push_back(u);
  }
  for (int i = 0; i < n ; ++i)
      used [i] = false;
  for (int i = 0; i < n ; ++i){
    if (!used[i]) {
      dfs(i);
      comp++;
    }
  }
  cout<<comp;
  return 0;
}
