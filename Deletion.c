#include<stdio.h>

int arr[10] = {10,20,30,40,50};
int n = 5;

// Delete from beginning
void deleteBeginning(){
    for(int i = 0; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

// Delete from end
void deleteEnd(){
    n--;   // just reduce size
}

// Delete from specific position
void deletePosition(int pos){
    if(pos < 0 || pos >= n){
        printf("Invalid Position\n");
        return;
    }
    for(int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

// Display array
void display(){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, pos;

    printf("Initial Array:\n");
    display();

    printf("\n1. Delete from Beginning");
    printf("\n2. Delete from End");
    printf("\n3. Delete from Position");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            deleteBeginning();
            break;

        case 2:
            deleteEnd();
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            deletePosition(pos);
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("\nUpdated Array:\n");
    display();

    return 0;
}
