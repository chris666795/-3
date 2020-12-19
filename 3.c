#include<stdio.h>
#include<math.h>

int main(){
    int value[2];
    for(int i=0;i<2;i++){
        scanf("%d", &value[i]);
    }
    if(pow(value[0],2)+pow(value[1],2)<=100*100) printf("inside\n");
    else printf("outside");
    return 0;
}