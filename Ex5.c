#include<stdio.h>
#include<unistd.h>


int main(){
printf("This is a date\n");
fflush(stdout);
execl("/bin/ls","newfile",NULL);
printf("Here is the new date");
return 0;
}
