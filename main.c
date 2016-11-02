#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pwd.h>

int main(){
  DIR *hold = opendir(".");
  while (hold){
    printf("%s\n",readdir(hold)->d_name);
  }
  return 21;
}
