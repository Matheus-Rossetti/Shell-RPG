#include <stdio.h>
#include <time.h>

int main(void) {

system("clear");

  int mapa_inicial[20][20], castelo[20][20], mapa_gelo[20][20], mapa_fogo[20][20], mapa_metal[20][20], mapa_raio[20][20];  //vetor que desenha os mapas
  int m=0, j=0, f=0, i=0; //loop
  int tra=0, trb=0, memoria=1, etra[5], etrb[5]; //trackea a posição do jogador
  
  int vida_total=100, vida_atual=90, dano=10, velocidade=0; // status do jogador
  char nome[20] = "cavaleiro";

//-------------------
  // srand(time(NULL)); //inicia o timer para a escolha aleatória
//-------------------

mapgen(mapa_inicial, castelo, mapa_gelo, mapa_fogo, mapa_metal, mapa_raio); //gera o mapa 

   printf("\033[?25l"); //esconde o cursor
  // printf("\033[?25h"); // mostra o cursor

// startmenu(m , j, mapa_inicial); // tela inicial


  mapa_inicial[15][9] = 3; // posição do jogador
  // enspawn(mapa_inicial, etra, etrb);
  
  for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      if(mapa_inicial[m][j] == 3){ tra = m; trb = j;}
    }
  }
  
print_mapa_inicial(mapa_inicial); // função que printa o mapa
  
while(1){
  
  coordenadas(&tra, &trb, &memoria);
  // print_num(mapa_inicial);


  //--------- CASTELO ----------//  
  for(m=9;m<11;m++){
    if(tra == 14 && trb == m){    
      dentro_castelo(castelo, &tra, &trb, &memoria, mapa_inicial);
      print_mapa_inicial(mapa_inicial);
    }
  }

  //------- GELO --------//
  for(m=9;m<11;m++){
    if(tra == 19 && trb == m){
      dentro_mapa_gelo(mapa_gelo, &tra, &trb, &memoria, mapa_inicial, &vida_total, &vida_atual, &dano, &velocidade, &nome, &etra, &etrb);  // baixo 
      print_mapa_inicial(mapa_inicial);
    }
  }

  //----- METAL -------//
  for(m=9;m<11;m++){
    if(tra == m && trb == 0){
      enspawn(mapa_metal, etra, etrb); // spawna os inimigos
      dentro_mapa_metal(mapa_metal, &tra, &trb, &memoria, mapa_inicial);  // esquerda
      print_mapa_inicial(mapa_inicial);
    }
  }

  //----- RAIO -------//
  for(m=9;m<11;m++){
    if(tra == 0 && trb == m){
      enspawn(mapa_raio, etra, etrb); // spawna os inimigos
      dentro_mapa_raio(mapa_raio, &tra, &trb, &memoria, mapa_inicial);  // cima
      print_mapa_inicial(mapa_inicial);
    }
  }

  //-------- FOGO --------//
  for(m=9;m<11;m++){
    if(tra == m && trb == 19){
      enspawn(mapa_fogo, etra, etrb); // spawna os inimigos
      dentro_mapa_fogo(mapa_fogo, &tra, &trb, &memoria, mapa_inicial);  // direita
      print_mapa_inicial(mapa_inicial);
    }
  }


  
  pimp(mapa_inicial, &tra, &trb, &memoria);
  
} // while 

  
  
  return 0;
}