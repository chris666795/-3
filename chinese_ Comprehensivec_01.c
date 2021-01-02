#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    if(num==1) printf("Person\n");
    else if(num==2) printf("Fairy\n");
    else printf("Dwarf\n");
    return 0;
}