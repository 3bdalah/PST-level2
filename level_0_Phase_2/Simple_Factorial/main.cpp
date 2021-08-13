#include <bits/stdc++.h>
using namespace std;
int cnt=1;
int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        cnt*=i;
    };
    cout<<cnt<<endl;
    return 0;
}
