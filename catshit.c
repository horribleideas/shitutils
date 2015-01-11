#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    return 1;
  }
  FILE *file;
  int character;

  file = fopen(argv[1], "r");

  while(1)
  {
    character = fgetc(file);
    if (feof(file))
    {
      break ;
    }
    putchar(character);
  }

  fclose(file);

  return 0;
}
