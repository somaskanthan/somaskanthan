#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <string>
using namespace std;


int getdata()
{

	string name[6]={": Dindigul",": Madurai",": Viruthunagar",": Tirunelveli",": Kaniyakumari",": Thindivanam"};
	cout<<1<<name[0]<<"\n"<<2<<name[1]<<"\n"<<3<<name[2]<<"\n"<<4<<name[3]<<"\n"<<5<<name[4]<<"\n"<<6<<name[5]<<"\n\n";
	
}
	
int main()
{
        srand(time(NULL)); 
	cout<<"\t\t\t\t\t TAMIL NADU GOVERMENT  "<<"\n\n";
	cout<<"\t\t\t\t\t     W E L C O M E"<<"\n\n"<<"\t\t\t\t\tDindigul to Kerala(KOCHI) \n\n";
	getdata();
	


	int standnumber;
	cout<<"where are you climb \n";
	cin>>standnumber;
	
	
	switch (standnumber){
	
	case 1:
		 cout<<"climbed to dindigul\n"<<"\n"<<"your ticket amount is :"<<12<<" Rupees $\n"<<"THEN GO SIT \n";
        break;
	case 2:
	    cout<<"climbed to madurai\n"<<"\n"<<"your ticket amount is :"<<12-2<<" Rupees $\n"<<"THEN GO SIT \n"; 
		break;
	case 3:
	    cout<<"climbed to viruthunagar\n"<<"\n"<<"your ticket amount is :"<<12-4<<" Rupees $\n"<<"THEN GO SIT \n";
		break;
	case 4:
	    cout<<"climbed to tirunelveli\n"<<"\n"<<"your ticket amount is :"<<12-6<<" Rupees $\n"<<"THEN GO SIT \n";
	    break;
	case 5:
	    cout<<"climbed to kaniyakumari\n"<<"\n"<<"your ticket amount is :"<<12-8<<" Rupees $\n"<<"THEN GO SIT \n";
		break;
	case 6:
	    cout<<"climbed to thindivanam\n"<<"\n"<<"your ticket amount is :"<<12-10<<" Rupees $\n"<<"THEN GO SIT \n";
		break;	
	default :
	    cout<<"please choose a right NO : !"<<"\n"		;
	}
	int v1=rand()%65;
	cout<<"You go and sit there - your seat no is : "<<v1<<"\n";
	
	Sleep(10000);
	
	cout<<"\n"<<"all of get up we are reach our destination \n";
	cout<<"\n\n\n" <<"\t\t\t\t                Thank you...! ";
	  
	    
}
