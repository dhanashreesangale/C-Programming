#include <stdio.h>

int main() {
  float fahrenheit, celsius, kelvin;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32) * 5 / 9;

  kelvin = celsius + 273.15;

  printf("%.2f Fahrenheit is equal to:\n", fahrenheit);
  printf("%.2f Celsius\n", celsius);
  printf("%.2f Kelvin\n", kelvin);

  return 0;
}