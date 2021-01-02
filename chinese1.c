#include<stdio.h>

int main(){
    int array[101];
    int count=0;
    int n;
    while(scanf("%d", &n)!=EOF){
        array[count++]=n;
    }
    for(int i=count-1;i>0;i--){
        printf("%d ", array[i]);
    }
    printf("%d", array[0]);
    printf("\n");
    return 0;
}