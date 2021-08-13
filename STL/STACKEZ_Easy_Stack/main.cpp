#include <bits/stdc++.h>
using namespace std;


int main()
{
   stack<long long int> st;
   int num;
   cin>>num;
   for(int i=0;i<num;i++){
       int val;
       cin>>val;
       if(val== 1){
           int val2;
           cin>>val2;
           st.push(val2);
        }else if(val==2){
            st.pop();
        }else if(val == 3){
            if(!st.empty()){
                cout<<st.top()<<endl;
            }else{
                cout<<"Empty!"<<endl;
            }
            }
    }
    return 0;
}
