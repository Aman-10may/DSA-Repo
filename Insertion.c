#include<stdio.h>

int arr[10] = {10,20,30,40,50};
int n = 5;

// Insertion at beginning
void insertBeginning(int value){
    for(int i = n-1; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = value;
    n++;
}

// Insertion at end
void insertEnd(int value){
    arr[n] = value;
    n++;
}

// Insertion at specific position
void insertPosition(int value, int pos){
    if(pos < 0 || pos > n){
        printf("Invalid Position\n");
        return;
    }
    for(int i = n-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;
}

// Display function
void display(){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, value, pos;

    printf("Initial Array:\n");
    display();

    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at End");
    printf("\n3. Insert at Position");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%d", &value);

    switch(choice){
        case 1:
            insertBeginning(value);
            break;

        case 2:
            insertEnd(value);
            break;

        case 3:
            printf("Enter position: ");
            scanf("%d", &pos);
            insertPosition(value, pos);
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("\nUpdated Array:\n");
    display();

    return 0;
}
