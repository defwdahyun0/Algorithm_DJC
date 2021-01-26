#include <stdio.h>

char chess[51][51];
char wf[8][8] = {
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'}
};
char bf[8][8] = {
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'},
    {'B','W','B','W','B','W','B','W'},
    {'W','B','W','B','W','B','W','B'}
};

int wff(int y,int x) //whitefirstfunction
{
    int cnt=0;
    for(int i=y;i<y+8;i++){
        for(int j=x;j<x+8;j++){
            if(chess[i][j] != wf[i-y][j-x]){
                cnt++;
            }
        }
    }
    return cnt;
}
    
int bff(int y,int x) //whitefirstfunction
{
    int cnt=0;
    for(int i=y;i<y+8;i++){
        for(int j=x;j<x+8;j++){
            if(chess[i][j] != bf[i-y][j-x]){
                cnt++;
            }
        }
    }
    return cnt;
}
    

int main()
{
    int N,M;
    int result=100;
    
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%c",&chess[j][i]);
        }
    }
    
    for(int i=0;i+7<N;i++){
        for(int j=0;j+7<M;j++){
            result = wff(i,j)<bff(i,j)?wff(i,j):bff(i,j);
            printf("%d",result);
        }
    }

    printf("\n%d",result);
    
}
