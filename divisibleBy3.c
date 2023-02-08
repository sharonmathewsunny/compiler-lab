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
                    if(str[i]=='0') f='A';
                    else f='B';
                    break;
            case 'B':
                    if(str[i]=='0') f='C';
                    else f='A';
                    break;
            case 'C':
                    if(str[i]=='0') f='B';
                    else f='C';
                    break;
 
        }
    }

    if(f=='A') printf("\nString Accepted");
    else printf("\nString not accepted");
}