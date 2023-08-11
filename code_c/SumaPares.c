#include <stdio.h>

int SumaPares(int n, int m)
{
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
    
    return 0;
}