#include <iostream>
#include <vector>
#include <string>
//what problem it solves ? -> It won't let your program terminate

class Printer {
	std::string m_Name;
	int m_AvailablePaper;
public:
	Printer(std::string name, int paper) : m_Name(name), m_AvailablePaper(paper) {
	}
	void print(std::string text) {
		int requiredPaper = text.length() / 10;
		if (requiredPaper > m_AvailablePaper)
			throw "No Paper available";
		std::cout << "Printing, " << text << '\n';
		m_AvailablePaper -= requiredPaper;
	}
};

int main() {

	//Example 1
	std::vector<int> vec{1,2,3,4,5}; //uniform initialization in c++11
	try {
		std::cout << vec.at(20) << '\n';
		std::cout << "No Error" << '\n';
	}
	catch (std::out_of_range) {
		std::cout << "It's catched" << '\n';
	}
	std::cout << "I am still alive" << '\n'; 

	//Example 2
	Printer p1("HP Deskjet", 10);
	try {
		p1.print("Hello, my name is Anupam, I love to play cricket.");
		p1.print("Hello, my name is Anupam, I love to play cricket.");
		p1.print("Hello, my name is Anupam, I love to play cricket.");
	}
	catch (const char* txt) {
		std::cout << "Exception : " << txt << '\n';
	}
	catch (...) {
		std::cout << "Exception happened" << '\n';
	}

	return 0;
}