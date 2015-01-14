#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int start = 1;
  int finish;
  int interval = 1;

  if (argc == 2)
  {
    finish = atoi(argv[1]);
  }
  else if (argc == 3)
  {
    start = atoi(argv[1]);
    finish = atoi(argv[2]);
  }
  else if (argc == 4)
  {
    start = atoi(argv[1]);
    interval = atoi(argv[2]);
    finish = atoi(argv[3]);
  }

  for (int i = start; i <= finish; i += interval)
  {
    printf("%d\n", i);
  }

  return 0;
}
