#include<stdio.h>
#include"funciones.h"
// Declaración de la función interesmensual antes de la función main
float interesmesual(float a) {
    float interes = interesanual(a);
    float interesmensual = a * interes / 100;
    return interesmensual;
}
float interesanual(float interes_anual) {
    return interes_anual / 12;
}

float interesmensual(float interes_anual) {
    return interes_anual / 100;
}

float calcularMontoTotal(float monto_mensual, float interes_mensual, int meses) {
    // Calcula el monto total utilizando la fórmula del interés compuesto
    return monto_mensual * (pow(1 + interes_mensual, meses) - 1) / interes_mensual;
}

float montomensual(float monto_anterior, float interes_mensual) {
    return monto_anterior + interes_mensual;
}

void imprimirresultados(float interes_anual, float interes_mensual, float monto_total, float total_todos_meses) {
    printf("Interes anual total: %f\n", interes_anual);
    printf("Interes mensual total: %f\n", interes_mensual);
    printf("Monto total: %f\n", monto_total);
    printf("Monto total de todos los meses: %f\n", total_todos_meses);
}
