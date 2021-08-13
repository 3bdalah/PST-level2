#include <bits/stdc++.h>
#define endl "\n"
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int N = 2e5 + 5, M = 4e7 + 5, lg = 20;

int mod = 1e9 + 7;



int arr[4];

bool solve(int i,int sum1,int sum2){
    if(i == 4){
       return (sum1 == sum2);
    }
    bool op1 = solve(i+1,sum1+arr[i],sum2);
    bool op2 = solve(i+1,sum1,sum2+arr[i]);
    return (op1 || op2);
    
}

using namespace std;

int main()
{
    FIO
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    if(solve(0,0,0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
