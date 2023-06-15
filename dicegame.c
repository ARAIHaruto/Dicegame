#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#define MAX 20

int main(){
  char name[MAX];
  printf("What is your name?\n");
  printf("> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
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
  
  if(sum >= 7){
    printf("You won!\n");
  }
  else{
    printf("You lost!\n");
  }

  return 0;
}
