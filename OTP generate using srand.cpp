#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include<string>
using namespace std;

int main()
{
	cout<<"\t\t\t\t\t WELCOME\n";
	
    string c1;
    string a;
    string b = "verify";
    
    srand(time (NULL));
    
    cout<<"what is your name \n\n";
    cin>>c1;
    
    cout<<"Welcome Mr: "<<c1<<"\n\n";
    cout<<"enter the verify and you get the OTP \n\n";
    cin>>a;
    
    for(int sec=0;sec<=10;sec++)
    {
    	cout<<"Please wait : "<<sec;
    	Sleep(1000);
    	system("cls");
	} 
	
    if(a==b)
	{
    int v1= rand() % 1000000;
    cout <<"your one time password is:  "<<v1<<"\n\n";
    }
    else
	{
    cout<<"you enter the wrong word\nplease try again later";
    }
    
    return 0;
}
