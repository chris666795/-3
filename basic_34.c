#include<stdio.h>

int main(){
    int height;
    int situation;
    while(scanf("%d%d", &height, &situation)!=EOF)
    {
        if(situation==1){
            printf("%.1f\n", (height-80)*0.7);
        }
        else printf("%.1f\n", (height-70)*0.6);
    }
    return 0;
}