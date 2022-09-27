#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int random;
  int user;
  int i;
  int attempts = 0;

 srand((unsigned)time(NULL));
  random = rand() % 100;
    //printf("%d", random);

while(user > random || user < random){
    attempts++;
    printf("\nNumber of Attempts: %d", attempts);
    printf("\n Enter a number from 0 to 99:\t");
  scanf("%d", &user);

  if(user < random){
      printf("\nBigger\n");
  } else if(user > random){
      printf("\nSmaller\n");
  } else if(user = random && attempts <= 2){
      printf("\nESper");
      break;
  } else if(user = random && attempts == 3 || attempts == 4){
      printf("\nVery Good!");
      break;
  } else if(user = random && attempts == 5 || attempts == 6){
      printf("\nGood!");
      break;
  } else if(user = random && attempts > 6){
      printf("\nThink more strong!");
      break;
  }
}
}