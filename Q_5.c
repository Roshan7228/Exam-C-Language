#include<stdio.h>
#include<conio.h>
typedef struct car{
	int model;
	int year;
	int price;
}car;
void main(){
	int i;
	car arr[3];
	arr[0].model=22;
	arr[0].year=2000;
	arr[0].price=1200000;
	arr[1].model=28;
	arr[1].year=2001;
	arr[1].price=1400000;
	arr[2].model=26;
	arr[2].year=2001;
	arr[2].price=140000;
	for(i=0;i<3;i++){
		printf("\nYour model is %d",arr[i].model);
		printf("\nYour year is %d",arr[i].year);
		printf("\nYour  is %d",arr[i].price);
		printf("\n\n");
	}
	getch();
	
}
