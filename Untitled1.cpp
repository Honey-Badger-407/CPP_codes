#include <iostream>
#include <string>
using namespace std;
void CtoF()
{
	char temp1,temp2;
    float a,c,f,k;
    cout << "enter unit of input value: ";
    cin>>temp1;
    cout << "enter unit of output value: ";
    cin>>temp2; 
    if (temp1 =='c' and temp2 == 'f')
    {
        cout<<"enter temperature"<<endl;
        cin>>c;
        f=(c*1.8)+32;
        cout << " temp in F is "<<f<<endl;
    }
    else if (temp1 =='c' and temp2 == 'k')
    {
        cout<<"enter temperature"<<endl;
        cin>>c;
        k=c+273.15;
        cout << " temp in K is "<<k<<endl;
    }
    else if (temp1 =='f' and temp2 == 'c')
    {
        cout<<"enter temperature"<<endl;
        cin>>f;
        c=((f-32)*5)/9;
        cout << " temp in C is "<<c<<endl;
    }
    else if (temp1 =='f' and temp2 == 'k')
    {
        cout<<"enter temperature"<<endl;
        cin>>f;
        c=((f-32)*5)/9;
        k=c+273.15;
        cout << " temp in K is "<<k<<endl;
    }
    else if (temp1 =='k' and temp2 == 'c')
    {
        cout<<"enter temperature"<<endl;
        cin>>k;
        c=k-273.15;
        cout << " temp in C is "<<c<<endl;
    }
    else if (temp1 =='k' and temp2 == 'f')
    {
        cout<<"enter temperature"<<endl;
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

int main()
{
    CtoF();
}
