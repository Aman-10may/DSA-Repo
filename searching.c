#include<stdio.h>
#include<stdlib.h>
 int arr[]={10,20,30,40,60};
 int n=5;
void Binarysearch(int value){//It works on only sorted array
int low=0,high=n-1;
int found =0;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==value){
    printf("Element is found at index :%d\n", mid);
    found=1;
    break;
}
else if(arr[mid]>value){
  high=mid-1;

}
else if(arr[mid]<value){
  low=mid+1;
}
}
if(found==0){
    printf("Element is not found");
}
}
 void Linearsearch(int value){
    for(int i=0;i<n;i++){
    if(arr[i]==value){
        printf("value found at index : %d\n",i);
        break;
    }
}
}
int main(){
    int value;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    int choice;

    while(1){
     printf("Enter the element you want to find :");
    scanf("%d",&value);
        printf("Enter the choice :");
     scanf("%d",&choice);
     switch(choice){
        case 1:
        Binarysearch(value);
        break;
        case 2 :
         Linearsearch(value);
         break;
         case 3 :
         exit(0);
         break;
         default :
         printf("Invalid Choice");
         break;
     }
    }

  return 0;
}