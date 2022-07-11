
#include <iostream>
#include <string>
using namespace std;

string SnakeCase(string str) 
{
	for (int x = 0; x < str.size(); x++)
	{
		if (int(str[x]) >= 32 && int(str[x]) <= 47)
		{
			str[x] = '_';
		}
		else
		{
			str[x] = tolower(str[x]);
		}
	}

	return str;
}

int main() 
{
	cout << SnakeCase("BOB loves-coding") << endl; // bob_loves_coding
	cout << SnakeCase("cats AND*Dogs-are Awesome") << endl; // cats_and_dogs_are_awesome
	cout << SnakeCase("a b c d-e-f%g") << endl; // a_b_c_d_e_f_g
	return 0;
}
