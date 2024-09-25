#include <stdio.h>

void dentro_castelo(int castelo[20][20], int *tra, int *trb, int *memoria, int mapa_inicial[20][20]){

  mapa_inicial[*tra][*trb] = 2;
  int dentro_castelo = 1;
  *tra = 17;
  *memoria = castelo[18][*trb];

  printf("\033[%d;%df", 1, 1);
    printf("|----------------------------------------------------------|\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|----------------------------------------------------------|\n");

  printf("\033[%d;%df\033[1mCASTELO\033[0m", 10, 21);
  printf("\033[%d;%df|          |", 19, 25);
  printf("\033[%d;%df|          |", 18, 25);
  printf("\033[%d;%df|          |", 17, 25);
  

  printf("\033[%d;%df\033[37m ♦ \033[0m", *tra + 1, *trb * 3 + 1);
 
  while(dentro_castelo == 1){
    coordenadas(&*tra, &*trb, &*memoria);
    pimp(castelo, &*tra, &*trb, &*memoria);
    for(int m=9; m<11; m++){
      if(*tra == 18 && *trb == m){
        *tra = 15;
        *memoria = mapa_inicial[15][*trb];
        mapa_inicial[*tra][*trb] = 3;
        dentro_castelo = 0;
      }
    } 
  }

  
}