#include <stdio.h>
#include <stdlib.h> // Para as funções rand e srand
#include <time.h>   // Para a função time

char nome[20];

int namegen() {
  int pl, rdn, silabas, m;
  char consoantes[][3] = { "B", "C", "D", "F", "G", "H", "J", "K", "L","M", "N", "P", "Q", "R", "S", "T", "V", "W", "X", "Z", "BR", "BL", "CR", "CL", "CH", "CS", "DR", "DL", "FR", "FL", "GR", "GL", "GS", "KR", "KL", "KS", "NR", "NL", "NH", "PR", "PL", "PH", "PS", "QL", "QS", "RR", "RS", "SH", "SS", "TR", "TL", "TH", "TS", "VR", "VL", "VS", "WH", "XS", "YR", "YH", "YS", "ZH","LH"};

  char vogais[][3] = { "A", "E", "I", "O", "U", "AI", "EI", "OI", "AU", "EU", "IU", "AE", "AO", "IA", "IO", "UA", "UE", "UI", "AM", "AN", "EM", "EN", "IM", "IN", "OM", "ON", "UM", "UN"};

  char loop;
  
  srand(time(NULL));
  
  rdn = (rand() % 2);
  
  switch(rdn){
    case 0:
      nome[0] = vogais[rand() % 28]; //não funciona pois as vezes tenta salvar um conjunto (AM, BA, LO) em um só espaço (nome[0]);
      pl = 2;
    break;

    case 1:
      nome[0] = consoantes[rand() % 63];
    pl = 1;
  }

  silabas = ((rand() % 2) + 1);
  
  for(m=0;m<silabas;m++){
    switch(pl){
      case 1:
        nome[m+1] =vogais[rand() % 28];
        pl = 2;
      break;

      case 2:
        nome[m+1] =  consoantes[rand() % 63];
      pl = 1;
    }
  }

   if(pl == 1){ 
     nome[m+1] = vogais[rand() % 28];
       }

  printf("%s", nome);
    return;
}