#include <stdio.h>

int main(){
    //Ascending Order
    int num;
    int temp;
    printf("Enter the number of elements in integer array :");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array separated by spaces");
    for(int i = 0 ; i < num;i++){
        scanf("%d",&arr[i]);
    }
    

    for(int j = 0 ; j<num;j++){
        for(int k = 0;k<num-1;k++){
            if(arr[k]>arr[k+1]){
                temp = arr[k+1];
                arr[k+1]=arr[k];
                arr[k]= temp;
                
            }
        }
    }

    for(int l  =0;l<num;l++){
        printf("%d ",arr[l]);
    }
    return 0;
}