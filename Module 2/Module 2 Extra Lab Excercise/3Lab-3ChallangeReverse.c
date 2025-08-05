//REVERSE_Condition
#include<stdio.h>
int main(){
	int i, rev=0;
	 printf("\n Enter the Number to Find Reverse: ");
	 scanf("%d",&i);
	 while (i>0)
	 {
	 	rev=(rev*10)+i%10;
	 i=	i/10;
	 	
	 }
	 printf("\n Reverse = %d",rev);
	 
}
