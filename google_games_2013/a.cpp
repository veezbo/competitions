//Compile Command: g++ -Wall <filename> -o <executablename>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>
#include <time.h>
#include <map>

#define REACHED cout << "REACHED" << endl;

using namespace std;

ifstream in;
ofstream out;
int caseCount = 1;

//HEADER

void printCase(string s);
string to_string(long l);
string to_string(int i);
string to_string(double d);
string to_string(float f);

//-----------------------------------------

//VARIABLES



//---------------------------------------------

int main (void)
{
	in.open("C-large-1.in");
	out.open("output.txt");

	int T;
	in >> T;

	printCase("hello world");

	in.close();
	out.close();
	return 0;
}

void printCase(string s)
{
	out << "Case #" << caseCount << ": " << s << endl;
	caseCount++;
}

//NOTE: use atoi/atol for converting strings to ints/longs

string to_string(long l)
{
	stringstream ss;
	if (!(ss << l)) //can also add optional setprecision(x) for x decimal digits
    	cout << "BadConversion(to_string(long))" << endl;
	return ss.str();
}

string to_string(int i)
{
	stringstream ss;
	if (!(ss << i)) //can also add optional setprecision(x) for x decimal digits
    	cout << "BadConversion(to_string(int))" << endl;
	return ss.str();
}

string to_string(double d)
{
   	stringstream ss;
   	if (!(ss << d)) //can also add optional setprecision(x) for x decimal digits (also can try << fixed << )
    	cout << "BadConversion(to_string(double))" << endl;
	return ss.str();
}

string to_string(float f)
{
	stringstream ss;
	if (!(ss << f)) //can also add optional setprecision(x) for x decimal digits
    	cout << "BadConversion(to_string(float))" << endl;
    return ss.str();
}