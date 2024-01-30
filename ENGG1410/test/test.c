#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3)
{
    int x, result;
    if(num1 > num2){
        x = num1;
    }else{
        x=num2;
    }
    if(x > num3){
        result = x;
    }else{
        result = num3;

        return result;
    }

}

int main()
{
    printf("%d", max(100, 200, 700));
    return 0;
}