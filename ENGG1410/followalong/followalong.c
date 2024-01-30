#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nums[3][3][3] = {
        {
            {1,1,1},
            {2,2,2},
            {3,3,3}
        },
        {
            {4,4,4},
            {5,5,5},
            {6,6,6},
        },
        {
            {7,7,7},
            {8,8,8},
            {9,9,9}
        }
    };
    int i, j, k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%5d", nums[i][j][k]);
            }
            printf("      ");
        }
        printf("\n");
    }
    return 0;
}