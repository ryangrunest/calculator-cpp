/*
 * Calculator.cpp
 *
 *  Date: 09/12/2024
 *  Author: Ryan Grunest
 */

#include <iostream>

using namespace std;

// add return value
int main() {
  // removed unused variable statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y'; // set correct parenthesis around chars

	while (answer == 'Y' || answer == 'y') {  // add more readable spacing.
		cout << "Enter expression" << endl; // fix endl spacing

		cin >> op1 >> operation >> op2; // input variables in correct order
    
		if (operation == '+') { // set correct paren around chars, add more readable spacing, add curly brackets, remove semicolon
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // fix << / >> lines
    }

		if (operation == '-') { // add curly brackets, remove semicolon
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // fix << / >> lines
    }

		if (operation == '*') { // add curly brackets
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // fix output string
    }

		if (operation == '/') { // add curly brackets
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // fix output string
    }

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	};
  
  // add correct output if users enters N or n
  if (answer == 'N' || answer == 'n') {
    cout << "Program Finished." << endl;
  }

  return 0; // return expected output value
}






