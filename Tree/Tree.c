#include "Tree.h"

void init(nodePtr *head){
	*head=NULL;
}

nodePtr createNode(Product insProd){
	nodePtr temp=(nodePtr)malloc(sizeof(Nodetype));
	temp->item=insProd;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

nodePtr insert(nodePtr *head, Product insProd){
    nodePtr trav=*head;
    if(*head==NULL){
        *head=createNode(insProd);
        return *head;
    }if(strcmp(insProd.prodName,trav->item.prodName)<0){
        trav->left = insert(&(trav->left),insProd);
    }else{
        trav->right = insert(&(trav->right),insProd);
    }
    return *head;
}

void display(nodePtr head){
	printf("ProductName: %s\n", head->item.prodName);
	printf("ProductPrice: %f\n", head->item.prodPrice);
	printf("ProductQty: %d\n", head->item.prodQty);
	printf("ExpDate: %d/%d/%d \n",head->item.expdate.month,head->item.expdate.day,head->item.expdate.year);
	printf("\n");
}

void inorder(nodePtr head){
	if(head->left!=NULL)
		inorder(head->left);
	display(head);
	if(head->right!=NULL)
		inorder(head->right);
}

void preorder(nodePtr head){
	display(head);
	if(head->left!=NULL)
		preorder(head->left);
	if(head->right!=NULL)
		preorder(head->right);
	
}

void postorder(nodePtr head){
	if(head->left!=NULL)
		preorder(head->left);
	if(head->right!=NULL)
		preorder(head->right);
	display(head);
}

void delete(nodePtr *head,Product prod){
	
}
