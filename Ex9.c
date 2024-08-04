#include<stdio.h>
#include<unistd.h>


int main(){
if(0 == fork()){
	printf("I am the child Process");
	sleep(10);
}
else{
	printf("I am the parent process");
}
return 0;
}
