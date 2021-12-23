#include <stdio.h>

int main(){
	//initialization, condition, inc/dec
	//while loop
	int i = 0; //initialization
	
	while(i<5){ //condition
		if(i == 2){
			break;
		}
		printf("%d\t", i); //0	1 <-- Output
		++i; //1 -> 2  //inc/dec
	}
	
	printf("Rest of the code...\n"); //0	1 	Rest of the code... <-- Output
	
	//do-while loop
	i = 0;
	do{
		if(i == 2){
			break;
		}
		printf("%d\t", i); //0	1 <-- Output
		++i; //1 -> 2  //inc/dec
	}while(i < 5);
	
	printf("Rest of the code...\n"); //0	1 	Rest of the code... <-- Output
	
	/*
	* break refers to a statement in C language that is used to break the loop, depending on a particular condition
	* break statement always works with looping statements and not with the condition statements (exception: switch conditional statement) 
	*/
	
	//for-loop
	for(i = 0; i< 5; i++){
		if(i == 2){
			break;
		}
		printf("%d\t", i);
	}
	
	printf("Rest of the code...\n"); //0	1 	Rest of the code... <-- Output
	
	return 0;
}