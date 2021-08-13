#include <bits/stdc++.h>
using namespace std;

int cnt_in,cnt_out,num_size,val_chk;
int main()
{

    cin >> num_size;
    for(int i=0;i<num_size;i++){
       cin>>val_chk;
        if(val_chk >=10&&val_chk<=20){
           cnt_in++;
       }else{
           cnt_out++;
        }
    }
    cout<<cnt_in<<" in"<<endl;
    cout<<cnt_out<<" out"<<endl;
    return 0;
}
