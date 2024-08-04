#include <stdio.h>
#include <unistd.h>

int main(){
printf("Process Id is : %d\n",getpid());
printf("Parent process Id :%d\n",getppid());
return 0;
}
