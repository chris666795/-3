#include<stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int ans;
    ans=a*1+c*2+b*2+d*2-e*2;
    if(ans>=45) printf("A\n");
    else if(ans>=35 && ans<45) printf("B\n");
    else if(ans>=25 && ans<35) printf("C\n");
    else printf("D\n");
    return 0;
}