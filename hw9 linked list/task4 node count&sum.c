#include <stdio.h>
#include <stdlib.h>


struct node
{
    int num;
    struct node *nextptr;
}*stnode;

void createNodeList(int n);
int NodeCount();
int NodeSum();
void displayList();

int main()
{
    int n,totalNode,sum;
    printf(" Enter the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    totalNode = NodeCount();
    sum = NodeSum();
    printf("\n Total number of nodes = %d", totalNode);
    printf("\n Sum of the values = %d\n", sum);
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

int NodeCount()
{
    int ctr = 0;
    struct node *tmp;
    tmp = stnode;
    while(tmp != NULL)
    {
        ctr++;
        tmp = tmp->nextptr;
    }
    return ctr;
}
int NodeSum()
{
    int sum = 0;
    struct node *tmp;
    tmp = stnode;
    while(tmp != NULL)
    {
        sum += tmp->num;
        tmp = tmp->nextptr;
    }
    return sum;
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

