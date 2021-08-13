#include <bits/stdc++.h>
using namespace std;
long long int sum,averg;
int a,b,c,g,d,e,f,cnt;
int main()
{
    int num;cin>>num;
    while(num){
        cin>>a>>b>>c>>g;
        sum=(a+b+c+g);
        int arr[3];
        for(int j=0;j<3;j++)
            cin>>arr[j];
        
        sort(arr,arr+3);
        averg = (arr[1]+arr[2])/2;
        cnt++;
        cout<<"Case "<<cnt<<": ";
        if((averg+sum)>= 90) cout<<"A";
        else if((averg+sum) < 90 && (averg + sum ) >= 80 ) cout<<"B";
        else if((averg+sum) < 80 && (averg + sum ) >= 70 ) cout<<"C";
        else if((averg+sum) < 70 && (averg + sum ) >= 60 ) cout<<"D";
        else if((averg+sum) < 60 ) cout<<"F";
        num--;
        cout<<"\n";
    }
    return 0;
}
