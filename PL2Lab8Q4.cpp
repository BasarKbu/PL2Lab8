#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//This program uses all of the string functions on the library.
/*
-Strlen
-Strcat
-Strcpy
-Strcmp
*/

int main(){
    char* str2 = (char*)malloc(100*sizeof(char));	
    char* str1 = (char*)malloc(100*sizeof(char));
    printf("Enter a string: \n"); gets(str1);	
	
    printf("The length of your string is:%d ",strlen(str1));
    strcpy(str2,"Ahmet");	
	printf("\n \n");
	
	if(!strcmp(str1,str2))
	printf("The strings content's are the same. \n");
	else
	printf("The strings content's are not the same. \n");	
	
	printf("The strings concatenate version:%s ",strcat(str1,str2));
	
	return 0;
}
