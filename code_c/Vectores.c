#include <stdio.h>

int Vectores(int n){
    
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
    
    return 0;
}