#include<bits/stdc++.h>
#include<iostream> 
#include<string>
using namespace std; 
  
int main(){
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
    return 0; 
}