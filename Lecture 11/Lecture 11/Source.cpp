#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	const std::string dataFile = "inputFile.txt";

	const std::string checkOperator = "!=";	//The operator being searched for
	int numberOfOperators = 0;
	
	std::ifstream file;
	file.open(dataFile);
	bool a = file.is_open();
	
	do
	{
		std::string input;
		std::getline(file, input);

		int lastPos = -1;
		do
		{
			lastPos = input.find(checkOperator, lastPos + 1);
			if (lastPos != std::string::npos) numberOfOperators++;
		} while (lastPos != std::string::npos);

		

	} while (file.eof() == false);

	cout << "Number of operators:" << numberOfOperators << endl;

	cin.get();	//Hold the window open

	return 0;
}