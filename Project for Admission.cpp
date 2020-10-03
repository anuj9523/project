#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>

using namespace std;

class Student{
	char phone[15],name[20];
	int marks,d,m,y,no;
	public:
	void input();
	void show();
	void search();
	void Delete();
	void update();
};

void Student::input()
{
	system("cls");
	ofstream fout("student.txt",ios::app);
	cout<<"\n\n\nEnter the name:\t";
	cin.ignore();
	cin.getline(name,20);
	cout<<"Enter student's Mobile number:\t";
	cin.ignore();
	cin.getline(phone,15);
	cout<<"Enter the Marks obtained in Previous class:\t";
	cin>>marks;
	cout<<"Enter Date of birth (dd/mm/yy)";
	cin>>d>>m>>y;
	cout<<"Enter Admission Number:\t";
	cin>>no;
	fout.write((char*)this,sizeof(*this));
	fout.close();
}

void Student::show()
{
	system("cls");
	ifstream fin("student.txt",ios::in);
		cout<<"\n\nName of Shortlisted Students are:"<<endl;
	while(fin.read((char*)this,sizeof(*this)))
	{
		if(marks>=300){
		
		cout<<"\nName of the Student:\t"<<name;
		cout<<"\nMarks obtained by the student:\t"<<marks;
		cout<<"\nDate of birth  "<<d<<"/"<<m<<"/"<<y;
		cout<<"\nPhone Number of the student:  "<<phone<<endl;
}
}
	fin.close();
}

void Student::search()
{
		system("cls");
		ifstream fin("student.txt",ios::in);
		int adm;
		bool state=false;
		cout<<"Please Enter the Admission Number to search the detais more accurately:\t\n";
		cin>>adm;
		
		int a;
		while(fin.read((char*)this,sizeof(*this)))
			{
				a++;
		if(adm==no)
			{
			cout<<"List of Students are as follows:\n";
			cout<<"\n\nThe details of the students are:\n\n\n";
			cout<<"Name of the Student:\t"<<name<<endl;
			cout<<"Marks obtained by the student:\t"<<marks;
			cout<<"\nDate of birth:\t"<<d<<"/"<<m<<"/"<<y;
			cout<<"\nPhone Number of the student:\t"<<phone<<endl;
			system("pause");
			state=true;
}
			if(state==false)
			{
				cout<<"No Marks is associated by the above data\n";
			}
			fin.close();
		
		}
			cout<<"Total search result is:\t"<<a;
			}
			
void Student :: Delete()
{
	int sno;
	bool state =false;
	
	system("cls");
	ifstream  fin("student.txt",ios::in);
	ofstream  fout("temp.txt", ios::out);
}
	
int main()
{
	Student s;
	int choice;
	while(1)
	{
	cout<<"\t\t***********************WELCOME TO UJWAL GROUP OF INSTITUTES***************************\n\n\n\n";
	cout<<"\n\nChooce the required option as per your need \n\n";
	cout<<"1.Get the Admission.\n";
	cout<<"2.Get the details of Shortlisted Students\n";
	cout<<"3.Cancel Your Admission\n";
	cout<<"4.Update your details\n";
	cout<<"5.Search Your Name\n";
	cout<<"6.Exit\n\n\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			s.input();
			break;
			
		case 2:
			s.show();
			break;
			
		case 3:
			s.Delete();
			break;
			
		case 4:
			s.update();
			break;
			
		case 5:
			s.search();
			break;
			
		case 6:
			exit(0);
			break;
		default:
			cout<<"Wrong Choice, Try Again.............\n\n\n";
	}
	system("pause");
	system("cls");
}
	return 0;
}

