#include <stdio.h>

long factorial(int x);

double ex(double x, int y);

void fib(int n);

int fibo(int n);

void main(){
    double x = 123.59;
    printf("%7.1f", x);
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return fibo(1);
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }
}

double ex(double x, int y){
    if(y==0){
        return 1;
    }
    else if(y==1){
        return x;
    }
    else{
        return x*ex(x, y-1);
    }
}

long factorial(int x){
    if (x==0){
        return 1;
    }
    else{
        return x*factorial(x -1);
    }
}