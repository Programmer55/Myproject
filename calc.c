
#include <stdio.h>
#include <string.h>

int main(){
	//variables
	int first_num;
	int second_num;
	char user_input1[9];
	//function prototypes
	int mult(int,int);
	int add(int,int);
	int subt(int,int);

	//asks the user which MATHS they want to do
	printf("Do: add, subtract or multiply \n");
	//takes user input and places it in string array user_input
	scanf("%s", user_input1);

	//checks to see user_input value which indicates what MATHS the USER wants to do
	//then it calls the proper function after getting number values from USER
	if(strcmp(user_input1, "add")){
		printf("Please input two numbers: \n");
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		int add();
	} else if(strcmp(user_input1, "multiply")) {
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		int mult();
	} else if(strcmp(user_input1, "subtract")){
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		int subt();
	} else {
		printf("Please enter either: add, subtract or multiply.");
	}

	printf("%d \n", first_num);
	printf("%d", second_num);

	return 0;
}
