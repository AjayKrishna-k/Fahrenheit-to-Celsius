#include <stdio.h>

// °C = (°F − 32) × 5/9

int main() {
    float celsius, Fahrenheit;

    printf("Please enter the Temperature: ");
    scanf("%f", &Fahrenheit);

    celsius = (Fahrenheit- 32) * 5.0 / 9.0;

    printf("Celsius = %.3f\n", celsius);

    return 0;
}