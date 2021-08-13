#include <bits/stdc++.h>
using namespace std;








vector <int> order;
map<int,int> track;
int n;

int main()
{

    while(scanf("%d",&n) != EOF){
        if(track.count(n) == 0){
            order.push_back(n);
            track[n]++;
        }else{
            track[n]++;
        }
    }
    for(int i=0;i<(int)order.size();i++){
         printf("%d %d\n",order[i],track[order[i]]);        
    }
    
    return 0;
}
