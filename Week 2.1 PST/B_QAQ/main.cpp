#include <bits/stdc++.h>
using namespace std;


// Link https://codeforces.com/problemset/problem/894/A




int main()
{

    string s;
    cin>>s;
    int l = s.length();
    int cnt=0;
    for(int i=0;i<l;i++){
      for(int j=i+1;j<l;j++){
          for(int k=j+1;k<l;k++){
              if(s[i]=='Q'&& s[j] == 'A' && s[k] == 'Q'){
                   cnt++;
                }
              }
          }    
    }
    cout<<cnt<<endl;
    return 0;
}
