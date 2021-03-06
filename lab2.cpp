#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string text, codedText, decodedText;
	list* newList = new list;
	double codedMem, decodedMem, compression;
	cout << "Laboratory work No. 2" << endl;
	cout << "Fulfilled student of group 8301 Popurey N" << endl;
	cout << "Option number 2 number on the list number 18" << endl << endl;
	cout << "Enter the line (in Russian / English)" << endl;
	getline(cin, text);
	codedText = newList->fanoCoding(text);
	decodedText = newList->fanoDecoding(codedText);
	newList->tableOutput();
	decodedMem = 8 * decodedText.length();
	codedMem = 2 * codedText.length();
	compression = decodedMem / codedMem;
	cout << "___________________________________________________________________________________________________________________" << endl;
	cout << "Coded String:" << codedText << endl;

	cout << "Decoded String:          " << decodedText << endl;

	cout << "Memory before encoding:  " << decodedMem << endl;
	cout << "Memory after encoding:   " << codedMem << endl;
	cout << "Coef. compression:       " << compression << endl;
	delete newList;
	return 0;
}