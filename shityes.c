#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc >= 2)
  {
    while(1)
    {
      printf("%s\n", argv[1]);
    }
  }
  else {
    while(1)
    {
      printf("%c\n", 'y');
    }

  }

  return 0;
}
