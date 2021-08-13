#include <bits/stdc++.h>
using namespace std;
int cmp1(int x,int y){
   return (x<y);
}
int cmp2(int x,int y){
   return (x>y);
}
int main()
{
    int cnt_loop,num,cnt_num,cnt =0;
    cin>>cnt_loop;
    while(cnt_loop){
        cnt_loop--;
         cin>>num>>cnt_num;
        vector<int>v;
        vector<int>b;
        
        for(int i=0;i<num;i++){
          int val;cin>>val;
          v.push_back(val);
        }
        for(int i=0;i<num;i++){
          int val2;cin>>val2;
          b.push_back(val2);
        }
        sort(v.begin(),v.end(),cmp1);
        sort(b.begin(),b.end(),cmp2);
        for(int i=0;i<num;i++){
           if(cnt_num >0 && v[i]<b[i]){
               swap(v[i],b[i]);
               cnt_num--;
            }   
        }
        long long  sum=0;
        for(auto &n : v){
            sum+=n;
        }
        cout<<sum<<endl;
        sum=0;   
    }
    return 0;
}

//5 6 5 48 2 1
/*
5 3
1 2 3 4 5
10 9 10 10 9

4 0
2 2 4 3
2 4 2 3
  
  
  
  */