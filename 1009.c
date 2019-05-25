#include <stdio.h>
#include <math.h>

float factorial(int number){

    int i = 1;
    int product = 1;
    
    while (i<=number)
    {
        product = product * i;

        i++;
    }
    
    return product;
}

int main(void){

    float x; //positive real value
    int n; // positive integer
    int j = 1;
    float sum = 0;
    //n = factorial(4);

    printf("Enter a positive real value:");
    scanf("%f", &x);
    printf("\nEnter a positive integer:");
    scanf("%d", &n);

    while (j<=n)
    {
        sum = sum + (pow(x, j) / factorial(j));
        j++;
    }
    

    printf("\nResult: %.4f", sum);
    return 0;
}