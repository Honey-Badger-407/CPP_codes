#include<bits/stdc++.h>
using namespace std;
void calculator()
{
	float in1,in2,out;
	char op;
	string equation;
	cout << "Enter an expression (e.g., 2.5 + 3.7): ";
	getline(cin, equation);
	stringstream ss(equation);
	ss>>in1>>op>>in2;
	
	out=0;
	switch(op)
	{
		case '+':
			out = in1 + in2;
			break;
		case '-':
			out = in1 - in2;
			break;
		case '*':
			out = in1 * in2;
			break;
		case '/':
			
			if (in2 != 0)
				out = in1 / in2;
			
			else
			{
				cout<<"diviser can not be 0";
				break;
			}
	}
	cout<<"result is: "<<out;
}
int main()
{
    calculator();
}
