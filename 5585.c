#include <stdio.h>

int main()
{
    int price;
    int changes;
    int coin500=0,coin100=0,coin50=0,coin10=0,coin5=0,coin1=0;
    int count=0;
    float division;
    
    scanf("%d",&price);
    changes = 1000-price;
    
    while(changes>0){
        division = changes/500;
        if(division>=1){
            coin500++;
            changes=changes-500;
        }
        else
            break;
    }
    while(changes>0){
        division = changes/100;
        if(division>=1){
            coin100++;
            changes=changes-100;
        }
        else
            break;
    }
    while(changes>0){
        division = changes/50;
        if(division>=1){
            coin50++;
            changes=changes-50;
        }
        else
            break;
    }
    while(changes>0){
        division = changes/10;
        if(division>=1){
            coin10++;
            changes=changes-10;
        }
        else
            break;
    }
    while(changes>0){
        division = changes/5;
        if(division>=1){
            coin5++;
            changes=changes-5;
        }
        else
            break;
    }
    while(changes>0){
        division = changes/1;
        if(division>=1){
            coin1++;
            changes=changes-1;
        }
        else
            break;
    }
    
    count = coin500+coin100+coin50+coin10+coin5+coin1;
    
    printf("%d\n",count);
    return 0;
    
}
