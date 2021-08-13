#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20] = {0};
    
    for(int i=0;i<20;i++){
        cin >> arr[i];
    }
    int cnt=0;
    for(int i=19;i>=0;i--){
       cout<<"N["<<cnt<<"] = "<<arr[i]<<endl;
       cnt++;    
    }
    
    return 0;
}
