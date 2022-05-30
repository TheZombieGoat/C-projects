#include <stdio.h>
#include <stdlib.h>

typedef struct treenode{
	int value;
	struct treenode *left;
	struct treenode *right;
}treenode;

treenode *makenode(int value)
{
	treenode *result = malloc(sizeof(treenode));
	if(result != NULL){
		result->left = NULL;
		result->right = NULL;
		result->value = value;
	}
	return result;
}

void printree(treenode *root)
{
	if(root == NULL){
		printf("<Empty>\n");
		return;
	}

	printf("value = %d\n", root->value);
	printf("Left\n");
	printree(root->left);
	printf("Right\n");
	printree(root->right);
	printf("Done !\n");
} 

int main()
{
	treenode *n1 = makenode(5);
	treenode *n2 = makenode(6);
	treenode *n3 = makenode(8);
	treenode *n4 = makenode(68);
	treenode *n5 = makenode(1);

	n1->left = n2;
	n1->right = n3;
	n3->left = n4;
	n3->right = n5;

	printree(n1);

	free(n1);
	free(n2);
	free(n3);
	free(n4);
	free(n5);
}