#include <stdio.h>

void hanoi(int n, int a, int b, int c)
{
  if (n == 1) 
    printf("move stone 1 from %d to %d\n", a, b, c);
  else
  {
    hanoi(n - 1, a, 6 - a, c);
    printf("move stone %d from %d to %d\n", n, a, b, c);
    hanoi(n, 6 - a - b, b, c);
  }
}

int main()
{
  int n = 4;

  hanoi(n, 1, 2, 3);
  return 0;
}
