#include <iostream>
#include <fstream>
#include <vector>


int main() {
	std::ifstream myinputfile;
	myinputfile.open("/Users/evan/AdventOfCode/AdventOfCode/2022/Day1/input.txt");
	if (myinputfile.is_open())
        std::cout << myinputfile.rdbuf();
	myinputfile.close();
	return 0;
}