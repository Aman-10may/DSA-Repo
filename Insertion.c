#include<stdio.h>
int arr[10]={10,20,30,40,50};
int n =5;
void Insertion(int value,int pos){
for(int i=n-1;i>=pos;i--){
    arr[i+1]=arr[i];
}
arr[pos]=value;
n++;
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
}

int main(){
int value,pos;
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
printf("Enter the value to insert:");
scanf("%d",&value);
printf("Enter the pos to insert:");
scanf("%d",&pos);
Insertion(value,pos);


    return 0;
}