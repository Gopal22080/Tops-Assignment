#include<stdio.h>

int main(){
	char one;
	double num1, num2, result;
	
	printf("Enterr the Operator ('+','-','*','/','%'): ");
	scanf("%c",&one);
	
	printf("Enter the First value: ");
	scanf("%lf",&num1);
	
	printf("Enter the Second value: ");
	scanf("%lf",&num2);
	
	switch(one){
		case '+':
			result = num1 + num2;
			break;
			
			
		case '-':
			result = num1 - num2;
			break;
		
		case '*':
			result = num1 * num2;
			break;
			
		        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1;
           }
            result = num1 / num2;
            break;
		
        case '%':
            if ((long)num2 == 0) {
                printf("Error: Modulus by zero.\n");
                return 1;
            }
            result = (long)num1 % (long)num2;
            break;
            
                default:
            printf("Invalid operator: '%c'\n",one);
            return 1;
    }


	}
