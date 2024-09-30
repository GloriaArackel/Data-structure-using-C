#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*link;
}
*temp,*head=NULL,*ptr,*ptr2,*point;
int item;
void insertion_at_beginning();
void insertion_at_end();
void insertion_at_anypoint();
void print();
void deletion_at_beginning();
void deletion_at_end();
void deletion_at_anypoint();
void insertion_at_beginning(){
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL){
printf("Overflow");
}
printf("Enter the data to be inserted:");
scanf("%d",&item);
if(head==NULL){
temp->link=NULL;
temp->data=item;
head=temp;
printf("%d",temp->data);
printf("->%p\n",temp->link);
}
else{
temp->link=head;
temp->data=item;
head=temp;
printf("%d",temp->data);
printf("->%p\n",head->link);
}
}
void insertion_at_end(){
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL){
printf("Overflow");}
printf("Enter the data to be inserted at end:");
scanf("%d",&item);
temp->link=NULL;
temp->data=item;
if(head==NULL){
head=temp;
printf("%d",temp->data);
printf("->%p\n",temp->link);
}else{
ptr=head;
while(ptr->link!=NULL){
ptr=ptr->link;}
ptr->link=temp;
printf("%d",temp->data);
printf("->%p\n",temp->link);
}
}
void insertion_at_anypoint(){
int posi;
struct node*p;
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL){
printf("Overflow");
}
printf("Enter the data to be inserted:");
scanf("%d",&item);
temp->data=item;
if(head==NULL){
temp->link=NULL;
temp->data=item;
head=temp;
printf("%d",temp->data);
printf("->%p\n",temp->link);
}
else{
printf("Enter the position of the node(value of data in left:)");
scanf("%d",&posi);
ptr=head;
while(ptr!=NULL&&ptr->data!=posi){
ptr=ptr->link;
}if(ptr==NULL){
printf("The node with data value %d not found",posi);
free(temp);
return;
}
p=ptr->link;
ptr->link=temp;
temp->link=p;
printf("%d",temp->data);
printf("->%p\n",temp->link);
}
}void deletion_at_beginning(){
if(head==NULL){
printf("Underflow");
}ptr=head;
if(head->link==NULL){
head=NULL;
printf("The deleted element is %d",ptr->data);
free(ptr);
}
else{
ptr=head;
head=ptr->link;
printf("The deleted element is %d",ptr->data);
free(ptr);
}} void deletion_at_end(){
if(head==NULL){
printf("Underflow");
}else{
ptr=head;
ptr2=ptr->link;
while(ptr2->link!=NULL){
ptr=ptr->link;
ptr2=ptr2->link;
}printf("The deleted element is %d",ptr2->data);
free(ptr2);
ptr->link=NULL;
}
}
void deletion_at_anypoint(){
if(head==NULL){
printf("linkedlist underflow");
}
if(ptr->link==NULL){
ptr=head;
head=NULL;
printf("the deleted element is %d",ptr->data);
free(ptr);
} else{
int value;
printf("enter the value of the data to be deleted");
scanf("%d",&value);
ptr=head;
ptr2=ptr->link;
while(ptr2->data!=value){
ptr=ptr->link;
ptr2=ptr2->link;
} ptr->link=ptr2->link;
free(ptr2);
 }
 }
 void print(){
 printf("the linked list is:\n");
 point=head;
 while(point!=NULL){
printf("->%d",point->data);
point=point->link;
}
}
void main(){
char v;
int choice,choice1;
do{
printf("enter your choice\n");
printf("If your choice is 1:Insrtion type I or i\n");
printf("If your choice is 1:Deletion type D or d\n");
printf("Or type E or e to exit\n");
scanf(" %c",&v);
if(v=='I'||v=='i'){
printf("Enter your choice of insertion");
printf("\n1:Insertion at Begining\n2:Insertion at End\n3:Insertion at Anypoint\n4:Exit");
scanf("%d",&choice);
switch(choice){
case 1:insertion_at_beginning();
break;
case 2:insertion_at_end();
break;
case 3:insertion_at_anypoint();
break;
case 4:
printf("Exiting\n");
break;
default:printf("Enter a valid option\n");
}}
else if(v=='D'||v=='d'){
printf("Enter your choice of deletion");
printf("\n1:Deletion at Begining\n2:Deletion at End\n3:Deletion at Anypoint\n4:Exit");
scanf("%d",&choice1);
switch(choice1){
case 1: deletion_at_beginning();
break;
case 2: deletion_at_end();
break;
case 3: deletion_at_anypoint();
break;
case 4:
printf("Exiting\n");
break;
default:printf("Enter a valid option\n");
}
}print();
}while(v!='E'&&v!='e');
}
 


