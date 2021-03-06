#include <stdio.h>

int main()
{
    int N,i,tmp;
    int sum=0;
    
    scanf("%d",&N);
    tmp = N;
    
    //while(i) i/=10, (자리수)++;로 계속 자리수를 구하는 것도 가능
    for(i=N-54;i<N;i++){ // 각 자리수의 최대값이 9이므로 [n-9*자리수,n] 구간만 조사, 최대 6자리
        sum=tmp=i;
        while(tmp>0){
            sum += tmp%10;
            tmp /= 10;
        }
        if(sum == N){
            break;
        }
    }
    printf("%d",i!=N ? i:0);
}
