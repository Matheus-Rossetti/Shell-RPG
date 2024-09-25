#include <stdio.h>
#include <unistd.h>

void pimp(int mapa[20][20], int *tra, int *trb, int *memoria){

  char mov, menu;
  
  mov = getch();
  
  switch(mov){ 
    case 'w': //cima
      if(mapa[*tra-1][*trb] != 0){

        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra) , (*trb * 3 + 1));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);

        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra-1][*trb];
        (*tra)--;
        mapa[*tra][*trb] = 3;
      }
    break;

    case 's': //baixo
      if(mapa[*tra+1][*trb] != 0){
        
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra + 2) , (*trb * 3 + 1));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
      
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra+1][*trb];
        (*tra)++;
        mapa[*tra][*trb] = 3;
      }
    break;

    case 'a': //esquerda
      if(mapa[*tra][*trb-1] != 0){
      
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra + 1) , (*trb * 3 - 2));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
        
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra][*trb-1];
        (*trb)--;
        mapa[*tra][*trb] = 3;
      
      }
    break;

    case 'd': //direita
       if(mapa[*tra][*trb+1] != 0){

        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra + 1) , (*trb * 3 + 4));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
        
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra][*trb+1];
        (*trb)++;
        mapa[*tra][*trb] = 3;
      
      }
    break;

    case 'q': //diagonal cima/esquerda
      if(mapa[*tra-1][*trb-1] != 0){
       
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra) , (*trb * 3 - 2));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
        
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra-1][*trb-1];
        (*tra)--;
        (*trb)--;
        mapa[*tra][*trb] = 3;
      
      }
    break;

    case 'e': //diagonal cima/direita
      if(mapa[*tra-1][*trb+1] != 0){
      
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra) , (*trb * 3 + 4));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
      
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra-1][*trb+1];
        (*tra)--;
        (*trb)++;
        mapa[*tra][*trb] = 3;
      
      }
    break;
    
    case 'z': //diagonal baixo esquerda
      if(mapa[*tra+1][*trb-1] != 0){
      
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra + 2) , (*trb * 3 - 2));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
      
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra+1][*trb-1];
        (*tra)++;
        (*trb)--;
        mapa[*tra][*trb] = 3;
      
      }
    break;

    case 'x': //diagonal baixo/direita
      if(mapa[*tra+1][*trb+1] != 0){
      
        printf("\033[%d;%df\033[37m ♦ \033[0m", (*tra + 2) , (*trb * 3 + 4));

        printf("\033[%d;%df", (*tra + 1) , (*trb * 3 + 1));
        switch_print(*memoria);
        
        mapa[*tra][*trb] = *memoria;
        *memoria = mapa[*tra+1][*trb+1];
        (*tra)++;
        (*trb)++;
        mapa[*tra][*trb] = 3;
      
      }
    break;

    case 'm': //menu
    menu = 'm';
    system("clear");
    printf("\n |SALVAR|       NÍVEL\n");
    printf("\n  MMMMM        LLLLL\n");

    while(menu != 'x'){
      menu = getch();
      switch(menu){
        case 'd':
          system("clear");
          printf("\n  SALVAR       |NÍVEL|\n");
          printf("\n  MMMMM        LLLLL\n");
        break;
        
        case 'a':
          system("clear");
          printf("\n  |SALVAR|       NÍVEL\n");
          printf("\n  MMMMM        LLLLL\n");
        break;

        case'\n':
          system("clear");
          for(int j=0;j<20;j++){
            for(int m=0;m<20;m++){
              printf("%i ", mapa[j][m]);
            }
          }
      }
    }  
  case 'n':
  printf("\033[%d;%df", 22, 30);
  printf("                      ");
  printf("\033[%d;%df", 22, 30);
  namegen();
  break;
}
}