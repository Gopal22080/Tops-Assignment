#include<stdio.h>
main(){
	int num, rem, rev=0, sum=0;
	printf("\n  Enter the Num: ");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		
		sum=sum+rem;	
		
		rev=rev*10+rem;

		num=num/10;
		
	}
	printf("\n rev=%d",rev);
	printf("\n Sum=%d",sum);
}
