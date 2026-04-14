#include<stdio.h>
int main(){
 int arr[10]={4,1,5,2,3};
 int n =5;
 for(int i=0;i<n-1;i++){
int SI =i;//Smallest index
    for(int j =i+1;j<n;j++){
    if(arr[j]<arr[SI]){
        SI=j;
    }
}
int temp =arr[i];
arr[i]=arr[SI];
arr[SI]=temp;

 }  
 for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
 }
    return 0;
}