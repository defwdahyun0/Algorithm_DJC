#include <iostream>
#include <algorithm>
using namespace std;

char chess[60][60] = {0,};

string wf[8] = {
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"}
};
string bf[8] = {
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"},
    {"BWBWBWBW"},
    {"WBWBWBWB"}
};

int compare(int y, int x)
{
    int wcount=0, bcount=0;

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(wf[i][j] != chess[y+i][x+j]){
                wcount++;
            }
            if(bf[i][j] != chess[y+i][x+j]){
                bcount++;
            }
        }
    }
    
    if (wcount <= bcount) return wcount;
    else return bcount;
}
    

int main()
{
    int N,M;
    int result=999999999; 
    
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf(" %c",&chess[i][j]);
        }
    }
    
    for(int i=0;i+7<N;i++){
        for(int j=0;j+7<M;j++){
            result = min(compare(i,j),result);//이렇게 하지 않으면 틀림. 왜?
        }
    }

    cout << result <<endl;
    
}
