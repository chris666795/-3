#include<stdio.h>

int main(){
    int array[6];
    for(int i=0;i<6;i++){
        scanf("%d", &array[i]);
    }
    for(int i=5;i>0;i--){
        printf("%d ", array[i]);
    }
    printf("%d", array[0]);
    printf("\n");
    return 0;
}