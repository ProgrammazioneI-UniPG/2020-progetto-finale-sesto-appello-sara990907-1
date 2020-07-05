SARA HASNAOUI MATRICOLA:322294


#include "mylib.h"
#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int choose=0;
    system("clear");
    do while{

        printf("Scegli un opzione \n");
        printf(" 1. Crea cunicoli,\n 2. Gioca, \n 3. Termina Gioco.\n");
        printf(">$");
        scanf("%d",&choose);
        
        system("clear");
        
        switch(choose){
            case 1:
                crea_cunicoli();
                break;
        
        
            case 2:
                gioca();
                break;
            
            case 3:
                printf("Termine del gioco.\\\\\\..\n");
                termina_gioco();
                break;
                
            default:
                printf("Opzione non valida.....\n");
                break;
        }
    }while(choose!=3);
    
    
    return 0;
}

