#include "CpuSched.h"

void initList(Cpu *A){
	A->count=0;
	printf("List initialized\n\n");
}

void insertCpu(Cpu *A, Process B){
	A->cpu[A->count]=B;
	A->count++;
	printf("\nInserted \n\n");
}

void displayCpu(Cpu A){
	int ctr;
	printf("Displaying All CPUs\n\n");
	for(ctr=0;ctr<A.count;ctr++){
		printf("\nName: %s \n", A.cpu[ctr].name);
		printf("Burst Time: %d\n", A.cpu[ctr].bt);
		printf("Arrival Time: %d\n", A.cpu[ctr].at);
	}
	printf("\n------------------\n");
}

void executiontime(Cpu A){
 	Cpu Queue;
 	Queue.count=0;
	int ctr,ctr2,ET;
	for(ctr=0;ctr<A.count;ctr++){
		for(ctr2=0;ctr2<A.count;ctr2++){
			if(A.cpu[ctr2].at==ctr){
				Queue.cpu[Queue.count]=A.cpu[ctr2];
				Queue.count++;
			}
		}
	}
	
	for(ctr=0;ctr<Queue.count;ctr++){
		printf("[%d]Execution time for %s: %d\n",ctr+1,Queue.cpu[ctr].name,ET);
		ET=Queue.cpu[ctr].bt+ET;
	}
}

void completiontime(Cpu A){
 	Cpu Queue;
 	Queue.count=0;
	int ctr,ctr2,CT=0;
	for(ctr=0;ctr<A.count;ctr++){
		for(ctr2=0;ctr2<A.count;ctr2++){
			if(A.cpu[ctr2].at==ctr){
				Queue.cpu[Queue.count]=A.cpu[ctr2];
				Queue.count++;
			}
		}
	}
	
	for(ctr=0;ctr<Queue.count;ctr++){
		CT=Queue.cpu[ctr].bt+CT;
		printf("[%d]Completion  time for %s: %d\n",ctr+1,Queue.cpu[ctr].name,CT);
	}
}
	
