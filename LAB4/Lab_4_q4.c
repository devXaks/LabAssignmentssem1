#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements in integer array :");
    scanf("%d",&num);
    int arr[num];
    int arr1[num];
    int cnt;
    int temp;
    printf("Enter the elements of the array separated by spaces");
    for(int i = 0 ; i < num;i++){
        scanf("%d",&arr[i]);
    }

    for(int j = 0 ; j<num;j++){
        cnt = 0;
    
        for(int k = 0;k<num;k++){
            if(arr[j]==arr[k]){
                break;
            }
            else{
                temp = arr[j]
                if()

            }
        }
    }
    
    return 0;
}