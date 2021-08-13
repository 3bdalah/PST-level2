#include <bits/stdc++.h>
 
typedef long long ll;
typedef long double ld;
using namespace std;
 
#define endl "\n"
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 2e5 + 5, M = 4e7 + 5, lg = 20;
int mod = 1e9 + 7;
int n;



ll solve(ll x, int co4,int co7){
   if(x >= n){
        if(co4 == co7){
          return x;
        }else if(co4 > co7){
            return solve(x*10+7,co4,co7+1);
        }else 
            return solve(x*10+4,co4+1,co7);
    }
    return min(solve(x*10+4,co4+1,co7),solve(x*10+7,co4,co7+1));
    
       
}

int main()
{
    FIO
    cin>>n;
    cout<< solve(0,0,0)<<endl;
        
    return 0;
}
