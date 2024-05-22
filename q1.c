// Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
// For example,
// Input:
// Enter the array's size: 5


// Enter array elements:
// a[0] = 5
// a[1] = 9  
// a[2] = 4
// a[3] = 7
// a[4] = 3

// Output:
// Reversed array elements:
// 3, 7, 4, 9, 5
#include<stdio.h>

void fudu(int *arr,int size){
    printf("Your revers string is\n");
  for(int i = size-1;i>=0;i--){
printf("%d\n",*(arr + i));
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
    
    fudu(arr,size);

}