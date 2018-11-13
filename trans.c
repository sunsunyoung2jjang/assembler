#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");
	for(int i=0;args[i]!=NULL;i++){
	if(args[0]=='%'&&args[i+1]=='%')
		strcpy(mcode,"89");
	else if(args[0]=='('&&args[i+1]=='%')
		strcpy(mcode,"8b");
	else if((args[0]=='-'||args[0]=='0')&&args[i+1]=='%')
		strcpy(mcode,"8b");
	else if((args[0]=='0'||args=='(')&&args[i+3]=='a')
		strcpy(mcode,"a1");
	else if(args[2]=='a'&&(args[i+1]=='0'||args[i+1]=='('))
		strcpy(mcode,"a3");
	else if(args[0]=='$'&&args[i+3]=='a')
		strcpy(mcode,"b8");
	else if(args[0]=='$'&&args[i+3]=='b')
		strcpy(mcode,"bb");
	else if(args[0]=='$'&&args[i+3]=='c')
		strcpy(mcode,"b9");
	else if(args[0]=='$'&&args[i+3]=='d')
		strcpy(mcode,"ba");

	}

	return 1;	
}
