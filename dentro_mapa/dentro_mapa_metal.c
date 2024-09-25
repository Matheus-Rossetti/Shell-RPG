#include <stdio.h>

void dentro_mapa_metal(int mapa_metal[20][20], int *tra, int *trb, int *memoria, int mapa_inicial[20][20]){

  
  mapa_inicial[*tra][*trb] = 5;
  int dentro = 1;
  *memoria = mapa_metal[*tra][18];
  *trb = 18;
  mapa_metal[*tra][18] = 3;
  
  printf("\033[%d;%df", 1, 1);
  for(int m=0;m<20;m++){
    for(int j=0;j<20;j++){
      switch_print(mapa_metal[m][j]);
    }
    printf("\n");
  }
      
  while(dentro == 1){
    // print_num(mapa_metal);
    pimp(mapa_metal, &*tra, &*trb, &*memoria);
    printf("\033[%d;%df %i  %i", 22, 2, *tra, *trb);
    
    for(int m=9; m<11; m++){
      if(*tra == m && *trb == 19){
        mapa_metal[*tra][*trb] = *memoria;
        *trb = 1;
        *memoria = mapa_inicial[*tra][*trb];
        mapa_inicial[*tra][*trb] = 3;
        dentro = 0;
      }
    } 
    
  } 
  

}