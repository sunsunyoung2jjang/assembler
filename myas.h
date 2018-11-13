#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MEM 19
#define REG 20
#define IMM 21
#define ADD 22

int ex1, ex2;

char source[256], destination[256];

int instr_trans(char *op,char *args,char* mcode);
int is_valid(char *op,char *args);
