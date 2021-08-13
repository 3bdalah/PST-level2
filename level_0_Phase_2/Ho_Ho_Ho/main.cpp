#include <stdio.h>
int main()
{
    int i,j;
    scanf("%d", &i);
    for (j=1;j<=i;j++,printf("Ho%s",(j>i)?"!":" "));
    return 0;
}