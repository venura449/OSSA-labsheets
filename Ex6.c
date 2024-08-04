#include<stdio.h>
#include<unistd.h>

int main(){
printf("Stsrting Execution\n");
fork();
execl("/bin/date","date",NULL);
return 0;
}
