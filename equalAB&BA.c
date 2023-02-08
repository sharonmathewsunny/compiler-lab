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
                    else f='C';
                    break;
            case 'B':
                    if(str[i]=='a') f='B';
                    else f='D';
                    break;
            case 'C':
                    if(str[i]=='a') f='F';
                    else f='C';
                    break;
            case 'D':
                    if(str[i]=='a') f='E';
                    else f='D';
                    break;
            case 'E':
                    if(str[i]=='a') f='E';
                    else f='D';
                    break;
            case 'F':
                    if(str[i]=='a') f='F';
                    else f='G';
                    break;
            case 'G':
                    if(str[i]=='a') f='F';
                    else f='G';
                    break;
 
        }



    }

    if(f=='E'|| f=='A' || f=='B' || f=='C' || f=='G') printf("\nString Accepted");
    else printf("\nString not accepted");
}