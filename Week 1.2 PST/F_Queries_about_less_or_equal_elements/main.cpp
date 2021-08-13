#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++) scanf("%d",&arr1[i]);
    for(int i=0;i<m;i++) scanf("%d",&arr2[i]);
    sort(arr1,arr1+n);
    for(int i=0;i<m;i++){
       auto idx = upper_bound(arr1,arr1+n,arr2[i])-arr1;
       printf("%d ",idx);
    }
    printf("\n");
    return 0;
}
