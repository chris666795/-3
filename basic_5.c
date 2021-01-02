#include <stdio.h>
#include <math.h>

int main(){
    int num, ans[8];
    scanf("%d", &num);
    if(num<0){
        num+=256;
    }
    for(int i=7;i>=0;i--){
        ans[i]=num/pow(2,i);
        num%=(int)pow(2,i);
        printf("%d", ans[i]);
    }
    printf("\n");
    return 0;
}