#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct biodata {
	string name;
	int dob;
};

struct csc211{
	biodata data;
	int score;
	
};

csc211 student1;

int main(){
	cout << "Enter student's name: ";
	cin >> student1.data.name;
	cout << "Enter student's age: ";
	cin >> student1.data.dob;
	cout << "Enter student's csc211 score: ";
	cin >> student1.score;
	
	cout << "The student's name is: " << student1.data.name << endl;
	cout << "The student's age is: " << student1.data.dob << endl;
	cout << "The student's score in csc211 is: " << student1.score << endl;
	
	
	return 0;
}
