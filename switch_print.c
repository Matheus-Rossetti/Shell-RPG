#include <stdio.h>

void switch_print(int mapa){
      
      switch (mapa){
        
        case 0:
        printf("\033[34;48;2;1;0;27m ~ \033[0m");
        break;
        
        case 1: // mapa inicial
        printf("\033[40;1;38;2;124;50;0m ■ \033[0m");
        break;
         
        case 2:
        printf("\033[40;38;2;1;146;1m´“`\033[0m");
        break;

        case 3:
        printf("\033[37m ♦ \033[0m");
        break;          
        
        case 4:
        printf("\033[34;48;2;1;0;27m ~ \033[0m");
        break;

        case 5:
        printf("\033[40;38;2;0;0;0m ■ \033[0m");
        break;

        case 100:
        printf("\033[40;38;2;255;0;0m E \033[0m");
        break;

        case 11: // castelo
        printf("   ");
        break;

        case 21: // mapa gelo
        printf("\033[40;38;2;222;255;255m ■ \033[0m");
        break;

        case 31: // mapa metal
        printf("\033[40;1;38;2;150;255;255m ■ \033[0m");
        break;

        case 41: // mapa raio
        printf("\033[40;1;38;2;255;225;120m ■ \033[0m");
        break;

        case 51: // mapa fogo
        printf("\033[40;1;38;2;255;50;50m ■ \033[0m");
        break;



        
        
        default:
        break;
      }
}