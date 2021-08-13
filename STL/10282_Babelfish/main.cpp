#include <bits/stdc++.h>
using namespace std;


int main()
{

    

    map<string,string> memo;
    string line;
    while(getline(cin,line),line!= ""){
        
        stringstream ss(line);
        string word_en,word_fr;
        ss >> word_en >> word_fr;
        memo[word_fr] = word_en;
    }
    while(getline(cin,line)){
      if(memo.find(line) == memo.end()){
          cout<<"eh"<<endl;
        }else{
           cout << memo[line] << endl;    
        }
    }
    
    
    return 0;
}
