#include <stdio.h>

main()
{
    float celsius, fahrenheit;
    int min, max, step;

    min = 0;
    max = 200;
    step = 20;
    fahrenheit = min;

    printf("Fahrenheit\tCelcius\n");
    while(fahrenheit <= max){
        celsius = (5.0/9.0) * (fahrenheit-32.0);
        printf("%10.1f %12.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
    return 0;
}
