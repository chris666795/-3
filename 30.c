#include<stdio.h>

int main(){
    int n[2];
    scanf("%d%d", &n[0], &n[1]);
    if(n[0]==1){
        if(n[1]<21) printf("Capricorn\n");
        else printf("Aquarius\n");
    }
    else if(n[0]==2){
        if(n[1]<19) printf("Aquarius\n");
        else printf("Pisces\n");
    }
    else if(n[0]==3){
        if(n[1]<21) printf("Pisces\n");
        else printf("Aries\n");
    }
    else if(n[0]==4){
        if(n[1]<21) printf("Aries\n");
        else printf("Taurus\n");
    }
    else if(n[0]==5){
        if(n[1]<22) printf("Taurus\n");
        else printf("Gemini\n");
    }
    else if(n[0]==6){
        if(n[1]<22) printf("Gemini\n");
        else printf("Cancer\n");
    }
    else if(n[0]==7){
        if(n[1]<23) printf("Cancer\n");
        else printf("Leo\n");
    }
    else if(n[0]==8){
        if(n[1]<24) printf("Leo\n");
        else printf("Virgo\n");
    }
    else if(n[0]==9){
        if(n[1]<24) printf("Virgo\n");
        else printf("Libra\n");
    }
    else if(n[0]==10){
        if(n[1]<24) printf("Libra\n");
        else printf("Scorpio\n");
    }
    else if(n[0]==11){
        if(n[1]<23) printf("Scorpio\n");
        else printf("Sagittarius\n");
    }
    else if(n[0]==12){
        if(n[1]<22) printf("Sagittarius\n");
        else printf("Capricorn\n");
    }
}