#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}

	if(ex1 == REG && ex2 == REG) strcpy(mcode, "89");
	else if(ex1 == ADD && ex2 == REG) strcpy(mcode, "8b");
	else if(ex1 == MEM && ex2 == REG) strcpy(mcode, "a1");
	else if(ex1 == REG && ex2 == MEM) strcpy(mcode, "a3");
	else {
		if(destination[3] == 'x') {
			if(destination[2] == 'a') strcpy(mcode, "b8");
			else if(destination[2] == 'c') strcpy(mcode, "b9");
			else if(destination[2] == 'd') strcpy(mcode, "ba");
			else if(destination[2] == 'b') strcpy(mcode, "bb");
		}
		else if(destination[3] == 'p') {
			if(destination[2] == 's') strcpy(mcode, "bc");
			else if(destination[2] == 'b') strcpy(mcode, "bd");
		}
		else if(destination[3] == 'i') {
			if(destination[2] == 's') strcpy(mcode, "be");
			else if(destination[2] == 'd') strcpy(mcode, "bf");
		}
	}
	return 1;	
}
