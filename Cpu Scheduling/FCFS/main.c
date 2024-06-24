#include <stdio.h>
#include <stdlib.h>
#include "CpuSched.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Cpu List;
	Process Proc1={"Processor1",5,0};
	Process Proc2={"Processor2",2,0};
	Process Proc3={"Processor3",3,3};
	Process Proc4={"Processor4",4,2};
	Process Proc5={"Processor5",1,1};


	initList(&List);
	insertCpu(&List, Proc1);
	displayCpu(List);
	insertCpu(&List, Proc2);
	displayCpu(List);
	insertCpu(&List, Proc3);
	insertCpu(&List, Proc4);
	insertCpu(&List, Proc5);
	displayCpu(List);
	executiontime(List);
	completiontime(List);

	return 0;
}
