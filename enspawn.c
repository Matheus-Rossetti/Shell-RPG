#include <stdio.h>
#include <time.h>

void enspawn(int mapa[20][20], int etra[5], int etrb[5]){

  for(int c=0;c<5;c++){
    mapa[rand() % 21][rand() % 21] = 100; // teste de inimigos
  }
  
  int i = 0;
  for(int m=0;m<20;m++){
    for(int j=0;j<20;j++){
      if(mapa[m][j] == 100){ 
        etra[i] = m;
        etrb[i] = j;
        i++;
        if (i == 5) {
          return;
        }
      }
    }
  }

  printf("\033[%d;%df %i %i", 24, 15, etra[0], etrb[0]);

  
}