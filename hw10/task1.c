#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{
char first_name[25];
char last_name[25];
char phone_num[11];
int salary;
struct Employee *next;
}emp;

void Displaylist(emp*node){
if(!node){
printf("No employee\n");
return ;
}
emp *temp=node;
while(temp){
printf("First Name: %s, Last Name: %s, PhoneNo.: %s, Salary: %d\n",temp->first_name,temp->last_name,temp->phone_num,temp->salary);
temp=temp->next;
}
}

void addEmployee(emp ** head,char *f_name,char *l_name,char *phone,int salary){
emp*newnode=(emp*) malloc(sizeof(emp));
strcpy(newnode->first_name,f_name);
strcpy(newnode->last_name,l_name);
strcpy(newnode->phone_num,phone);
newnode->salary=salary;
newnode->next=*head;
(*head)=newnode;
}

int deletenode(emp **head,char last_name[]){
if(!*head){
printf("No employee\n");
return 0;
}
emp*temp=*head,*prev,*current;
if(strcmp(temp->last_name,last_name)==0){
*head=temp->next;
free(temp);
return 1;
}
else{
while(temp){
prev=temp;
current=temp->next;
if(strcmp(current->last_name,last_name)==0){
break;
}
temp=temp->next;
}
if(temp){
prev->next=current->next;
free(current);
return 1;
}
}
return 0;
}

void searchByphone(emp*node,char number[]){
if(!node){
printf("No employee\n");
return ;
}
emp*temp=node;
while(temp){
if(strcmp(temp->phone_num,number)==0)
printf("%s\t%s\t%s\t%d\n",temp->first_name,temp->last_name,temp->phone_num,temp->salary);
temp=temp->next;
}
}

void searchBySalaryRange(emp*node,int lower_limit,int higher_limit){
if(!node){
printf("No employee\n");
return ;
}
emp*temp=node;
while(temp){
if((temp->salary>=lower_limit)&&(temp->salary<=higher_limit))
printf("%s\t%s\t%s\t%d\n",temp->first_name,temp->last_name,temp->phone_num,temp->salary);
temp=temp->next;
}
}

void bsort(int *Aa[],int count)
{
    int i,j,high;
    for (i=0;i<count;i++)
    {
        for(j=0;j<count-i;j++)
        {
            if(Aa[j]>Aa[j+1])
            {
                high=Aa[j];
                Aa[j]=Aa[j+1];
                Aa[j+1]=high;
            }
        }
    }
}

void findMedianSalary(emp **head){
if(!*head){
printf("No employee\n");
return ;
}
int arr[50],count=0,i=0;
float median;
emp*temp=*head;
while(temp)
{
    arr[count]=temp->salary;
    count+=1;
    temp=temp->next;
}
int arrfinal[count];
for(i=0;i<count;i++){
    arrfinal[i]=arr[i];
}
bsort(arrfinal,count);
if(count%2==0)
    median=((float)arrfinal[count/2]+(float)arrfinal[count/2-1])/2.0;
else
    median=(float)arrfinal[count/2];
printf("\nThe median salary is: %.1f. There are %d employees above this medians salary.\n",median,count/2);
}

int main(){
int choice,i,l_limit,h_limit,n;
char f_name[25],l_name[25],phone[11];
int salary;
emp *head=NULL;
printf("Indicate number of records to enter (min 5): ");
scanf("%d",&n);
printf("Input records of employees (enter new line after each record),\nwith format: first_name last_name phoneNo salary\n\n");
for(i=0;i<n;i++){
scanf("%s%s%s%d",&f_name,&l_name,&phone,&salary);
addEmployee(&head,f_name,l_name,phone,salary);
}

do{ printf("\n1: Print records \n2: Add a new record \n"
"3: Delete record\n4: Search by phoneNo\n5: Search by salary range\n6: Find median salary\n0: Exit\nEnter number: ");
scanf("%d",&choice);
switch(choice){

case 1:
Displaylist(head);
break;

case 2:
printf("Add employee record in format: first_name last_name phoneNo salary\n");
scanf("%s%s%s%d",&f_name,&l_name,&phone,&salary);
addEmployee(&head,f_name,l_name,phone,salary);
break;

case 3:
printf("Delete record; enter last name: ");
scanf("%s",&l_name);
deletenode(&head,l_name);
break;

case 4:
printf("Enter phone number: ");
scanf("%s",&phone);
searchByphone(head,phone);
break;

case 5:
printf("Enter lower salary limit : ");
scanf("%d",&l_limit);
printf("Enter higher salary limit : ");
scanf("%d",&h_limit);
searchBySalaryRange(head,l_limit,h_limit);
break;

case 6:
findMedianSalary(&head);
break;
}

}while(choice!=0);
return 0;
}
