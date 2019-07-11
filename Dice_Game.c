#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, num, sum = 0;
  char name[20];

  printf("What is your name?\n");
  printf("> ");
  scanf("%s", name);
  printf("Hello, %s!\n\n", name);

  srand((unsigned int)time(NULL));

  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++){
    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i+1, num);
    sum+=num;
  }
  printf("Total value: %d\n", sum);

  if(sum > 7) printf("\n%s won!\n", name);
  else printf("\n%s lost...\n", name);

  if(sum == 12) printf("\nThe total value is maximum!\n");
  if(sum == 2) printf("\nThe total value is minimum.\n");

  return 0;
}
