#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int n=10;
    for(int i=0; i<10; i++){
        scanf("%d", &array[i]);
    }
    for(int j=0; j<10; j++){
        for(int j=0; j<10; j++){
            printf("%d ", array[j]);
        }
        printf("\n");
        int a = array[0];
        for(int k=0; k<9; k++){
           array[k] = array[k+1];
        }
        array[9] = a;
    }
    return 0;
}

