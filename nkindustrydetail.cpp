#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person
{
	private:
			float salary;
		int age;
	protected:

		void setsalary()
		{
			cout<<"Enter the salary of employee"<<endl;
			cin>>salary;
		}

			void getsalary()
			{
				cout<<salary<<" ";
			}
		public:
				void setage()
		{
			cout<<"Enter the Employe age"<<endl;
			cin>>age;
		}


			void getage()
			{
				cout<<age<<" ";
			}

};
class employee:public person
{
	private:
		int id;
		public:
			char name[10];
			void setid()
			{ cout<<"Enter the uniqe employid "<<endl;
				cin>>id;
			}
			void showid()
			{
				cout<<id<<" ";
			}
		void employeedetail()
			{


			   setsalary();
			}
			void showsalay()
			{

					getsalary();

			}
			void getname()
			{
				cout<<name<<" ";
			}
        void setname()
		{
			cout<<"Enter the name of employee"<<endl;
			cin>>name;

		}

};
int main()
{ int n,p,c=1;
  cout<<"Enter the no of employee working in your company"<<endl;
   cin>>n;
   cout<<"\nEnter the password to insert data in company employe file=";
    cin>>p;
    cout<<"\n";
	employee e[n];
	if(p==1135)
    {


	for(int i=0;i<n;i++)
	{
	    e[i].setid();
	    e[i].setname();
	    cin.ignore();
	    e[i].setage();
    	e[i].employeedetail();


    }
}

while(c<=2)
{
int s;
  cout<<"Enter passwort to show detail of company employee\n";
  cin>>s;
  if(s==4352)
  {


	cout<<"SNO"<<" "<<"emid"<<" "<<"Emname"<<" "<<"Age"<<" "<<"salary"<<endl;
	for(int i=0;i<n;i++)
	{
         cout<<i+1<<" ";
	      e[i].showid();
        e[i].getname();
     	e[i].getage();
	  e[i].showsalay();
	  cout<<"\n";
     }
     break;
  }
    else
   {
       c++;

    cout<<"please insert correct password to see detail\n";
   }

}

}
