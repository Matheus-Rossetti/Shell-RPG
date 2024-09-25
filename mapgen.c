void mapgen(int mapa_inicial[20][20], int castelo[20][20], int mapa_gelo[20][20], int mapa_fogo[20][20], int mapa_metal[20][20], int mapa_raio[20][20], int m, int j){

for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      // A[m][j] = rand() % 2;
      mapa_inicial[m][j] = 1;
    }
  }
  
for(m=5;m<15;m++){ 
    for(j=5;j<15;j++){
      mapa_inicial[m][j] = 0;
    }
  } // agua em volta do castelo

for(m=6;m<14;m++){ 
    for(j=6;j<14;j++){
      mapa_inicial[m][j] = 2;
    }
  } // grama em volta do castelo

  mapa_inicial[14][9] = 4;
  mapa_inicial[14][10] = 4; // agua de baixo da ponte
  
//-------------------------------------------
for(m=0;m<9;m++){
  mapa_inicial[m][0] = 0;
}
for(j=0;j<9;j++){
  mapa_inicial[0][j] = 0;
}
for(m=11;m<20;m++){
  mapa_inicial[m][0] = 0;
}
for(j=0;j<9;j++){
  mapa_inicial[19][j] = 0;
}
for(m=11;m<20;m++){
  mapa_inicial[m][19] = 0;
}
for(j=11;j<20;j++){
  mapa_inicial[19][j] = 0;
}
for(m=0;m<9;m++){
  mapa_inicial[m][19] = 0;
}
for(j=12;j<20;j++){
  mapa_inicial[0][j] = 0;
}


  
 

  //----------------------
  for(m=0;m<20;m++){ 
    for(j=0;j<20;j++){
      castelo[m][j] = 11;
    }
  } // dentro do castelo

  for(m=8;m<12;m++){
    for(j=0;j<3;j++){
      mapa_inicial[m][j] = 5;
    }
  } // portão do raio

  for(m=0;m<3;m++){
    for(j=8;j<12;j++){
      mapa_inicial[m][j] = 5;
    }
  } // portão do fogo

  for(m=8;m<12;m++){
    for(j=17;j<20;j++){
      mapa_inicial[m][j] = 5;
    }
  } // portão do gelo

  for(m=17;m<20;m++){
    for(j=8;j<12;j++){
      mapa_inicial[m][j] = 5;
    }
  } // portão da terra

  for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      mapa_gelo[m][j] = 21;
    }
  } // dentro do mapa de gelo

  for(m=0;m<3;m++){
    for(j=8;j<12;j++){
      mapa_gelo[m][j] = 1;
    }
  } //portão dentro do mapa de gelo

  for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      mapa_metal[m][j] = 31;
    }
  } // dentro do mapa de metal

  for(m=8;m<12;m++){
    for(j=17;j<20;j++){
      mapa_metal[m][j] = 1;
    }
  } //portão dentro do mapa de metal

  for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      mapa_raio[m][j] = 41;
    }
  } // dentro do mapa de raio

  for(m=17;m<20;m++){
    for(j=8;j<12;j++){
      mapa_raio[m][j] = 1;
    }
  } //portão dentro do mapa de raio

  for(m=0;m<20;m++){
    for(j=0;j<20;j++){
      mapa_fogo[m][j] = 51;
    }
  } // dentro do mapa de fogo

  for(m=8;m<12;m++){
    for(j=0;j<3;j++){
      mapa_fogo[m][j] = 1;
    }
  } //portão dentro do mapa de fogo
  
}