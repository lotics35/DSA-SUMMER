#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	char fname[20];
	char lname[20];
}studName;

typedef struct{
	int day;
	int month;
	int year;
}bday;

typedef struct{
	studName name;
	bday birthdate;
	int idnumber;
}studentinfo;

typedef struct{
	studentinfo studlist[20];
	int count;
}classRecord;

void insertFirst(classRecord *A, studentinfo B){
	int ctr=0;
	if(A->count>0){
//		for(ctr=A->count;ctr>0;ctr--){}
		ctr=A->count;
		while(ctr>0){
			A->studlist[ctr]=A->studlist[ctr-1];
			ctr--;
		}
	}
	A->studlist[ctr]=B;
	A->count++;
//	printf("\n%d\n", A->count);
}

void display(classRecord A){
	int ctr;
	printf("--------------------------------\n");
	printf("|-Student Record-|\n");
	for(ctr=0; ctr<A.count;ctr++){
		printf("Name: %s,%s\n", A.studlist[ctr].name.lname, A.studlist[ctr].name.fname);
		printf("Birthdate: %02d/%02d/%04d\n", A.studlist[ctr].birthdate.day,A.studlist[ctr].birthdate.month,A.studlist[ctr].birthdate.year);
		printf("IdNumber: %d\n\n", A.studlist[ctr].idnumber);
	}
	printf("--------------------------------\n");
}

void insertLast(classRecord *A, studentinfo B){
	A->studlist[A->count++]=B;
//	printf("\n%d\n", A->count);
}

void insertIndex(classRecord *A, studentinfo B, int C){
	if(C>A->count)
		printf("Does Not Allow\n\n");
	if(C<A->count){
		int ctr=A->count;
		while(ctr>C){
			A->studlist[ctr]=A->studlist[ctr-1];
			ctr--;
		}
		A->studlist[ctr]=B;
		A->count++;
	}
}

void deleteIndex(classRecord *A, int index){
	if(index>A->count)
		printf("Does Not Allow\n\n");
	if(index<A->count){
		int ctr=index;
		while(ctr<A->count){
			A->studlist[ctr]=A->studlist[ctr+1];
			ctr++;
		}
		A->count--;
	}
	
}

void deleteFirst(classRecord *A){
	int ctr;
	for(ctr=0;ctr<A->count;ctr++){
		A->studlist[ctr]=A->studlist[ctr+1];
	}
	A->count--;
}

void deleteLast(classRecord *A){
	if(A->count<0)
		printf("Does Not Allow\n\n");
	if(A->count>0){
		A->count--;
	}
}

int main(){
	classRecord DCISM;
	studentinfo stud1= {{"Miguel","Perez"},{23,7,1999},19102892};
	studentinfo stud2= {{"Quinn","Baral"},{15,6,2000},17249648};
	studentinfo stud3= {{"Nathan","Rama"},{4,8,2000},19081122};
	insertFirst(&DCISM,stud1);
	display(DCISM);
	insertLast(&DCISM,stud2);
	display(DCISM);
	insertIndex(&DCISM, stud3,5);
	insertIndex(&DCISM, stud3,1);//insert @ index 1;
	display(DCISM);
	deleteIndex(&DCISM, 5); 
	deleteIndex(&DCISM, 1);
	display(DCISM);
	deleteFirst(&DCISM);
	display(DCISM);
	deleteLast(&DCISM);
	display(DCISM);
}
