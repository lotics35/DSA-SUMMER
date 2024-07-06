#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ctr;
	nodePtr head;
//  Product prod1 = {"Laptop", 899.99, 10, {15, 7, 2025}};
//  Product prod2 = {"Smartphone", 699.50, 25, {10, 9, 2024}};
//  Product prod3 = {"Headphones", 129.99, 50, {5, 12, 2023}};
	Product prod[20]={{"Laptop", 899.99, 10, {15, 7, 2025}}, {"Smartphone", 699.50, 25, {10, 9, 2024}}, {"Headphones", 129.99, 50, {5, 12, 2023}}, {"Coffee Maker", 49.95, 100, {20, 3, 2024}}, {"Backpack", 79.99, 30, {18, 5, 2025}}, {"Desk Lamp", 29.75, 80, {25, 8, 2023}}, {"Running Shoes", 129.00, 15, {7, 10, 2024}}, {"Smartwatch", 199.99, 20, {12, 6, 2025}}, {"Gaming Console", 299.00, 5, {30, 9, 2023}}, {"Bluetooth Speaker", 79.50, 40, {22, 11, 2024}}, {"Digital Camera", 399.95, 8, {14, 4, 2025}}, {"Tennis Racket", 149.99, 12, {9, 2, 2024}}, {"Fishing Rod", 69.25, 35, {11, 1, 2023}}, {"Television", 999.00, 3, {4, 8, 2025}}, {"Tool Set", 129.50, 18, {16, 10, 2024}}, {"Microwave Oven", 149.75, 10, {8, 12, 2023}}, {"Vacuum Cleaner", 199.99, 25, {21, 7, 2025}}, {"Board Game", 24.99, 60, {2, 5, 2024}}, {"Printer", 149.00, 7, {19, 11, 2023}}, {"Fitness Tracker", 79.50, 30, {13, 9, 2024}}}; 
    
	init(&head);
//	insert(&head,prod1);
//	insert(&head,prod2);
//	insert(&head,prod3);
	for(ctr=0;ctr<10;ctr++){ 
		insert(&head,prod[ctr]);
	}
  
//	inorder(head);
//	preorder(head);
//	postorder(head);
  
  return 0;
}		
