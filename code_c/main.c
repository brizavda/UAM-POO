#include <stdio.h>
#include "SumaPares.h"
#include "Vectores.h"
#include "NumPrimos.h"
#include "Calculadora.h"


int main()
{
    int opc;
    printf("¿Que deseas ver?\n\t1. Sumar pares\n\t2. Intercambiar vectores\n\t3. Es primo?\n\t4. Calculadora\n\t0. Salir\n");
    scanf("%i", &opc);
    
    do{
        switch(opc){
            case 1:
                int first, second;
                printf("\nIngresa tu primer numero: ");
                scanf("%i", &first);
                
                printf("Ingresa tu segundo numero: ");
                scanf("%i", &second);
                
                SumaPares(first,second);
                break;
            
            case 2:
                int tam;
                printf("\nIngresa el tamaño de tu arreglo: ");
                scanf("%i", &tam);
                
                Vectores(tam);
                break;
            
            case 3:
                int p;
                
                printf("\nIngresa un numero: ");
                scanf("%i", &p);
                
                int esP = NumPrimos(p);
                
                if(esP == 1){
                    printf("%d es un numero primo", p);
                }else if(esP == 0){
                    printf("%d no es un numero primo", p);
                }
                
                break;
                
            case 4:
                int a, b;
                printf("\nIngresa tu primer numero: ");
                scanf("%i", &a);
                
                printf("Ingresa tu segundo numero: ");
                scanf("%i", &b);
                
                int resultado = Calculadora(a,b);
                
                printf("\nEl resultado es: %d\n", resultado);
                break;
            
            default:
                printf("Opcion incorrecta. Intenta de nuevo\n");
            break;
        }
        
        printf("\n\n¿Que deseas ver?\n\t1. Sumar pares\n\t2. Intercambiar vectores\n\t3. Es primo?\n\t4. Calculadora\n\t0. Salir\n");
        scanf("%i", &opc);
        
    }while(opc != 0);
    
    printf("Saliendo...");
    return 0;
}
