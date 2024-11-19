#include <stdio.h>

struct Customer {
    int accountNumber;
    char name[100];
    float balance;
};

void printLowBalanceCustomers(struct Customer customers[], int count) {
    for (int i = 0; i < count; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void updateBalance(struct Customer customer, float amount, int code) {
    if (code == 1) {
        customer.balance += amount;
        printf("Deposited: Rs. %.2f. New Balance: Rs. %.2f\n", amount, customer.balance);
    } else if (code == 0) {
        if (customer.balance >= amount) {
            customer.balance -= amount;
            if (customer.balance < 100) {
                printf("Insufficient Balance after withdrawal. Current Balance: Rs. %.2f\n", customer.balance);
            } else {
                printf("Withdrawn: Rs. %.2f. New Balance: Rs. %.2f\n", amount, customer.balance);
            }
        } else {
            printf("Insufficient Balance. Current Balance: Rs. %.2f\n", customer.balance);
        }
    }
}

int main() {
    struct Customer customers[5] = {
        {101, "cst1", 150.0},
        {102, "cst2", 90.0},
        {103, "cst3", 200.0},
        {104, "cst4", 50.0},
        {105, "cst5", 120.0}
    };

    printf("Customers with balance below Rs. 100:\n");
    printLowBalanceCustomers(customers, 5);

    updateBalance(customers[1], 20.0, 1); 
    updateBalance(customers[3], 10.0, 0); 
    updateBalance(customers[3], 60.0, 0); 
    return 0;
}