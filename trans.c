#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	char *m = (char*)malloc(sizeof(char)*20);	

	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}

	if(ex1 == REG && ex2 == REG) m = "89";
	else if(ex1 == ADD && ex2 == REG) m = "8b";
	else if(ex1 == MEM && ex2 == REG) m = "a1";
	else if(ex1 == REG && ex2 == MEM) m = "a3";
	else {
		if(destination[3] == 'x') {
			if(destination[2] == 'a') m = "b8";
			else if(destination[2] == 'c') m = "b9";
			else if(destination[2] == 'd') m = "ba";
			else if(destination[2] == 'b') m = "bb";
		}
		else if(destination[3] == 'p') {
			if(destination[2] == 's') m = "bc";
			else if(destination[2] == 'b') m = "bd";
		}
		else if(destination[3] == 'i') {
			if(destination[2] == 's') m = "be";
			else if(destination[2] == 'd') m = "bf";
		}
	}

	strcpy(mcode, m);
	free(m);
	return 1;	
}
