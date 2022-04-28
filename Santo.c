#include <stdio.h>
int main(){
int bill,amtgiv,quotient,remainder;
printf("Enter bill amount: ");
scanf("%d",&bill);
printf("Enter Amount Given: ");
scanf("%d",&amtgiv);
quotient = bill/amtgiv;
remainder = bill%amtgiv;

printf("The Remainder amount is: %d\n",remainder);
printf("The Quotient is: %d",quotient);
}
