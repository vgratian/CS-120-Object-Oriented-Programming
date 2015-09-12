#include <stdio.h>
#include "calculate.h"

//#define testconst 5

int main() {
int number;
short int answer;

//if (testconst == 5) {printf ("aaa");}


printf("Hello, I will find for you a perfect number.\nPlease let me know where to start from?");


char cont = 'y';
while(cont == 'y') {

printf("\n\nPlease enter a positive integer\n");
scanf("%i", &number);

answer = calc(number);
printf("\nCongrats. We found your perfect number: %i\n", answer);
printf("continue? (y/n)");
scanf("%c", &cont);

}
  return 0;
}
