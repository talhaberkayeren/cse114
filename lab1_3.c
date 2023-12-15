#include <stdio.h>


float calculate_bill(int consumption, int price){
    return price*consumption;
}

char calculate_bill_category(int bill){
    if(bill>=0 && bill<=50) return 'L';
    else if(bill>=51 && bill<=100) return 'M';
    else if(bill>=101 && bill<=200) return 'H';
    else return 'V';
}

int main()
{
    char name[10];
    int consumption,price,bill;
    printf("Please enter your name: "); scanf("%s", name);
    printf("Enter your consumption amount by kWh type: "); scanf("%d", &consumption);
    printf("Enter the amount of charge per kWh: "); scanf("%d", &price);
    bill=calculate_bill(consumption,price);
    printf("Dear %s, your bill category is: %c",name,calculate_bill_category(bill));
    
    
    return 0;
}
