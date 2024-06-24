#ifndef Cpuscheduling
#define Cpuscheduling
#define MAX 20
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[MAX];
	int bt;
	int at;
}Process;

typedef struct{
	Process cpu[MAX];
	int count;
}Cpu;

void initList(Cpu *A);
void insertCpu(Cpu *A, Process B);
void displayCpu(Cpu A);
void executiontime(Cpu A);
void completiontime(Cpu A);

#endif
