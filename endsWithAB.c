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
                    else f='A';
                    break;
            case 'B':
                    if(str[i]=='b') f='C';
                    else f='B';
                    break;
            case 'C':
                    if(str[i]=='a') f='B';
                    else f='A';
                    break;

        }

    }

    if(f=='C') 
       { printf("\nString Accepted"); }   
    else 
       { printf("\nString not accepted");} 
}