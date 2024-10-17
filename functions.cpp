#include<iostream>
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
    float a,c,f,k;
    cout << "how would you like to convert"<<endl<<"1.C to F & K"<< endl<<"2.K to C & F"<<endl<<"3.F to C & K";
    cin>>a;
    if (a==1)
    {
        cout<<"enter temperature in celsius"<<endl;
        cin>>c;
        k=c+273.15;
        f=(c*1.8)+32;
        cout << "temp in k is "<<k<<" and temp in F is "<<f<<endl;
    }
    else if(a==2)
    {
        cout<<"enter temperature in kelvin"<<endl;
        cin>>k;
        c=k-273.15;
        f=((c*9)/5)+32;
        cout << "temp in c is "<<c<<" and temp in F is "<<f<<endl;
    }
    else if(a==3)
    {
        cout<<"enter temperature in fahrenheit"<<endl;
        cin>>f;
        c=((f-32)*5)/9;
        k=c+273.15;
        cout << "temp in k is "<<k<<" and temp in c is "<<c<<endl;
    
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



