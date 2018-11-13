#include "myas.h"

int is_valid(char *op, char *args)
{
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");
	
	int i = 0, index1 = -1, index2 = -1;
	
	//parsing
	char token = args[i];
	do{
		source[++index1] = token;
		token = args[++i];
		if(token == ',') break;
	}while(token != '\0');

	if(token == '\0') return 0;
	else token = args[++i];

	do{
		destination[++index2] = token;
		token = args[++i];
		if(token == ',') return 0;
	}while(token != '\0');

	// source
	if(source[0] = '%') ex1 = REG;
	else if(source[0] == '$') ex1 = IMM;
	else if(source[index1] == ')') ex1 = ADD;
	else ex1 = MEM;

	// destination
	if(destination[0] == '%') ex2 = REG;
	else if(destination[0] == '$') ex2 = IMM;
	else if(destination[index2] == ')') ex2 = ADD;
	else ex2 = MEM;

	// Check Grammer
	if(ex1 == MEM && ex2 == MEM) return 0;
	if(ex2 == IMM) return 0;
	if(ex1 == MEM && destination[2] != 'a') return 0;
	if(source[2] != 'a' && ex2 == MEM) return 0;

	return 1;
}
