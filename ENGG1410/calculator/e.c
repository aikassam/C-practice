#include <stdio.h>
#include <math.h>

double factorial(double a){
    double num = a;
    double n = num;
    for(int k = 1; k < n; k++){
        num--;
        a*=num;
        if(num<=0){
            break;
        }
    }
    if(a==0){
        return 1;
    }
    else{
        return a;    
}
}
double exp(double a){
    double x;
    for(int i=0;i<1000;i++){
        x += (pow(a,i) / factorial(i));
    }
    return x;
}
void main(){
  for(int j=0;j<10;j++){
    printf("%lf\n", exp(j));
  }
}