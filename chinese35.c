#include<stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    int zodiac;
    zodiac=year%12-3;
    if(zodiac<0){
        zodiac+=12;
    }
    if(zodiac==0) printf("pig\n");
    else if(zodiac==1) printf("rat\n");
    else if(zodiac==2) printf("ox\n");
    else if(zodiac==3) printf("tiger\n");
    else if(zodiac==4) printf("rabbit\n");
    else if(zodiac==5) printf("dragon\n");
    else if(zodiac==6) printf("snake\n");
    else if(zodiac==7) printf("horse\n");
    else if(zodiac==8) printf("sheep\n");
    else if(zodiac==9) printf("monkey\n");
    else if(zodiac==10) printf("rooster\n");
    else printf("dog\n");
    //printf("%d\n", zodiac);
    return 0;
}