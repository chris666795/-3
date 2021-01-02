#include<stdio.h>

int main(){
    int array[6];
    for(int i=0;i<6;i++){
        scanf("%d", &array[i]);
    }
    int ans=0;
    for(int i=0;i<6;i++){
        ans+=array[i]*array[i]*array[i];
    }
    printf("%d\n", ans);
    return 0;
}