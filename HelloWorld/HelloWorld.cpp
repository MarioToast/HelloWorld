#include <iostream>
#include <string>

int age;
std::string Fullname = "";

int main() {
	std::cout << "Enter your full name";
	std::getline(std::cin, Fullname);
	std::cout << "Your full name is " << Fullname;
	//std::cout << "Your age is " << age << "\n";
	//std::cout << "You are young.";
}