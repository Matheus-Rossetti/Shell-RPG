#include <stdio.h>

void dentro_mapa_fogo(int mapa_fogo[20][20], int *tra, int *trb, int *memoria, int mapa_inicial[20][20]){

  
  mapa_inicial[*tra][*trb] = 5;
  int dentro = 1;
  *memoria = mapa_fogo[*tra][1];
  *trb = 1;
  mapa_fogo[*tra][1] = 3;
  
  printf("\033[%d;%df", 1, 1);
  for(int m=0;m<20;m++){
    for(int j=0;j<20;j++){
      switch_print(mapa_fogo[m][j]);
    }
    printf("\n");
  }
      
  while(dentro == 1){
    // print_num(mapa_fogo);
    pimp(mapa_fogo, &*tra, &*trb, &*memoria);
    coordenadas(&*tra, &*trb, &*memoria);
    
    for(int m=9; m<11; m++){
      if(*tra == m && *trb == 0){
        mapa_fogo[*tra][*trb] = *memoria;
        *trb = 18;
        *memoria = mapa_inicial[*tra][*trb];
        mapa_inicial[*tra][*trb] = 3;
        dentro = 0;
      }
    } 
    
  } 
  

}