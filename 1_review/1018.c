#include <stdio.h>

int main()
{
    int T;
    int A[10];
    int B[10];

    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&A[i],&B[i]);
    }

    for(int i=0;i<T;i++)
    {
        printf("%d",A[i]+B[i]);
    }
   
}