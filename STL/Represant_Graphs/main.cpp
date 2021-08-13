#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
#define INF LONG_LONG_MAX;
typedef long long ll;

int main()
{

   int n; //number of nudes
   int m; // number of edges    
   cin >> n >> m;
   vector<vector<pair<int,int>>> adj(n);
   
    for(int i=0;i<m;i++){
       int u,v,c;
       cin>>u>>v>>c;
       adj[u].push_back({v,c});
    }
    return 0;
}
