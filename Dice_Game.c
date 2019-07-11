#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, num, sum = 0;

  srand((unsigned int)time(NULL));

  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++){
    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i+1, num);
    sum+=num;
  }
  printf("Total value: %d\n", sum);

  return 0;
}
