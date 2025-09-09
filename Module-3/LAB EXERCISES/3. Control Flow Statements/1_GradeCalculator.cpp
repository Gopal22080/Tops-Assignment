#include<iostream>
using namespace std;

int main() {
	int marks;
	cout << "Enter the marks: ";
	cin >> marks;
	
	if(marks>=90){
		cout << "Grade A";
	} else if(marks>=80){
		cout << "Grade B";
	} else if(marks>=60){
		cout << "Grade C";
	} else if(marks>=40) {
		cout << "Gade D";
	} else {
		cout << "Student marks is less then 40";
	}
}

