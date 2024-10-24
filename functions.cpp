#include<bits/stdc++.h>

using namespace std;
void greeting()
{
    cout << "Hello, World!" << endl;
}

void  addint()
{
    int a,b,c;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<a+b<<endl;

}

void MtoF()
{
    float a,b;
    cout<<"enter length in meters";
    cin>>a;
    b = a*3.28084;
    cout<<"length in feet: "<<b<<endl;
}

void CtoF()
{
	char temp1,temp2;
    float c,f,k;
    cout << "enter unit of input value(c,f,k): ";
    cin>>temp1;
    cout << "enter unit of output value(c,f,k): ";
    cin>>temp2; 
    
    if (temp1 =='c' and temp2 == 'f')
    {
        cout<<"enter temperature: ";
        cin>>c;
        f=(c*1.8)+32;
        cout << " temp in F is "<<f<<endl;
    }
    else if (temp1 =='c' and temp2 == 'k')
    {
        cout<<"enter temperature: ";
        cin>>c;
        k=c+273.15;
        cout << " temp in K is "<<k<<endl;
    }
    else if (temp1 =='f' and temp2 == 'c')
    {
        cout<<"enter temperature: ";
        cin>>f;
        c=((f-32)*5)/9;
        cout << " temp in C is "<<c<<endl;
    }
    else if (temp1 =='f' and temp2 == 'k')
    {
        cout<<"enter temperature: ";
        cin>>f;
        c=((f-32)*5)/9;
        k=c+273.15;
        cout << " temp in K is "<<k<<endl;
    }
    else if (temp1 =='k' and temp2 == 'c')
    {
        cout<<"enter temperature: ";
        cin>>k;
        c=k-273.15;
        cout << " temp in C is "<<c<<endl;
    }
    else if (temp1 =='k' and temp2 == 'f')
    {
        cout<<"enter temperature: ";
        cin>>k;
        c=k-273.15;
        f=(c*1.8)+32;
        cout << " temp in F is "<<f<<endl;
    }
    else 
    {
        cout<<"invalid input"<<endl;
    }
}

void floatmulti()
{
    int n;
    float a=1,b;
    cout<<"how many numbers do you want to multiply"<<endl;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter number "<<i+1<<" : "<<endl;
        cin>>arr[i];
        a=a*arr[i];
    }
    cout<< "the multiple of string "<<endl;
    for(int i=0 ;i < n ; i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<"is: "<<a<<endl;
}

void SmltoCap()
{
    int a; 
    string s1; 
    cout<<"do you want to\n 1.uppercase the string \n 2.lower case the string"<<endl;
    cin>>a;
    cin.ignore();
    if (a==1)
    {
    	cout << "Enter a multi-word string: ";
		getline(cin,s1);
    	transform(s1.begin(), s1.end(), s1.begin(), ::toupper); 
    	cout<<s1<<endl; 	
	}
	
	else if (a==2)
 	{
	    cout << "Enter a multi-word string: ";
		getline(cin,s1);
    	transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    	cout<<s1<<endl;  
	}
	
	else
	{
		cout<<"invalid choice"<<endl;
	}
  
}

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


void trim()
{
	string str1 ;
	int a,b;
	cout<<"enter your string"<<endl;
	getline(cin,str1);
	cout<<"enter the starting index and no. of elment you want to remove"<<endl;
	cin>>a>>b;
	str1.erase(a,b);
	cout<<"the resultant string is: "<<str1;
}