#include <stdio.h>
int calPontos(int venc,int perd){
  return venc-perd;
}
int main(){
  char winner;
  int jogos=0,joao=0,jogosjoao=0,jogosmaria=0,maria=0;
  while(winner!='f'){
    joao=0;maria=0;
    for (int i=0;i<5;i++){
      scanf(" %c",&winner);
      if(winner=='f')break;
      if(winner=='J')joao++;
      if(winner=='M')maria++;
    }
    if(joao>maria)jogosjoao+=calPontos(joao,maria);
    if(maria>joao)jogosmaria+=calPontos(maria,joao);
    if(winner!='f')jogos++;
  }

    printf("Foram realizados %d jogos completos\n",jogos );
    if(jogosjoao>jogosmaria)printf("Ganhou o João com %d ponto(s)\n",jogosjoao);
    else if(jogosmaria>jogosjoao)printf("Ganhou a Maria com %d ponto(s)\n",jogosmaria );
    else printf("Empataram com %d vitorias\n",jogosjoao );
}
