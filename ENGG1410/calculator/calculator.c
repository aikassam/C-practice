#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char op;
    int amount, i, j, y;
    short l;
    while(op!=-1){
        printf("Select an operation from the following: \n1 = ADD\n2 = SUBTRACT\n3 = MULTIPLY\n4 = DIVIDE\n5 = POWER\n6 = SQUAREROOT\n7 = QUADRATIC FORMULA\n8 = FACTORIAL\n");
        scanf("\n%c", &op);
        double num, fac;
        double num1, num2, x=0, x2=0;
        if (op=='1'){
            printf("Enter how many numbers you wish to enter: \n");
            scanf("%d", &amount);
            double nums[amount];
            printf("Enter the numbers you wish to enter:\n");
            for(i=0;i<amount;i++){
                scanf("%lf", &nums[i]);
            }
            x = nums[0];
            for(j=1;j<amount;j++){
                x = x + nums[j];
            }
            printf("The sum is %f\n", x);
        }else if(op=='2'){
            printf("Enter how many numbers you wish to enter: \n");
            scanf("%d", &amount);
            double nums[amount];
            printf("Enter the numbers you wish to enter:\n");
            for(i=0;i<amount;i++){
                scanf("%lf", &nums[i]);
            }
            x = nums[0];
            for(j=1;j<amount;j++){
                x = x - nums[j];
            }
            printf("The difference is %f\n", x);
        }else if(op=='3'){
            printf("Enter how many numbers you wish to enter: \n");
            scanf("%d", &amount);
            double nums[amount];
            printf("Enter the numbers you wish to enter:\n");
            for(i=0;i<amount;i++){
                scanf("%lf", &nums[i]);
            }
            x=nums[0];
            for(j=1;j<amount;j++){
                x = x * nums[j];
            }
            printf("The product is %f\n", x);
        }
        else if(op=='4'){
            printf("Enter 1 for a decimal answer, enter 2 for an answer with a remainder: \n");
            int div;
            scanf("%d", &div);
            if(div==1){
                printf("Enter how many numbers you wish to enter: \n");
                scanf("%d", &amount);
                double nums[amount];
                printf("Enter the numbers you wish to enter:\n");
                for(i=0;i<amount;i++){
                    scanf("%lf", &nums[i]);
                }
                x=nums[0];
                for(j=1;j<amount;j++){
                    x = x / nums[j];
                }
            printf("The product is %f\n", x);
            }
            else if(div==2){
                int num1, num2, x, y;
                printf("Enter two numbers to divide: \n");
                scanf("%d%d", &num1, &num2);
                x = num1 / num2;
                y = num1 % num2;
                printf("The quotient is %d with a remainder of %d\n", x, y);
                }
        }else if(op=='5'){
            printf("Enter a number, then the power to raise it to: \n");
            scanf("%lf%lf", &num1, &num2);
            x = pow(num1, num2);
            printf("The %f to the power of %f is %f\n", num1, num2, x);
        }else if(op=='6'){
            printf("Choose a number to take the square root of: \n");
            scanf("%lf", &num1);
            x = sqrt(num1);
            printf("The square root of %f is %f\n", num1, x);
        }else if(op=='7'){
            double a, b, c;
            printf("Select an a, b, and c value: \n");
            scanf("%lf%lf%lf",&a,&b,&c);
            while (4*a*c > b*b){
                printf("No roots exist, please re-enter values: \n");
                scanf("%lf%lf%lf",&a,&b,&c);
            }
            x = (-b + sqrt(((b*b)-(4*a*c))))/(2*a);
            x2 = (-b - sqrt(((b*b)-(4*a*c))))/(2*a);
            printf("The roots of this quadratic are %f and %f\n", x, x2);
        }
        else if(op=='8'){
            printf("Enter the number you wish to take the factorial of:\n");
            scanf("%lf", &num);
            fac = num;
            int n = num;
            for(int k = 1; k < n; k++){
                fac--;
                num = num * fac;
                if(fac<=0){
                    break;
                }
            }
            printf("The factorial is %.0lf.\n", num);
        }else{
            printf("Invalid input, please try again: \n");
            scanf("\n", &op);
        }
    }
}