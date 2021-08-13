#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
   vector<int> numbers;
    int num;
    for(int i=0;i<n;++i){
       cin>>num;
       numbers.push_back(num);
    }
    // 1 1 1 2 3 
    sort(numbers.begin(),numbers.end());
    
    for(int i=0;i<n;i++){
        if(numbers[0] != numbers[i]){
            cout<<numbers[i]<<'\n';
            return 0;
        }
    }
    
    cout<<"NO\n";
    return 0;
}
