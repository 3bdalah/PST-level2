#include <bits/stdc++.h>
using namespace std;
int main()
{

    
    
    
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    cout<<vec[1]<<endl;
    return 0;
}
