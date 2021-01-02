#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int sum[128]={0};
    for(int i=0;i<strlen(s);i++){
        if((int)s[i]>31 && (int)s[i]<128) sum[(int)s[i]]++;
    }
    for(int i=127;i>=0;i--){
        if(sum[i]>0) printf("%d %d\n", i, sum[i]);
    }
    return 0;
}