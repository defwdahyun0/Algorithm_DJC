#include <stdio.h>

int main()
{
    int N;
    int x[50],y[50];
    int grade[50] = {0,};
    
    scanf("%d",&N);
    
    for(int i=0; i<N; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(x[i]<x[j] && y[i]<y[j])
                grade[i]++;
        }
        printf("%d ",grade[i]+1);
    }
    
}