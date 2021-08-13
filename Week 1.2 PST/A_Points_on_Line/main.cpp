#include <bits/stdc++.h>
using namespace std;

long long n,m,i,ans,mas[2000000],j;
int main()
{
    int n,m;    
    cin>>n>>m;
    for (i=0; i<n; i++){
        cin>>mas[i];
            while (m<mas[i]-mas[j])
                j++;
        if (i>j+1)
        ans+=(i-j-1)*(i-j)/2;
        cout<<ans;
    }
    return 0;
}
