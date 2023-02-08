#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char str[100], f='A';
    int i;
    printf("Enter a String {0,1} : ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        switch(f){
            case 'A': if(str[i]=='0') f = 'B';
                      else if(str[i]=='1') f='A';
                      break;
            case 'B': if(str[i]=='0') f = 'C';
                      else if(str[i]=='1') f = 'A';
            case 'C': if(str[i]=='0') f = 'C';
                      else if(str[i]=='1') f = 'A';

        }

    }

    if(f=='C'){
        printf("\nString is accepted");
    }
    else{
        printf("\nString is NOT accepted");
    }
}