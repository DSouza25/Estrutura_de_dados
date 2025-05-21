// Implemente uma função 'celsiusParaFahrenheit' que converte uma temperatura de Celsius para Fahrenheit. 

#include <stdio.h>
#include <stdlib.h>

float celsiusParaFahrenheit(float temperatura){
    return (temperatura * 9/5)+32;
}


int main(){

    printf("%.2f", celsiusParaFahrenheit(25));
    return 0;
}