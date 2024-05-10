#include<stdio.h>
#include<math.h> 
int main() {
    float monto_mensual, interes_anual;
    int meses;

    // Solicitar al usuario que ingrese el monto mensual, el interés anual y el número de meses
    printf("Ingrese el monto mensual a invertir: ");
    scanf("%f", &monto_mensual);

    printf("Ingrese el interés anual: ");
    scanf("%f", &interes_anual);

    printf("Ingrese el número de meses: ");
    scanf("%d", &meses);

    float total_interes_anual = 0, total_interes_mensual = 0, total_monto = 0, total_todos_meses = 0;

    // Calcular e imprimir el desglose para cada mes
    printf("\n   Mes\tInteres Anual\tInteres Mensual\tMonto Total\n");
    for (int i = 1; i <= meses; ++i) {
        float interes = interesanual(interes_anual);
        float interes_mensual = interesmesual(interes_anual);
        float monto_total = calcularMontoTotal(monto_mensual, interes_mensual, i);
        total_interes_anual += interes;
        total_interes_mensual += interes_mensual;
        total_monto += monto_total;
        printf("   %d\t%f\t%f\t%f\n", i, interes, interes_mensual, monto_total);
    }

    // Calcular y mostrar el total de todos los meses
    total_todos_meses = montomensual(monto_mensual, total_interes_mensual);
    printf("\nEl monto total de todos los meses es: %f\n", total_todos_meses);

    // Imprimir el total acumulado de intereses anuales, intereses mensuales y el monto total
    printf("\nTotal acumulado:\n");
    imprimirresultados(total_interes_anual, total_interes_mensual, total_monto, total_todos_meses);

    return 0;
}

