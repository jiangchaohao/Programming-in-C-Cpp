/*
https://youtu.be/F2nrej6Kjww?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_
Memory leak is a situation when we get some memory on the heap
and we don't free when we are done using it.
*/

// Simple betting game
// 'Jack Queen King' - Computer shuffles these cards
// player has to guess the position of the Queen
// if he wins, he takes 3*betting
// if he loses, he loses the bet amount
// player has $100 initially

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int cash = 100;

void Play(int bet){
  // char C[3] = {'J', 'Q', 'K'};
  char *C = (char*)malloc(3*sizeof(char)); // In C++, char *C = new char[3]; 
  C[0] = 'J'; C[1] = 'Q'; C[2] = 'K';
  printf("Shuffling.....\n");

  srand(time(NULL)); // seeding random number generator
  int i;
  for (i = 0; i < 5; i++){
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = C[x];
    C[x] = C[y];
    C[y] = temp; // swaps characters at positions x and y
  }

  int playersGuess;
  printf("What's the position of queen - 1, 2 or 3? ");
  scanf("%d", &playersGuess);
  if(C[playersGuess - 1] == 'Q'){
    cash += 3*bet;
    printf("You win! Result = \"%c %c %c\" Total cash = %d\n", C[0], C[1], C[2], cash);
  }
  else{
    cash -= bet;
    printf("You lose! Result = \"%c %c %c\" Total cash = %d\n", C[0], C[1], C[2], cash);
  }
  free(C); // In C++, delete(C); 
}

int main(){
  int bet;
  printf("Welcome to the Virtual Casino**\n\n");
  printf("Total cash = $%d\n", cash);
  while(cash > 0){
    printf("What is your bet? $ ");
    scanf("%d", &bet);

    if (bet == 0 || bet > cash) break;

    Play(bet);
    printf("\n*************************\n");
  }

}


/*
Welcome to the Virtual Casino**

Total cash = $100
What is your bet? $ 25
Shuffling.....
What's the position of queen - 1, 2 or 3? 2
You lose! Result = "K J Q" Total cash = 75

*************************
What is your bet? $ 32
Shuffling.....
What's the position of queen - 1, 2 or 3? 1
You win! Result = "Q J K" Total cash = 171

*************************
What is your bet? $
*/
