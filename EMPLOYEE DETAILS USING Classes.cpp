#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<string>
using namespace std;

class Employee{

public : 
    void deatails()
	{
    cout<<"\t\t\t\t WELCOMETO THE M.Tech Multinational company\n\n";
	cout<<"HOW CAN I HELP YOU\n";
  
	}
}; 

 
class somas: public Employee 
{
public : 

   void deatails1(){
	    string a;
	    string b;
	    string c;
	    string d;
	    string e="yes";
	    string f="mouthee";
	    string g="muhilan";
	    string h="i want a one employee deatails";
	    string array[2]={"NAME : mouthee","NAME : muhilan"};
	    string array2[2]={"AGE : 25","AGE : 23"};
	    string array3[2]={"DEEPARTMENT : CSE","DEEPARTMENT : ECE"};
	    string array4[2]={"JOB : APP DEVOLAPER","JOB : SYSTEM ADMIN and SERVER ADMIN"};
	    string array5[2]={"Year of working ; 2 years","Years of working : 3 years"};
	    

	getline(cin,a);
    if(h==a)
   {
	    cout<<"you have a permission, then you get the employees deatails\n";
   };
   
   cin>>b;
   if(e==b)
   {
   	system("cls");
    cout<<"ok, which employee deatails you want ?\n";
    
	cin>>c; 
	Sleep(2000);
	system("cls");
	system("color F3");
	if(f==c)
	{
	cout<<"\t"<<array[0]<<"\n"<<"\t"<<array2[0]<<"\n"<<"\t"<<array3[0]<<"\n"<<"\t"<<array4[0]<<"\n"<<"\t"<<array5[0]<<"\n";
	}
	
	else if (g==c)
	{
	system("cls");
	cout<<"\t"<<array[1]<<"\n"<<"\t"<<array2[1]<<"\n"<<"\t"<<array3[1]<<"\n"<<"\t"<<array4[1]<<"\n"<<"\t"<<array5[1]<<"\n";
	}

    else 
    {
    cout<<"sorry sir ,no one is working at this nam from our company\n"<<endl;
	}  
	
	}
	
   else 
   {
   cout<<"sorry sir , please get permission, then go on\n"<<endl;	
   }
			
}
	 
};


int main()
{
	somas ragul;
	ragul.deatails();
    ragul.deatails1();
}
