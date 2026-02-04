#include <stdio.h>


void length(char *str){
 int count=0;
    while(*str !='\0'){
    count++;
    str++;
    }
 printf("Length of string is %d",count);
}

int main(){
char str[100];
printf("Enter String:");
scanf("%s",&str);

length(str);

return 0;
}