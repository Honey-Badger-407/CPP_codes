
#include<iostream>
#include "function.h"

using namespace std;

int main()
{
    int a;
    start:
    cout<<"what would you like to do"<<endl;
    cout<<"1.greeting"<<endl;
    cout<<"2.add two numbers"<<endl;
    cout<<"3.to convert meter to feets"<<endl;
    cout<<"4.to convert temperature"<<endl;
    cout<<"5. to multiply string of floating numbers"<<endl;
    cout<<"6. to change string from lower case to uppar case and vise versa"<<endl;
    cout<<"7. to use calculator"<<endl;
    cout<<"10. to exit"<<endl;
    cin>>a;
    if (a==1)
    {
        greeting();
    }
    else if (a==2)
    {
        addint();
    }
    else if (a==3)
    {
        MtoF();
    }
    else if (a==4)
    {
        CtoF();
    }
    else if (a==5)
    {
        floatmulti();
    }
    else if (a==6)
    {
    	SmltoCap();
	}
    else if (a==7)
    {
    	calculator();
	}
	else if (a==10)
	{
		cout<<"exiting program"<<endl;
		goto exit;
	}
	else 
	{
		cout<<"invalid choice try again"<<endl;
	}
	goto start;
	exit:
    return 0;
}