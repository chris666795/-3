#include<stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int res=0;
    if(num<2) printf("NO\n");
    else if(num<=3) printf("YES\n");
    else{
        for(int i=3;i<=num/2;i++){
            if(num%i==0){
                printf("NO\n");
                res=1;
                break;
            }
        }
        if(res==0) printf("YES\n");
    }
    return 0;
}