#include<stdio.h>

int main(){
    int numeroDigitado, fat = 1;
    
    printf("Digite um numero");
    scanf("%d",&numeroDigitado);
    
    
    while(numeroDigitado>0){
    	fat = fat*numeroDigitado;
    	numeroDigitado--;
    }
    
    printf("Fatorial e: %d",fat); 
       
    return 0;
}
