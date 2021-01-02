#include<stdio.h>
#include<ctype.h>

int main(){
    int count_letter[26]={0};
    char s[1000];
    scanf("%[^\n]", s);
    int count=0;
    int string_array[1000];
    while(s[count]){
        string_array[count]=toupper(s[count]);
        count++;
    }
    //for(int i=0;i<26;i++){
        for(int j=0;j<count;j++){
            if(string_array[j]>=65 && string_array[j]<=90) count_letter[string_array[j]-65]++;
            else continue;
        }
    //}
    for(int i=0;i<25;i++){
        printf("%d ", count_letter[i]);
    }
    printf("%d\n", count_letter[25]);
    return 0;
}