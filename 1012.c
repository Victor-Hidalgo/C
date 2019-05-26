#include <stdio.h>
#include <stdlib.h>

int swap(int first, int second){

    if(abs(second) > abs(first)){

        return second;
    }

    else
    {
        return first;
    }
    
}

int main(void){

    int n;

    printf("Please enter the matrix size:");
    scanf("%d", &n);

    printf("\nPlease enter the matrix\n");

    int rows = n;
    int i = 0, j = 0;
    int cells[rows][n];

    while (i < rows)
    {
        while (j < n)
        {
            scanf("%d", &cells[i][j]);

            j++;
        }

        j = 0;
        i++;
    }
    
    i = 0;
    int maximum;

    while (i < rows)
    {
        while (j < n-1)
        {
            
            maximum = swap(cells[i][j], cells[i][j+1]);
            j++;
        }
        
        j = 0;
        i++;
    }
    
    printf("Aullando %d", maximum);

    return 0;
}