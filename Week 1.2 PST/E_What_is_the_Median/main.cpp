





#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
/**
    int d,n1,n2;
    vector<int> v;
    while(scanf("%d",&d)!= EOF){
        v.push_back(d);
        nth_element(v.begin(), v.begin() + v.size() / 2,v.end());
        n1 = *(v.begin() + v.size() /2);
        if(v.size() % 2 == 0){
           nth_element(v.begin(),v.begin() + v.size()/ 2-1,v.end());
           n2 = *(v.begin() + v.size() / 2-1);
           n1 = (n1 + n2)/2;
        }
        printf("%d\n",n1);
    }**/
    /*
    long long int  a,ar[10000],i;
    while(cin >> a){
        ar[i++] = a;
        sort(ar,ar+i);
        if(i%2 == 0)cout << (ar[i/2-1]+ar[i/2])/2 << endl;
        else cout << ar[i/2] << endl;
    }***/
    return 0;
}




#include <bits/stdc++.h>
using namespace std;


//typedef unsigned int uint;
//typedef long long int64;
//typedef unsigned long long uint64;

int main(){
    vector<unsigned int> vec;
    long long int  num, val;
    while(cin>>num){
              vec.push_back(num);
              sort(vec.begin(), vec.end());
              int len = vec.size();
              int cen = len/2;
              if(len%2 == 0)
                       val = ( vec[cen] + vec[cen-1] ) / 2;
              else
                  val = vec[cen];
              cout<<val<<endl;
    }
    return 0;
}
