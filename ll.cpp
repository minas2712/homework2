#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
  int main(void){

  int fd=open("test.txt", O_RDWR); //O_RDWR-read&write
if(fd<0) {
 write(1,"open error",10);
 return -1;
 }
if(write(fd,"2",1)!=1){
 write(1,"write error",11);
 return -1;
}
struct stat buf;
fstat(fd,&buf);
off_t size=buf.st_size;
printf("%d", size); //printing size of file including the holes
  return 0;
   
}
