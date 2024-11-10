#include <stdio.h>

int main(){
    for(int i = 0;i<10;i++){
        printf("%d",i);


      if(i == 8){
        printf("i = 10, exiting loop");
        exit(0);
      }  
    }

    printf("Merko toh execute karlete");
    return 0;
}