#include<stdio.h>
#include<unistd.h>

int main(){
int id;
if(0 ==fork()){
	printf("I am child Process");
}
else{
while(1){
	sleep(100);
}
}
return 0;
}
