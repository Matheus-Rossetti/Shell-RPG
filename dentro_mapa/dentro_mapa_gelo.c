#include <stdio.h>

void dentro_mapa_gelo(int mapa_gelo[20][20], int *tra, int *trb, int *memoria, int mapa_inicial[20][20], int *vida_total, int *vida_atual, int *dano, int *velocidade, int *nome, int *etra, int *etrb){
  
  mapa_inicial[*tra][*trb] = *memoria;
  int dentro = 1;
  *memoria = mapa_gelo[1][*trb];
  *tra = 1;
  mapa_gelo[1][*trb] = 3;

  enspawn(mapa_gelo, etra, etrb);
  
  printf("\033[%d;%df", 1, 1);
  for(int m=0;m<20;m++){
    for(int j=0;j<20;j++){
      switch_print(mapa_gelo[m][j]);
    }
    printf("\n");
  }
      
  while(dentro == 1){
    pimp(mapa_gelo, &*tra, &*trb, &*memoria);
    printf("\033[%d;%df %i  %i", 22, 2, *tra, *trb);

    for (int i=0;i< 5;i++){
      if ((etra[i] == *tra) && (etrb[i] == *trb)){
        briga(&*vida_total, &*vida_atual, &*dano, &*velocidade, &*nome, mapa_gelo, &*etra, &*etrb, &*tra, &*trb, &*memoria);

        printf("\033[%d;%df", 1, 1);
        for(int m=0;m<20;m++){
          for(int j=0;j<20;j++){
            switch_print(mapa_gelo[m][j]);
          }
          printf("\n");
        }
      }
    }
    
    for(int m=9; m<11; m++){
      if(*tra == 0 && *trb == m){
        mapa_gelo[*tra][*trb] = *memoria;
        *tra = 18;
        *memoria = mapa_inicial[*tra][*trb];
        mapa_inicial[*tra][*trb] = 3;
        dentro = 0;
      }
    }
    
  } 
  

}