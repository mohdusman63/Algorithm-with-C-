#include <stdio.h>

int F[50]; //array to store fibonacci terms

int fibonacci_bottom_up(int n) {
  F[n] = 0;
  F[1] = 1;

  int i;
  for(i=2; i<=n; i++) {
    F[i] = F[i-1] + F[i-2];
  }
  return F[n];
}

int main() {
  printf("%d\n",fibonacci_bottom_up(1));
  return 0;
}
