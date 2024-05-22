#include<stdio.h>
void fudu(int *arr,int *size){
  for(int i = *size-1;i>=0;i--){
printf("%d\n",*arr + i);
  }
}
int main(){
int size;
printf("Enter your number := ");
scanf("%d",&size);
 int arr[size];
     
    for(int i=0;i<size;i++) {
        printf("enter arr[%d] value",i);
        scanf("%d",&arr[i]);
    }   
    
    fudu(arr,&size);

}