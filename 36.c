#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    if(year%4==0 && year%100!=0) printf("Bissextile Year");
    else if(year%400==0) printf("Bissextile Year");
    else printf("Common Year");
    return 0;
}