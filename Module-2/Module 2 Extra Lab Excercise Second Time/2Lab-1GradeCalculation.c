#include<stdio.h>
int main(){
    int marks;
    
    printf("Enter Marks: ");
    scanf("%d", &marks);
    
    if(marks >= 90 && marks <= 100){
        printf("Grade is A");
    }
    else if(marks > 75 && marks <= 90){
        printf("Grade is B");
    }
    else if(marks > 50 && marks <= 75){
        printf("Grade is C");
    }
    else if(marks >33 && marks <= 50){
        printf("Grade is D");
    }
    else if (marks >= 0 && marks <= 33) {  
        printf("You Are Fail");
    }
    else {
        printf("Invalid marks entered!");
    }
}

