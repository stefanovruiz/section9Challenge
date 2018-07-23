/*
	This program is decently filled with bugs and other annoyacnces. I'll try to keep it as documented as I can without being godly
	annoying. 
	
	Also this has not been tried and tested. All written from memory into notepad++ and 

*/


#include <iostream>
#include <numeric>
#include <vector>
#include "math.h"
using namespace std;

// Functions definitions

/* print_numbers_list(): prints out the elements in the integer vector
   numbers_list.
*/
void print_numbers_list();

/* add_numbers(): adds an integer to the vector of integers called 
 * There is absolutely no fail-bit checking in the function. Add it later.
*/
void add_numbers();

vector <int> numbers_list{};
int main {
	
	
	return 0;
}

void print_numbers_list(){
	if(print_numbers_list.empty()) {
		cout << "Numbers list is empty." << endl;
	}
	else {
		cout << "The set contains " << "[";
		for(int{i}; i < numbers_list.size(); i++) {
			cout << numbers_list[i] << ' ';
		}
		cout << "]" << endl;
	}
	
}

void add_numbers() {
	int user_number_choice{};
	bool add_numbers_continue{true};
	bool isContinue_do {true}; // do-while
	
	while(add_numbers_continue){
		cout << "Integer to add . . . ";
		cin >> user_number_choice;
		numbers_list.push_back(user_number_choice);
		
		char user_choice_y_n{};
		do {
			cout << "Would you like to add another integer (Y/N)? ";
			switch(user_choice_y_n){
				case 'Y':
				case 'y':
					isContinue_do = false;
					add_numbers_continue = true;
					break;
				case 'N':
				case 'n':
					isContinue_do = false;
					add_numbers_continue = false;
					break;
				default:
					cout << "Invalid entry. Try again." << endl;
					isContinue_do = true;		
										
			}
		} while(isContinue_do)
		
	}
		
}
