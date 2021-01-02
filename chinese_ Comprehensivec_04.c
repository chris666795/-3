#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num>=90 &&num<=100) printf("A\n");
    else if(num>=80 &&num<=89) printf("B\n");
    else if(num>=70 &&num<=79) printf("C\n");
    else if(num>=60 &&num<=69) printf("D\n");
    else if(num<60 && num>=0) printf("E\n");
    else printf("error\n");
    return 0;
}