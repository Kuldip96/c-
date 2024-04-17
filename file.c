#include<stdio.h>

int main(){

        FILE * data;

        char string[100];

        // data=fopen("file.txt","a");
        // fprintf(data,"%s",  string);

       
        data=fopen("file.txt","w");
        fscanf(data,"%s",string);
        printf("The value is %s",string);

}