#include<iostream>
#include<string>
using namespace std;

int district()

{
	string districtvise[3]={"dindigul\t","madurai","tirunelveli"};
	cout<<"\n"<<15<<"\tbus dippos on :"<<districtvise[0]<<"\n"<<20<<"\tbus dippos on :"<<districtvise[1]<<"\n"<<18<<"\t1bus dippos on :"<<districtvise[2];
	
}
int getdata()
{
       cout<<"\n\n\n"<<"3 districts bus dippos complete deatails is there\n";
       cout<<"total dipoos count is :"<<15+20+18<<"\nall district bus count is :"<<245+387+367;
}
int main()
{
       cout<<"\t\t\t\t     TAMIL NADU GOVERMENT\n"<<"\t\t\t\t\tBUS DEATAILS\n";
       cout<<"\t\t\t    THIS is an TAmil NADu bus deatails centre\n\n"<<"\t3 Districts bus deatails available here \n"<<"\tDindigul,Madurai,Trinelveli  this all\n"
	   <<"\tthen\n"<<"What Can I Help You\n";
       cout<<"\t\tyou want a dindigul district deatails press no    : 1\n"<<"\t\tyou want a madurai district deatails press no     : 2\n"
	   <<"\t\tyou want a tirunelveli district deatails press no : 3\n"<<"\t\tor you wnat total 3 district deatails press no    : 4\n";
	
       int no;
       cin>>no;
	
       if (no==1)
       {
	cout<<15<<"\tbus dippos on :dindigul\n"<<"and there is 100 local busses\n"<<"and 125 district to district busses\n"<<"and also 20 state busses are there\n"
	    <<"total =245 busses are there\n";  
	}
	else if(no==2)
	{
	   cout<<20<<"\tbus dippos on :madurai\n"<<"and there is 180 local busses\n"<<"and 157 district to district busses\n"<<"and also 50 state busses are there\n"
	       <<"total =387 busses are there";
       }
	else if (no==3)
       {
	   cout<<18<<"\tbus dippos on :tirunelveli\n"<<"and there is 150 local busses\n"<<"and 147 district to district busses\n"<<"and also 70 state busses are there\n"
	       <<"total =367 busses are there\n";
	}
	else if (no==4)
	{
	   district();
	}
	else 
	{
	   cout<<"press any no" ;
        }   
    getdata();
    district();
}
