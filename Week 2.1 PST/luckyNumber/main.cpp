//
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//
//int n;
//int solve(int lucky =0,int index =0){
//    // base caes 
//    if(lucky >n){
//        return -1;
//    }else if(lucky == n){
//        return index;
//    }
//    //transition 
//    return max(solve(lucky * 10 +7,index*2+1),solve(lucky*10+7,index*2+2));
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin>>n;
//    cout<<solve()<<endl;
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;

int n=3;
int val =0,f=0,val2=0,turnoff=0,max1,max2;
vector<int>t1(5);



long long rec(long long val=0,int s=0,int f=0){
    if(val >= n){
        if(s == f)
            return val;
        else if(s>f)
            return rec(val *10+4,s,f+1);
        else 
            return rec(val * 10+7,s+1,f);
    }else{
        return min(rec(val*10+7,s+1,f),rec(val*10+4,s,f+1));
    }
}
int main(){
       scanf("%d",&n);
    printf("%lld",rec());
   return 0;
}