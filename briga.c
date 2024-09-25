void briga(int *vida_total, int *vida_atual, int *dano, int *velocidade, char nome[10], int mapa[20][20], int etra[5], int etrb[5], int *i, int *tra, int *trb, int *memoria){
  
int briga = 1;
int menu_de_escolha=0;
char escolha;

  int evida_total = 50;
  int evida_atual = evida_total;
  int edano = 5;
  int evelocidade = 25;
  char enome[20] = "arrombado";


    while(briga != 0){

      printf("\033[%d;%df", 1, 1);
      printf("|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|\n");
      printf("|_______________________________________________________   |\n");
      printf("| %s acha que %s atacará pela direita        |", nome, enome);
  printf("\033[%d;%df|\n", 3, 57);
      printf("|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾   |\n");
      printf("|   /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾/|          /‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾/||\n");
      printf("|  /                     / |         /                  / ||\n");
      printf("| /                     /  |        /                  /  ||\n");
      printf("||‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|   |       |‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|   ||\n");
      printf("||                     |   |       |                  |  / |\n");
      printf("||                     |   |       |                  | /  |\n");
      printf("||                     |   |       |__________________|/   |\n");
      printf("||                     |   |       ___________________     |\n");
      printf("||                     |   |      | HP          %i/%i |    |\n", evida_atual, evida_total);
      printf("||                     |  /        ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾     |\n");
      printf("||                     | /                                 |\n");
      printf("||_____________________|/                                  |\n");
      printf("|______________________                                    |\n");
      printf("| HP          %i/%i  |                                    |\n", *vida_atual, *vida_total);
      printf("|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾                                    |\n");
      printf("|__________________________________________________________|\n");

      switch(escolha) {
        case 'w':
          if (menu_de_escolha >= 2){menu_de_escolha -= 2;}
          break;

        case 's':
          if (menu_de_escolha < 2){menu_de_escolha += 2;}
        break;

        case 'a':
          if (menu_de_escolha % 2 != 0) {menu_de_escolha--;}
        break;

        case 'd':
          if (menu_de_escolha % 2 != 1) {menu_de_escolha++;}
        break;
      }

      switch(menu_de_escolha){
      
        case 0: // atacar
          printf("\033[%d;%df|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|", 15, 33);           
          printf("\033[%d;%df|  ATACAR!    DEFENDER  |", 16, 33);
          printf("\033[%d;%df|                       |", 17, 33);
          printf("\033[%d;%df|  IMBUIR      CORRER   |", 18, 33);
          printf("\033[%d;%df|                       |", 19, 33);
          printf("\033[%d;%df|_______________________|", 20, 33);
          escolha = getch();
          if(escolha == '\n'){
            evida_atual -= *dano;
          }
          /*  printf("\033[%d;%df", 1, 1);
            printf("|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|\n");
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
            printf("|      ____________                      ____________      |\n");
            printf("|     |  Esquerda  |                    |   Direita  |     |\n");
            printf("|      ‾‾‾‾‾‾‾‾‾‾‾‾     ____________     ‾‾‾‾‾‾‾‾‾‾‾‾      |\n");
            printf("|                      |    Meio!   |                      |\n");
            printf("|                       ‾‾‾‾‾‾‾‾‾‾‾‾                       |\n");
            printf("|                                                          |\n");
            printf("|__________________________________________________________|\n");

                  printf("\033[%d;%df|      ____________                      ____________      |", 14, 1);
                  printf("\033[%d;%df|     |  Esquerda! |                    |   Direita  |     |", 15, 1);
                  printf("\033[%d;%df|      ‾‾‾‾‾‾‾‾‾‾‾‾     ____________     ‾‾‾‾‾‾‾‾‾‾‾‾      |", 16, 1);
                  printf("\033[%d;%df|                      |    Meio    |                      |", 17, 1);
                  printf("\033[%d;%df|                       ‾‾‾‾‾‾‾‾‾‾‾‾                       |", 18, 1); */          
        break;

        case 1: // defender
          printf("\033[%d;%df|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|", 15, 33);       
          printf("\033[%d;%df|  ATACAR    DEFENDER!  |", 16, 33);
          printf("\033[%d;%df|                       |", 17, 33);
          printf("\033[%d;%df|  IMBUIR      CORRER   |", 18, 33);
          printf("\033[%d;%df|                       |", 19, 33);
          printf("\033[%d;%df|_______________________|", 20, 33);
          escolha = getch();
          if(escolha == '\n'){
            *vida_atual += edano;
          }
        break;

        case 2: // imbuir
          printf("\033[%d;%df|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|", 15, 33);      
          printf("\033[%d;%df|  ATACAR     DEFENDER  |", 16, 33);
          printf("\033[%d;%df|                       |", 17, 33);
          printf("\033[%d;%df|  IMBUIR!     CORRER   |", 18, 33);
          printf("\033[%d;%df|                       |", 19, 33);
          printf("\033[%d;%df|_______________________|", 20, 33);
          escolha = getch();
          if(escolha == '\n'){
            *dano *= 2;
          }
        break;

        case 3: // correr
          printf("\033[%d;%df|‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾|", 15, 33);       
          printf("\033[%d;%df|  ATACAR     DEFENDER  |", 16, 33);
          printf("\033[%d;%df|                       |", 17, 33);
          printf("\033[%d;%df|  IMBUIR      CORRER!  |", 18, 33);
          printf("\033[%d;%df|                       |", 19, 33);
          printf("\033[%d;%df|_______________________|", 20, 33);
          escolha = getch();

          if(escolha == '\n'){
            briga = 0;
            // mapa[etra[*i]][etrb[*i]] = 3; // o jogo trava por algum motivo
            etra[*i] = 0;
            etrb[*i] = 0;
          }
        break;
      }
      if(escolha == '\n'){
        *vida_atual -= edano;
      }

      if(evida_atual <= 0){
        briga = 0;
        etra[*i] = 0;
        etrb[*i] = 0;
      }
      
    } 
}