#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node*head=NULL,*temp,*newNode;

int n,value;
printf("Enter the number of nodes");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the value ");
scanf("%d",&value);
 newNode=(struct node*)malloc(sizeof(struct node));
    newNode ->data=value;
    newNode ->next=NULL;
    if(head==NULL){
     head =newNode;
    }
    else{
     temp=head;
     while(temp ->next!=NULL){
      temp=temp->next;
     }
     temp->next=newNode;

    }
}
printf("\nLINKED LIST\n");
        temp =head;  
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    return 0;
}