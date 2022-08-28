#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
/*Implement the class Student whose data members are – roll number, name and percentage. Implement default constructor, parameterized constructor, accept and display functions for this class. Declare vector of Student objects inside function main. Write a menu driven program to perform below operations.*/
 class Student
 {
  int rollno;
  char name[30];
  double percentage;
  public:
  Student();
  Student(int r,char *n,double p);
  void accept();
  void display();
  double getpercentage()
  {
   return percentage;
  }
 };
 Student::Student()
 {
  rollno=1234;
  strcpy(name,"Messi");
  percentage=82;
 }
 
 Student::Student(int r,char *n,double p)
 {
  rollno=r;
  
  strcpy(name,n);
  percentage=p;
 }
 
 void Student::display()
 {
  cout<<"roll no is: "<<rollno<<endl;
  cout<<"name is: "<<name<<endl;
  cout<<"percentage is: "<<percentage<<endl;
 
 
 }
 void Student::accept()
 {
  cout<<"enter roll no : "<<endl;
  cin>>rollno;
  cout<<"enter name: "<<endl;
  cin>>name;
  cout<<"enter percentage : "<<endl;
  cin>>percentage;
 
 }
 int main()
 {
  vector<Student>v1;
  Student s1;
  int op;
  cout<<"Hello";
  
  bool flag=true;
  while(flag==true)
  {
  cout<<"Press 1 to accept information of the student and add it to the vector\n";
  cout<<"Press 2 to display data of students \n";
  cout<<"Press 3 to return max element\n ";
  cout<<"Press 4 to exit\n";
  cin>>op;
  switch(op)
  {
   case 1:
   s1.accept();
   v1.push_back(s1);
   break;   
   case 2:
   for_each(v1.begin(),v1.end(),[](Student s)
   {
    s.display();
   });
   break;
   case 3:
    auto max=(*max_element(v1.begin(),v1.end(),[](Student s1,Student s2)
   {
    return s1.getpercentage()<s2.getpercentage();
   }));
   max.display();
   break;
  
  case 4:
  flag=false;
  break; 
  default:
  //cout<<"error! please try again."
  break;
  
  }
 }
 }
