#include <bits/stdc++.h>
using namespace std;


int main()
{


   int num;
   cin>>num;
    int arr[num],sum=0,sum1=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+num);
    int cnt=0;
    for(int i=num-1;i>=0;i--){
        if(sum1>sum/2) break;
        cnt++;
        sum1 +=arr[i];
    }
    cout << cnt << endl;
    return 0;
}
