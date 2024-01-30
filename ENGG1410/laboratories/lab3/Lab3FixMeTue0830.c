 // Lab 3
// ENGG*1410
// Prepared by: Shilpa Shankar
// 4/10/2022
 
 #include<stdio.h>
 //Program to calculate dollarbills in 20,10,5 and 1 denomination
int main(void)
{   /* declaring variables */

    int amt,dollar_20=0, dollar_10=0, dollar_5=0, dollar_1=0, remainder_20=0, remainder_10, remainder_5;  

    printf("Enter the amount $: ");
    scanf("%d", &amt);
    dollar_20=amt/20;
    printf("number of 20 dollar bills is: %d\n",dollar_20);
    remainder_20=amt%20;
    dollar_10=remainder_20/10;
    printf("number of 10 dollar bills is: %d \n",dollar_10);
    remainder_10=remainder_20%10;
    dollar_5=remainder_10/5;
    printf("number of 5 dollar bills is: %d \n",dollar_5);
    remainder_5=remainder_10%5;
    dollar_1=remainder_5%5;
    printf("number of 1 dollar bills is: %d \n",dollar_1);

}