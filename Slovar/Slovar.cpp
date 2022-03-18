#include <iostream>
#include <algorithm>
#include<fstream>
#include <string>
#include<map>
#include<Windows.h>

using namespace std;

void main()
{
	setlocale(0, "rus");
	map<string, string> Slovar;
	string filename1;
	string filename2;
	cout << "Введите имя файла с текстом " << endl;
	getline(cin,filename1);
	cout << "Введите имя файла с словарём " << endl;
	getline(cin, filename2);
	ifstream f1(filename1, ios::out | ios::binary);
	if (!f1)
	{
		cout << "Файл1 не открылся для записи!!!";
		exit(1);
	}
	string temp1;
	string temp2;

	for(int i=0;!f1.eof();i++)
	{
		f1 >> temp1;
		ifstream f2(filename2, ios::out | ios::binary);
		if (!f2)
		{
			cout << "Файл2 не открылся для записи!!!";
			exit(1);
		}
		transform(temp1.begin(), temp1.end(), temp1.begin(), toupper);
		for (int j = 0; !f2.eof(); j++)
		{
			getline(f2, temp2, ',');
			if (temp1 == temp2)
			{
				getline(f2, ,'\n');
			}
			else
			{

			}
		}
	}


}