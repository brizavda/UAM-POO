/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sumaPares(int n, int m){
    int suma = 0;
    
    while(n<=m){
        if(n%2 == 0){
            
            suma += n;
            printf("%i", n);
            if(n != m){
            
            printf("+");
            }
            n += 2;
        
        }else{
            
            n += 1;
            
        }
    }
    
    printf(" = %i", suma);
    
}

int vectores(int n){
    
    int vector[n];
    int i;
    int j;
    
    printf("\n");
    for(i = 0; i < n; i++){
        printf("Escriba el valor %d : ", i+1);
        scanf("%d", &vector[i]);
    }
    
    printf("\nArreglo original\n");
    for(j = 0; j < n; j++){
        printf("%d ", vector[j]);
    }
    
    printf("\nArreglo resultante\n");
    for(j = n-1; j >= 0; j--){
        printf("%d ", vector[j]);
    }
}

int primo(int p){
    
    int flag = 0;
    int esPrimo;
    
    for(int i = 1; i <= p; i++){
        
        if(p%i == 0){
            
            flag += 1;
        
        }
    }
    
    if(flag == 2){
        esPrimo = 1;
    }else{
        esPrimo = 0;
    }
    
    return esPrimo;
}

int calculadora(int a, int b){
    
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
                
                sumaPares(first,second);
                break;
            
            case 2:
                int tam;
                printf("\nIngresa el tamaño de tu arreglo: ");
                scanf("%i", &tam);
                
                vectores(tam);
                break;
            
            case 3:
                int p;
                
                printf("\nIngresa un numero: ");
                scanf("%i", &p);
                
                int esP = primo(p);
                
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
                
                int resultado = calculadora(a,b);
                
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
