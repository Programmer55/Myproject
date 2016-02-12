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

	//takes user input and places it in string array user_input
	scanf("%s", user_input1);

	printf("Choice user picked: %s \n", user_input1);

	//checks to see user_input value which indicates what MATHS the USER wants to do
	//then it calls the proper function after getting number values from USER
	if(strcmp(user_input1, "add") == 0){
		printf("Please input two numbers: \n");
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		add(first_num, second_num);
	} else if(strcmp(user_input1, "multiply") == 0) {
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		mult(first_num, second_num);
	} else if(strcmp(user_input1, "subtract") == 0){
		scanf("%d", &first_num);
		scanf("%d", &second_num);
		subt(first_num, second_num);
	} else {
		printf("Please enter either: add, subtract or multiply.");
	}

	return 0;
}

int add(number1, number2){
	int result = number1 + number2;
	printf("Result: %d", result);

	return 0;
}

int mult(number1, number2){
	int result = number1 * number2;
	printf("Result: %d", result);

	return 0;
}

int subt(number1, number2){
	int result = number1 - number2;
	printf("Result: %d", result);

	return 0;
}
