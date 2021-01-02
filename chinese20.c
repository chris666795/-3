#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    int determine=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(array[i]==array[j]){
                determine=0;
                break;
            }
        }
    }
    printf("%d\n", determine);
    return 0;
}