#include <stdio.h>

#ifdef __linux__
#include <sys/types.h>
#include <dirent.h>
#endif

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

int main(int argc, char *argv[])
{
   if (argc != 1)
   {
      return EXIT_FAILURE;
   }

#ifdef __linux__
  DIR *currentDir;
  struct dirent *entry;
  currentDir = opendir("./");

  if (currentDir != NULL)
  {
     while ((entry = readdir(currentDir)))
     {
        if (entry->d_name[0] != '.')
           puts(entry->d_name);
     }

    (void) closedir(currentDir);
  }
  else
    perror("Couldn't open the directory");

#endif

   return EXIT_SUCCESS;
}
