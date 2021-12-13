#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

fstream file;
string line;
char token;
char nextToken;

void scanContent(string fileName) {

	file.open(fileName);
	while (file >> line)
	{
		for (int i = 0; i <= line.length(); i++)
		{
			if (line[i] == '/' && line[i + 1] == '*')
			{
				continue;
			}
			else if (line[i] == '/' && line[i + 1] == '/')
			{
				continue;
			}
			else if (line[i] == '*' && line[i + 1] == '/')
			{
				continue;
			}
			else
			{
				if (line[i] == 'r' && line[i + 1] == 'e' && line[i + 2] == 'a' && line[i + 3] == 'd')
				{
					cout << line[i] << line[i + 1] << line[i + 2] << line[i + 3] << endl;
				};

				if (line[i] == 'A' && line[i + 1] == '1')
				{
					cout << line[i] << line[i + 1] << endl;
				};

				if (line[i] == 'A' && line[i + 1] == '2')
				{
					cout << line[i] << line[i + 1] << endl;
				};

				if (line[i] == 's' && line[i + 1] == 'u' && line[i + 2] == 'm')
				{
					cout << line[i] << line[i + 1] << line[i + 2] << endl;
				};

				if (line[i] == ':' && line[i + 1] == '=')
				{
					cout << line[i] << line[i + 1] << endl;
				}

				if (line[i] == '(')
				{
					cout << line[i] << endl;
				};

				if (line[i] == '-')
				{
					cout << line[i] << endl;
				};

				if (line[i] == '3' && line[i + 1] == '3')
				{
					cout << line[i] << line[i + 1] << endl;
				};

				if (line[i] == ')')
				{
					cout << line[i] << endl;
				};

				if (line[i] == '+')
				{
					cout << line[i] << endl;
				};

				if (line[i] == '*')
				{
					cout << line[i] << endl;
				};

				if (line[i] == '5' && line[i + 1] == '.' && line[i + 2] == '5')
				{
					cout << line[i] << line[i + 1] << line[i + 2] << endl;
				};

				if (line[i] == 'w' && line[i + 1] == 'r' && line[i + 2] == 'i' && line[i + 3] == 't' && line[i + 4] == 'e')
				{
					cout << line[i] << line[i + 1] << line[i + 2] << line[i + 3] << line[i + 4] << endl;
				};

				if (line[i] == '/')
				{
					cout << line[i] << endl;
					cout << line[i + 1];
				};
			};
		};
	};

};

int main() {

	scanContent("data.txt");

	return 0;
};

