//Exercise form book C++ 6th Edition
// Enter age to know the months
#include <iostream>

int age_to_months(int);

int main()
{
	int age;
	std::cout << "Enter your age ";
	std::cin >> age;
	int months = age_to_months(age);
	std::cout << "Your age in months is " << months << "\n\n";
}

int age_to_months(int sts)
{
	return 12 * sts; 
}