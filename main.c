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
  struct dirent *cur=readdir(hold);
  int dSize = 0;
  struct stat *buff;
  while (cur){
    printf("%s",cur->d_name);
    if(cur->d_type == DT_DIR){
      printf(" <directory>")
    }
    stat(cur->d_name, buff);
    printf("\n");
    dSize += buff->st_size;
    cur = readdir(hold);
  }
  printf("%d", dSize)
  printf("%s\n",strerror(errno));
  return 21;
}
