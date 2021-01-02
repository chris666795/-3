#include<stdio.h>

int recursive(int a){
    if(a==1 || a==0) return a+1;
    else return (recursive(a-1)+recursive(a/2));
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", recursive(num));
    return 0;
}