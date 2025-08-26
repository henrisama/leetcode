#include <limits.h>

int reverse(int x){
  int rest = 0, result = 0;
  
  long long aux = x;

  if (aux < 0) aux = -aux;

  int lessThanZero = x < 0 ? 1 : 0;
  
  while (aux > 0) {
    rest = aux % 10;

    aux /= 10;

    result += rest;

    if (result > INT_MAX / 10 && aux > 0) return 0;

    if (aux > 0) result *= 10;
  }

  if (lessThanZero == 1) return -result;
  
  return result;
}