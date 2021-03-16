#include <stdio.h>

int main()
{
    int N,M;
    int game[100];
    int sum=0;
    int max=0;
    
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&game[i]);
    }
    
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                sum = game[i]+game[j]+game[k];
                if(sum>max && sum <= M) //sum>max는 여러 개의 sum 중 가장 큰(가장 M에 가까운) 수를 찾기 위함
                {
                    max=sum;
                }
            }
        }
    }
    
    printf("%d\n",max);
    return 0;
    
}
