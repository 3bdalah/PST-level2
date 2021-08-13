#include <bits/stdc++.h>
using namespace std;

int main()
{

    
    
    
    deque<int> Q;
    int num ,num_val=0,flag=0;
    cin>>num;
    string word;
    
    for(int i=0;i<num;i++){
        cin>>word;
        // To Front 
        if(word == "toFront"){
            scanf("%d",&num_val);
            if(flag == 0){
                Q.push_front(num_val);
            }else{
                Q.push_back(num_val);
            }
        }
        // Back 
        if(word == "back"){
            if(Q.empty()){
                printf("No job for Ada?\n");
                continue;
            }
            if(flag == 0){
                printf("%d\n",Q.back());
                Q.pop_back();
            }else{
                printf("%d\n",Q.front());
                Q.pop_back();
            }
        }
        
        if(word == "front"){
            if(Q.empty()){
                printf("No job for Ada?\n");
                continue;
            }
            if(flag == 0){
               printf("%d\n",Q.front());
               Q.pop_front();
            }else{
               printf("%d\n",Q.back());
               Q.pop_back();
            }
        }
        
        if(word == "reverse"){
            if(flag){
                flag=0;
            }else{
                flag=1;
            }
        }
        
    }
    
    return 0;
}
