#include "TestClass.h"
#include <iostream>
using namespace std;

TestClass::TestClass()
{
	this->symb = 'x';
}

void TestClass::randNum()
{
	cout << rand() % 100;
}