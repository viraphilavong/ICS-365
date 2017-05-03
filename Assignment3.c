/* Program must insert, print, and exit the sorted link list*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
 
/* Link list node */
struct int_node
{
    int data;
    struct int_node* next;
};
 
void insert(struct int_node** head_reference, struct int_node* new_node) {
	struct int_node* current;
    /* Special case for the head end */
    if (*head_reference == NULL || (*head_reference)->data >= new_node->data)
    {
        new_node->next = *head_reference;
        *head_reference = new_node;
    }
    else
    {
        /* Locate the node before the point of insertion */
        current = *head_reference;
        while (current->next!=NULL &&
               current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

//creating a new node
struct int_node *newNode(int new_data)
{
    //dynamically create as shown in your word doc
    struct int_node* new_node =
        (struct int_node*) malloc(sizeof(struct int_node));
 
    //assign data to the node
    new_node->data  = new_data;
    new_node->next =  NULL;
 
    return new_node;
}
 
//Function to print list
void printList(struct int_node *head)
{
    struct int_node *temp = head;
    while(temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
}

int main()
{
	//empty list initially
    struct int_node* head = NULL;
    //insert 1 node
    struct int_node *new_node = newNode(10);
    insert(&head, new_node);
    //initialize variables for input
    int a;
	char b;
	
	printf("This program is for implementing a sorted linked list.");
	//try to loop this for continuous adding to linked list
	while (b != 'e'){
	
		printf("\nHello User, please type i for insert, p for print, or e for exit.\n",b);
		scanf("%s", &b);
		
		//insert if expr
		if (b == 'I' || b == 'i') {
			printf("enter a number: ");
			scanf("%d", &a);
			printf("You inserted: %d", a);
			new_node = newNode(a);
			insert(&head, new_node);
		} 
		
		//call print function if user types p
		else if (b == 'P' || b == 'p') {
			printf("\nThis is your sorted linked list.\n");
			printList(head);
		} 
		
		//exit program is user input is e
		else if (b == 'E' || b == 'e') {
			exit(0);
		} 
		
		//exit program if b does not match
		else {
			printf("Error: unknown request %s", b);
		}
	}
 
    return 0;
}
