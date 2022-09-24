/************************************************************************************************************************************/
/*                   PROGRAM  TO  CREATE  A  SINGLY  LINKED  LIST  OF  "N"  NODE  AND  DISPLAY  IT .                                */
/************************************************************************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Structure definition for singly linked list
struct node
{
    int data;          // struct member for storing data
    struct node *next; // struct member for storing address of next node
} *start = NULL;
struct node *new_node, *current; // struct variable for storing address of current & new node

void main()
{
    int c, n, i;
    clrscr();
    printf("Enter the number of nodes : \n");
    scanf("%d", &n);

    // For loop for reading data to Linked-list
    for (i = 0; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node)); // To Allocate memory to the variable similar to struct nodes
        // Inputs
        printf("Enter data of %d node: ", i + 1);
        scanf("%d", &c);
        new_node->data = c;
        new_node->next = NULL;
        // If the List has only 1 node, then start node = current node i.e singular data containing node without any linked list
        if (start = NULL)
        {
            start = new_node;
            current = new_node;
        }
        // else "next" variable of the current node contains address of next node (for 1+ nodes)
        else
        {
            current->next = new_node;
            current = current->next;
        }
    }
    printf("Created Linked list is : \n");
    // For loop for Displaying Linked-list
    for (current = start; current != NULL; current = current->next)
    {
        printf("%d ->", current->data);
    }
    printf("NULL\n");
    getch();
}
