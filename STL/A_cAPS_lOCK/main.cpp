#include <bits/stdc++.h>
using namespace std;
int main()
{

    
    
    
    
    string s;
    char u;
    bool c=true;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            c=false;
        }
    }
    if(c == true){
        for(int j=0;j<s.length();j++){
            if(islower(s[j])){
                u = toupper(s[j]);
            }else{
                u = tolower(s[j]);
            }
            cout<<u;
        }
    }else{
        cout<<s<<endl;
    }
    
    return 0;
}
