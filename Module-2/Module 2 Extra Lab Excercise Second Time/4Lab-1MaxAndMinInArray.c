#include<stdio.h>
int main(){
	int a[10],i,j,temp,max,min;
	
	for(i=0;i<10;i++){
		printf("\n Enter Number: ",i+1);
		scanf("%d",&a[i]);
	}
	
	max=min=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}		
	}
	for(i=0;i<9;i++){
		for(j=0;j<9 - i;j++){
			if(a[j]>a[j+1]){
						temp = a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
			}
			
		}
	}
	
	printf("\nMax Number is %d",max);
	printf("\nMin Number is %d",min);
	
	printf("\nShorting number is :");	
	for(i=0;i<10;i++){
		printf("%d",a[i]);
	}
	printf("\n");
}





