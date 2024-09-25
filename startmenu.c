#include <stdio.h>

int startmenu(int m, int j, int mapa_inicial[20][20]){

int classmenu = 0, f; 
char ini, esclasse;

/*      printf(" ________________\n");
      printf("Escolha sua classe\n");
      printf("   ♦          ☽   \n");
      printf("        ⚪        \n");   

while(esclasse != '\n'){
  
  esclasse = getch();
  
  
  switch(esclasse){
    case 'a':
      classmenu--;
      classmenu < 0 ? classmenu = 2 : f++;
      
    break;
  
    case 'd':
      classmenu++;
      classmenu > 2 ? classmenu = 0 : f--;
        
    break;
  }

while (1) {
        switch(classmenu) {
            case 0:
                printf(" ________________\n");
                printf("Escolha sua classe\n");
                printf("   ♦          ☽   \n");
                printf("        ⚪        \n");
                break;

            case 2:
                printf(" ________________\n");
                printf("Escolha sua classe\n");
                printf("   ☽         ⚪   \n");
                printf("        ♦        \n");
                break;

            case 1:
                printf(" ________________\n");
                printf("Escolha sua classe\n");
                printf("   ⚪         ♦   \n");
                printf("        ☽        \n");
                break;
        }

        classmenu = (classmenu + 1) % 3; // Alterna entre as classes

        usleep(500000); // Atraso de 500ms (microsegundos)
        printf("\033[H\033[J"); // Limpa a tela
    }

}*/



  /*
                                  o
                            .-'"|
                            |-'"|
                                |   _.-'`.
                               _|-"'_.-'|.`.
                              |:^.-'_.-'`.;.`.
                              | `.'.   ,-'_.-'|
                              |   + '-'.-'   J
           __.            .d88|    `.-'      |
      _.--'_..`.    .d88888888|     |       J'b.
   +:" ,--'_.|`.`.d88888888888|-.   |    _-.|888b.
   | \ \-'_.--'_.-+888888888+'  _>F F +:'   `88888bo.
    L \ +'_.--'   |88888+"'  _.' J J J  `.    +8888888b.
    |  `+'        |8+"'  _.-'    | | |    +    `+8888888._-'.
  .d8L  L         J  _.-'        | | |     `.    `+888+^'.-|.`.
 d888|  |         J-'            F F F       `.  _.-"_.-'_.+.`.`.
d88888L  L     _.  L            J J J          `|. +'_.-'    `_+ `;
888888J  |  +-'  \ L         _.-+.|.+.          F `.`.     .-'_.-"J
8888888|  L L\    \|     _.-'     '   `.       J    `.`.,-'.-"    |
8888888PL | | \    `._.-'               `.     |      `..-"      J.b
8888888 |  L L `.    \     _.-+.          `.   L+`.     |        F88b
8888888  L | |   \   _..--'_.-|.`.          >-'    `., J        |8888b
8888888  |  L L   +:" _.--'_.-'.`.`.    _.-'     .-' | |       JY88888b
8888888   L | |   J \ \_.-'     `.`.`.-'     _.-'   J J        F Y88888b
Y888888    \ L L   L \ `.      _.-'_.-+  _.-'       | |       |   Y88888b
`888888b    \| |   |  `. \ _.-'_.-'   |-'          J J       J     Y88888b
 Y888888     +'\   J    \ '_.-'       F    ,-T"\   | |    .-'      )888888
  Y88888b.      \   L    +'          J    /  | J  J J  .-'        .d888888
   Y888888b      \  |    |           |    F  '.|.-'+|-'         .d88888888
    Y888888b      \ J    |           F   J    -.              .od88888888P
     Y888888b      \ L   |          J    | .' ` \d8888888888888888888888P
      Y888888b      \|   |          |  .-'`.  `\ `.88888888888888888888P
       Y888888b.     J   |          F-'     \\ ` \ \88888888888888888P'
        Y8888888b     L  |         J       d8`.`\  \`.8888888888888P'
         Y8888888b    |  |        .+      d8888\  ` .'  `Y888888P'
         `88888888b   J  |     .-'     .od888888\.-'
          Y88888888b   \ |  .-'     d888888888P'
          `888888888b   \|-'       d888888888P
           `Y88888888b            d8888888P'
             Y88888888bo.      .od88888888   hs
             `8888888888888888888888888888
              Y88888888888888888888888888P
               `Y8888888888888888888888P'
                 `Y8888888888888P'
                      `Y88888P'
  
  
  / \               / \
 /   \             /   \
(_____)           (_____)
 |   |  _   _   _  |   |
 | O |_| |_| |_| |_| O |
 |-  |          _  | - |
 |   |   - _^_     |   |
 |  _|    //|\\  - |   |
 |   |   ///|\\\   |  -|
 |-  |_  |||||||   |   |
 |   |   |||||||   |-  |
 |___|___|||||||___|___|
         (      (
          \      \
           )      )
           |      |
           (      (
            \      \

  
printf("⠀⠀⠀⠀ ⠀⠀⠀ ⢀⣠⣶⣶⣿⣿⣿⣿⡶⠤\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⡿⠛⢉⣉⡉⠙⣿⠓⠙⠓\n");
printf("⠀⠀⠀⠀⠀⠀⠀⣸⣿⠏⣠⣾⣿⣿⣿⣿⣦⡀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⢻⡟⢠⣿⣿⣿⣿⠿⠿⣿⣿⡀\n");
printf("⠀⠀⢠⡀⠀⠀⠀⣾⡇⠈⣿⣿⣿⣿⣧⣿⡒⠬⢅\n");
printf("⠀⠀⠈⠻⡀⠀⠀⡸⠃⢠⣿⣿⣿⣿⣿⣿⣿⢲⢄\n");
printf("⠀⠀⠀⠀⠱⡀⠀⠀⠀⣬⣭⣛⢿⣿⣿⣿⡇⡌⡄\n");
printf("⠀⠀⠀⠀⠀⠱⠀⡠⠶⢾⣭⣛⢿⣿⣿⣿⢳⢃⠁\n");
printf("⠀⠀⠀⣀⣴⣿⣛⣿⣿⣶⣮⣿⣿⣿⣭⣉⡈⠈\n");
printf("⠀⠠⠭⣭⣭⣯⣝⣻⣿⣿⣿⣿⣿⣟⣒⡀⠀⠈⢲⣤⣀\n");
printf("⠀⣸⣿⣶⣶⣯⣟⠻⢿⣿⣿⡿⢿⣿⣿⣿⡀⠀⢈⡇⢻⣧\n");
printf("⢠⣿⣿⣿⣿⣿⣿⣿⡦⢙⣿⣿⣦⡍⠻⣿⡇⣀⠞⠀⠀⠻\n");
printf("⠀⠀⢭⣉⠛⠿⣿⡿⢁⣾⣿⣿⣿⣿⠢⢀⠉⠁⠀⠀⠀⠀⢰⡇\n");
printf("⠀⠀⠘⢿⣿⣶⣌⠃⣾⣿⣿⣿⣿⣿⡇⠘⣷⡇⠀⣆⠀⠀⠸⠇\n");
printf("⠀⠀⠀⠘⣿⣿⡟⢰⣿⣿⣿⣿⡿⠟⠁⣠⣿⡇⠀⣿⣿⣾\n");
printf("⠀⠀⠀⠀⠘⣿⣇⣾⣿⣿⣿⣿⣿⣄⠈⠻⣿⡿⠖⠈⣻⣿\n");
printf("⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⡇⢠⣿⡇⢀⣾⣿⡏\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⣿⣷⢸⣿⡇⢸⣿⡿\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⢸⣿⠇⣸⡿⠁\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣿⠀⠟⠁\n");*/
  



  
   // scanf(" %i", &m);
  
while(m != 3){
  switch(ini){
    case 'w':
    m == 0 ? m=1 : j++;
    m--;
    break;
    
    case 's':
    m == 2 ? m=1 : j++;
    m++;
    break;
  }

  switch(m){
    case 0:
    system("clear");
    printf("\n┏━━━━━━━━━━━━━━━━━━━━━━┓    Dawnrise");
    printf("\n|       |INICIAR|      |");
    printf("\n|         SAIR         |");
    printf("\n|       TUTORIAL       |");
    printf("\n┗━━━━━━━━━━━━━━━━━━━━━━┛   %i", m);
    ini = getch(); 
    ini == '\n' ? m = 3 : j++;
    break;
  
    case 1:
    system("clear");
    printf("\n┏━━━━━━━━━━━━━━━━━━━━━━┓");
    printf("\n|        INICIAR       |");
    printf("\n|        |CARREGAR|    |");
    printf("\n|       TUTORIAL       |");
    printf("\n┗━━━━━━━━━━━━━━━━━━━━━━┛   %i", m);
    
    ini = getch();
      
    if(ini == '\n'){ 
      system("clear");
      printf("\n cole o codigo\n\n");
        for(j=0;j<20;j++){
          for(m=0;m<20;m++){
            scanf("%i", &mapa_inicial[j][m]);
          }
        }
      m=0;
    }
    break;

    case 2:
    system("clear");
    printf("\n┏━━━━━━━━━━━━━━━━━━━━━━┓");
    printf("\n|        INICIAR       |");
    printf("\n|         SAIR         |");
    printf("\n|      |TUTORIAL|      |");
    printf("\n┗━━━━━━━━━━━━━━━━━━━━━━┛   %i", m);
    ini = getch(); 
      if(ini == '\n'){
        system("clear");
        printf("\n┏━━━━━━━━━━━━━━━━━━━━━━━━┓");
        printf("\n|       ┓                |");
        printf("\n|   W   |                |");   
        printf("\n| A   S |-- Movimentação |");
        printf("\n|   D   |                |");
        printf("\n|       ┛ P = Selecionar |");
        printf("\n|         X = Voltar     |");
        printf("\n┗━━━━━━━━━━━━━━━━━━━━━━━━┛");
      }
      ini = getch(); 
    break;
  }


}


}