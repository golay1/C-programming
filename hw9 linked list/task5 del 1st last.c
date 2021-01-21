#include <stdio.h>
#include <stdlib.h>


struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
void FirstNodeDeletion();
void LastNodeDeletion();
void displayList();

int main()
{
    int n;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    FirstNodeDeletion();
    LastNodeDeletion();
    printf("\n Data, after deletion of first and last nodes : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input for node 1 : ");
        scanf("%d", &num);
        stnode-> num = num;
        stnode-> nextptr = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->nextptr;
            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Node = %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}

void FirstNodeDeletion()
{
    struct node *toDelptr;
    if(stnode == NULL)
    {
        printf(" There are no node in the list.");
    }
    else
    {
        toDelptr = stnode;
        stnode = stnode->nextptr;
        free(toDelptr);  // Clears the memory occupied by first node
    }
}

void LastNodeDeletion()
{
    struct node *toDelLast, *preNode;
    if(stnode == NULL)
    {
        printf(" There is no element in the list.");
    }
    else
    {
        toDelLast = stnode;
        preNode = stnode;
        /* Traverse to the last node of the list*/
        while(toDelLast->nextptr != NULL)
        {
            preNode = toDelLast;
            toDelLast = toDelLast->nextptr;
        }
        if(toDelLast == stnode)
        {
            stnode = NULL;
        }
        else
        {

            /* Disconnects the link of second last node with last node */
            preNode->nextptr = NULL;
        }

        /* Delete the last node */
        free(toDelLast);
    }
}
