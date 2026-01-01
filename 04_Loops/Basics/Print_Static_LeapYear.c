// Q7. Wap to print leap year from 2000 to 3000

#include<stdio.h>

void main(){
    int y=2000;
    printf("\n Using For loop\n");
    for(y;y<=3000;y++){
        if(y%4==0){
          
            printf("%d\n",y);

        }
    };

      printf("\n Using While loop\n");
      y=2000;
    while(y<=3000){
     if(y%4==0){
      
            printf("%d\n",y);
        }
         y++;
    }

      printf("\n Using Do..While loop\n");
      y=2000;
      do{
        if(y%4==0){
            printf("%d\n",y);
        }
         y++;
      }while(y<=3000);
}