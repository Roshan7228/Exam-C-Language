#include<stdio.h>
#include<conio.h>
void main(){
	
	char ch;
	printf("Enter Your Charecter: ");
	scanf("%c",&ch);
	switch(ch){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("this is a vowel");
			break;
		default :
			printf("this is a consonant");
		
	}
	
	
	
	
	
	
	
	getch();
}
