#include <stdio.h>

int calc(int number)
{
  int i=0, divisor, divisor_count, quotient, sum;
  int divisors[100] = {};



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
if(sum != number){
  goto startfromhere;
}

if(sum == number) {
  return sum;
}

} // calc
