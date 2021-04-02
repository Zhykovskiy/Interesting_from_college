#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	setlocale(0, "");

	string path = "MyFile.txt";
	string arr[] = { "white", "green", "yellow", "red", "black" };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	
	ofstream fout;
	fout.open(path);

	if (!fout.is_open()) {
		cout << "Файл не вдалось вiдкрити";
	}
	else {
		for (int i = 0; i < arrSize; i++)
		{
			fout << arr[i] << "\n";
		}
	}

	fout.close();

	ifstream fin;
	fin.open(path);

	string str;
	for (int i = 0; !fin.eof(); i++)
	{
		str = "";
		fin >> str;
		cout << "Довжина рядка " << i + 1 << " = " << str.length() << endl;
	}

	fin.close();

	return 0;
}
