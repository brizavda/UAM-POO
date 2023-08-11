#include <stdio.h>

int Calculadora(int a, int b){
    
    int opc;
    int resultado;
    printf("\n¿Que deseas calcular?\n\t1. Suma\n\t2. Resta\n\t3. Multiplicacion\n\t4. División\n");
    scanf("%i", &opc);
    
    switch(opc){
        case 1: 
            resultado = a + b;
            break;
        case 2: 
            resultado = a - b;
            break;
        case 3: 
            resultado = a * b;
            break;
        case 4: 
            resultado = a / b;
            break;
        default:
            printf("Opcion incorrecta. Intenta de nuevo\n");
            break;
    }
    
    return resultado;
}