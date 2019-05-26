#include <stdio.h>

int main(void){

    int degreesCelsius = -100;
    int degreesFarenheit;

    while (degreesCelsius <= 150)
    {
        degreesFarenheit = (degreesCelsius * 9/5) + 32;

        printf("Celsius = %d -> Farenheit = %d\n", degreesCelsius, degreesFarenheit);

        degreesCelsius = degreesCelsius + 5;
    }

    return 0;
}