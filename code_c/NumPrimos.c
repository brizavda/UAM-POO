#include <stdio.h>

int NumPrimos(int p){
    
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