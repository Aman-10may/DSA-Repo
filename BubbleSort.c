#include<stdio.h>
int main(){
 int arr[] = {9,2,3,7,6} ;
 int i,j,temp,n =5 ;
for( i=0 ;i<5;i++){
    printf("%d\n" ,arr[i]);
}
printf("Sorted Element of array is :\n");
for(i=0;i<5-1;i++){
for(j=0;j<5-1-i;j++){
if(arr[j]>arr[j+1]){
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
}   
}
}
for( i=0 ;i<5;i++){
    printf("%d\n" ,arr[i]);
}
    return 0;
}