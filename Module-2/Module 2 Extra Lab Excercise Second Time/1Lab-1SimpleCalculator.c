#include<stdio.h>

main(){
	char operator;
	float num1, num2, reasult;
	
	printf("\nEnter Num 1: ");
	scanf("%f", &num1);
	
	printf("Enter Operator: ");
	scanf(" %c", &operator);
	
	printf("\nEnter Num 2: ");
	scanf("%f", &num2);
	reasult=(operator == '+') ? (num1 + num2):
			(operator == '-') ? (num1 - num2):
			(operator == '*') ? (num1 * num2):
			(operator == '/' && num2 != 0) ? (num1 / num2):
			0;
		(operator == '/' && num2 == 0)?
		printf("Error Cannot divide by Zero! \n"):
		printf("Result: %f\n",reasult);
		
}


//
//
//#include<stdio.h>
//
//int main(){
//    char operator;
//    float num1, num2, result;
//
//    printf("\nEnter Num 1: ");
//    scanf("%f", &num1);
//
//    printf("Enter Operator: ");
//    scanf(" %c", &operator); // space before %c to ignore newline
//
//    printf("\nEnter Num 2: ");
//    scanf("%f", &num2);
//
//    result = (operator == '+') ? (num1 + num2) :
//             (operator == '-') ? (num1 - num2) :
//             (operator == '*') ? (num1 * num2) :
//             (operator == '/' && num2 != 0) ? (num1 / num2) :
//             0;
//
//    (operator == '/' && num2 == 0) ?
//        printf("Error: Cannot divide by Zero!\n") :
//        printf("Result: %f\n", result);
//
//    return 0;
//}




//#include<stdio.h>
//main(){
//
//	char operator;
//	float num1, num2, result;
//	
//	printf("Enter num 1: ");
//    scanf("%f", &num1);
//
//    printf("Enter operator : ");
//    scanf(" %c", &operator);  
//
//    printf("Enter num 2: ");
//    scanf("%f", &num2);
//	result = (operator == '+') ? (num1+num2):
//		     (operator == '-') ? (num1-num2):
//			 (operator == '*') ? (num1*num2):
//		     (operator == '/' && num2 != 0) ? (num1 / num2) :
//        0;
//     (operator == '/' && num2 == 0) ? 
//        printf("Error: Cannot divide by zero.\n") : 
//        printf("Result: %f\n", result);
//}
