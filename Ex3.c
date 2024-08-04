#include <stdio.h>
#include<unistd.h>

int main(){
int ret;
printf("Parent : %d\n",ret);
ret = fork();
printf("Hello : %d\n",ret);
return 0;
}
