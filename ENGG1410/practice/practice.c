#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    int k = n;
    for(i=0;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",k );
        }
        printf("\n");
        k--;
    }
}