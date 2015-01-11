#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    return 1;
  }
  FILE *file;
  char line[64];
  int lines=10;

  file = fopen(argv[1], "r");

  while(lines--)
  {
    fgets(line, sizeof line, file);
    if (feof(file))
    {
      break ;
    }
    puts(line);
  }

  fclose(file);

  return 0;
}
