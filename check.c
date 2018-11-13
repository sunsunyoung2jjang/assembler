#include "myas.h"

int is_valid(char *op, char *args)
{
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/
	/*         syntax check         */
    /*  							*/
	/********************************/
	int i = 0;
	
	for(i=0;args[i]!=NULL;i++){
		if(args[i]==',')
			break;	
		}

	if((args[0]=='0'||args[0]=='('||args[0]=='-'))
		if((args[i+1]=='0'||args[i+1]=='('))
		//mem to mem
			return 0;

	if(args[0]=='$'&&args[i+1]=='$') //immediate to immediate
		return 0;

	return 1;
}
