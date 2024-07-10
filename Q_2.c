#include<stdio.h>
#include<conio.h>
void main(){
    int arr[7]={7,1,2,3,5,8,6};
	int max=-1;
	int i;
	for(i=0;i<7;i++){
	   if(max<arr[i]){
	   	max=arr[i];
	   }
	}	
	printf("The maximum Number: %d",max);
 	
 	
	getch();
}
