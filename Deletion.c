#include<stdio.h>
int main (){
int arr[10]={10,20,30,40,50};
int n =5,value,pos; 
 for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
printf("Enter the value to delete:");
scanf("%d",&value);
printf("Enter the pos to delete:");
scanf("%d",&pos);

for(int i=pos;i<=n-1;i++){
    arr[i]=arr[i+1];
}
n--;
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}


    return 0;
}