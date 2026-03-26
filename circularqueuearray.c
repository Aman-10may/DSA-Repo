//Circular Queue using Array
#include <stdio.h>
#define MAX 5
int cqueue[MAX];
int front = -1 , rear=-1;
void insertion(int value){
if((front==0&&rear==MAX-1)||(front==rear+1)){
    printf("Cqueue Overflow\n");
}  
else {
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
      rear=(rear+1)%MAX ; 
    }
    cqueue[rear]=value;
    printf("Inserted element is :%d\n",value);
}
}
void deletion(){
   int item=cqueue[front];
    if(front==-1||front==rear+1){
        printf("Cqueue Underflow\n");
    }
    else{
         int item = cqueue[front];
        printf("Deleted element is: %d\n", item);
        if(front==rear){
            front=-1;
            rear=-1;
        }
            else{
                front=(front+1)%MAX  ;
            }
    }
}
void display(){
if(front==-1) {
    printf("Cqueue is empty\n");
} 
else{
        for(int i=front; ; i = (i + 1) % MAX){
        printf("%d\n",cqueue[i]);
        if( i==rear)
        break;
}
}
}

int main() {
int choice, value;
while(1){
  printf("----Cqueue----");
  printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
  printf("Enter the choice:");
  scanf("%d",&choice);
  switch(choice){
      case 1:
      printf("Enter the element to insert:");
      scanf("%d",&value);
      insertion(value);
      break;
      case 2:
      deletion();
      break;
      case 3:
      display();
      break;
      case 4:
      return 0;
      break;
      default :
      printf("Invalid Choice\n");
      break;
  }  
}
    return 0;
}