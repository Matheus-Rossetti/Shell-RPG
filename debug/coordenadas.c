void coordenadas(int *tra, int *trb, int *memoria){
  

printf("\033[%d;%df                ", 22, 2);
printf("\033[%d;%df %i  %i  %i", 22, 2, *tra, *trb, *memoria);


}