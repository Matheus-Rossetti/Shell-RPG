#include <stdio.h>

int print_num(mapa[20][20]){

  printf("\033[%d;%df" , 21, 1);
  

  for(int m=0;m<20;m++){
    for(int j=0;j<20;j++){
      printf(" %i ", mapa[m][j]);
    }
    printf("\n");
  }
}