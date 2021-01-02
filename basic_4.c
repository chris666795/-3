#include<stdio.h>

int main(){
    int begin_h,begin_min, end_h, end_min;
    scanf("%d%d", &begin_h, &begin_min);
    scanf("%d%d", &end_h, &end_min);
    int diff;
    diff=(end_h-begin_h)*60+(end_min-begin_min);
    int pay=0;
    if(diff>240){
        pay=(diff-240)/30*60;
        diff=240;
    }
    if(diff>120){
        pay=pay+(diff-120)/30*40;
        diff=120;
    }
    if(diff<=120) pay=pay+diff/30*30;
    printf("%d\n", pay);
    return 0;
}