#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    
    
    fastio;
    map<string, bool> ch;
    int n;cin>>n;
    string a[n+1];   
    for(int i=n;i>0;--i){
       cin>>a[i];
       ch[a[i]] = true;
    }
    for(int i=1;i<=n;i++){
        if(ch[a[i]]){
           cout<<a[i]<<endl;
           ch[a[i]] = false;
        }
    }
    return 0;
}
