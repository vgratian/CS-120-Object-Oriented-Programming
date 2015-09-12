#include <stdio.h>

int main() {

printf("Hello, I will find for you a perfect number.\nPlease let me know where to start from?");

int i=0, number, divisor, divisor_count, quotient, sum;
int divisors[100] = {};
char cont = 'y';

printf("\n\nPlease enter a positive integer\n");
scanf("%i", &number);

while(cont == 'y') {
startfromhere:
number++;
divisor=2, divisor_count=2, sum=0, i=0;
divisors[i] = 1;

for(; divisor < number; divisor++) {
  quotient = number / divisor;
  quotient = divisor * quotient;
  if(quotient == number){
    divisor_count++;
    i++;
    divisors[i] = divisor;
  }
}

i++;
divisors[i] = number;
int k;
for(k=0; k<i+1; k++){
  sum += divisors[k];
}
sum -= number;
if(sum == number) {
  printf("\nCongrats. We found your perfect number: %i\n", sum);
}
if(sum != number){
  goto startfromhere;
}
printf("continue? (y/n)");
scanf("%c", &cont);
}

  return 0;
}
