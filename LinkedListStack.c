#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node*next;
};
struct Node*top = NULL;
void push(int value){
   struct Node*newNode= (struct Node*)malloc(sizeof(struct Node)) ;
   if(newNode==NULL){
    printf("Stack Overflow");
    return;
   }
   newNode->data=value;
   newNode->next=top;
   top=newNode;
}
void pop(){
if(top==NULL){
printf("Stack Underflow\n");
return;    
}
struct Node* temp=top;
top=top->next;
free(temp);
}
void peek(){
  if(top==NULL){
  printf("Stack is empty\n");
  } 
  printf("Top element is:%d",top->data);
}
void display(){
 if(top==NULL){
    printf("Stack is empty\n");
    return;
 }
 struct Node* temp=top;
 while(temp!=NULL){
   printf("Stack element :%d\n", temp->data);
   temp=temp->next;
 }

}
int main(){
int value , choice;
while(1){
printf("-------Stack Menu-------\n");
printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
printf("Enter choice :");
scanf("%d",&choice);

    switch(choice){
    case 1 :
    printf("Enter the value :");
    scanf("%d", &value);
    push(value);
    break;
    case 2:
    pop();
    break;
    case 3 :
    peek();
    break;
   case 4 :
   display();
   break;
    case 5:
    exit(0) ;
    default :
    printf("Invalid Choice");
}
}
    return 0;  
}