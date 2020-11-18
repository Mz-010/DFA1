
code of DFA//برمجة لخوارزمية DFA

#include <iostream>
using namespace std;
int main()
{
	int table[3][2] = { {2,1},{1,1},{2,2} };
	string input;
	int state = 0;
	cout << "programe that accepts string starting with 1:\nEnter string:";
	cin >> input;
	cout << input << endl;
	cout << "transition:\n";
	for (int i = 0;i < input.length();i++)
	{		state = table[state][input[i] - '0'];
	cout << state << endl;
}
	//by manar
if (state == '/')
cout << "string accepted!";
else
cout << "not accepted";
system("pause");
  //by manar
}


