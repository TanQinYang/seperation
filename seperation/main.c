#include <stdio.h>
#include <stdlib.h>

int main()
{
int data [8]={1,2,3,-5,-8,-3,2,6};
int i=0;
int j=8;
int e=0;
while (i<j)
{
    if (data[i]>=0)
        i=i+1;
    else
        j=j-1;
        e=data[i];
        data[i]=data[j];
        data[j]=e;
}
int a;
for(a=0;a<i;a++)
    printf("%d ",data[a]);
    printf("\n%d",a);

    return 0;
}
