#include <iostream>
#include<stdio.h>
#include <string>
using namespace std;

int main ()
{
	
	string student[3];
	string result[3];
    
    for(int i=0;i<3;i++)
	{
   	cin>>student[i];
    }
  
    for(int j=0;j<3;j++)
	{
	  cout<<student[j]<<" "<<"are you there"<<"\n";
	  cin>>result[j];
    }
	  
    system("cls");
	  
    for(int k=0;k<3;k++)
    {
    	
	cout<<student[k]<<" is :";
	cout<<result[k]<<"\n\n";
	
    }

}
    
