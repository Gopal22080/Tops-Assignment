 #include<iostream>
using namespace std;

int globalVar = 50;

void showScope() {
	int localVar = 20;
	cout << "Indside Function: " << endl;
	cout << "Local variable = " << localVar << endl;
	cout << "global variable = " << globalVar << endl;
	 
}

int main() {

	int localVar = 10;
	cout << "Inside Main:" << endl;
	cout << "local variable = " << localVar << endl;
	cout << "Global variable = " << globalVar << endl;
	
	cout << "\n Calling function " << endl;
	showScope();
}

