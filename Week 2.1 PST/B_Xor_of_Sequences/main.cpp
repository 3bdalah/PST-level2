#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    map<int,int> turck;
    for(int i=0;i<n+m;i++){
       int val;cin>>val;
       turck[val]++;
    }
    map<int,int>::iterator it;
    for(it = turck.begin();it!=turck.end();it++){
       if(it->second == 1)
        cout<<it->first<<" ";    
    }
    
    return 0;
}
