#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<long long int> q;
    int num_sz;
    cin >> num_sz;
    long long int num_value , valu2;
    for(int i=0;i <num_sz ; i++){
        scanf("%lli" , &num_value);
        if(num_value == 1){
            scanf("%lli",&valu2);
            q.push(valu2);
        }else if(num_value == 2){
            if(!q.empty()){
                q.pop();
            }
        }else if(num_value == 3){
            if(!q.empty()){
              int y = q.front();
              printf("%lli\n",q.front());              
            }else{      
                printf("Empty!\n");
            }
        }
    }
    return 0;
}