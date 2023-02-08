#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char str[100],f='A';
    int i;

    printf("Enter String: ");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        switch (f){
            case 'A': 
                    if(str[i]=='a') f='B';
                    else f='D';
                    break;
            case 'B':
                    if(str[i]=='a') f='D';
                    else f='C';
                    break;
            case 'C':
                    if(str[i]=='a') f='C';
                    else f='C';
                    break;
            case 'D':
                    if(str[i]=='a') f='D';
                    else f='D';
                    break;
 
        }

    }

    if(f=='C') printf("\nString Accepted");
    else printf("\nString not accepted");
}