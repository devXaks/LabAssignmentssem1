#include <stdio.h>

struct phonebook{
    char fname[10];
    char lname[20];
    long long int landline;
    long long int mobno;
}phnbk[100];

int main(){
    int lastrecord = 0;
    int choice;
    printf("Enter 1 for adding record, 2 for updating record, 3 for printing record");
    scanf("%d",choice);
    switch(choice){
        case 1:
        phnbk[lastrecord].fname = scanf("%s",)

    }

    
    return 0;
}