#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(){
  srand((unsigned int)time(NULL));
  printf("Rolling the dice...\n");
  
  int x,y,sum = 0;
  x = rand()%6+1;
  printf("Die 1: %d\n",x);
  sum += x;

  y = rand()%6+1;
  printf("Die 2: %d\n",y);
  sum += y;
  
  printf("Total value: %d\n",sum);

  return 0;
}
