#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in integer array :");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of the array separated by spaces");
    for(int i = 0 ; i < num;i++){
        scanf("%d",&arr[i]);
    }


    int min= arr[0];
    int max = arr[0];

    for(int j = 0;j<num;j++){
        if(arr[j]>max){
            max = arr[j];

        }
        if(arr[j]<min){
            min = arr[j];

        }
    }
    printf("The maximum value in the integer array is : %d\n",max);
    printf("The minimum value in the integer array is : %d",min);

    return 0;
}