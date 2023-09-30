#include <iostream>
using namespace std;

class Student{
 private:
  string name;
  string gender;
   int rollNumber;
  //  static int genrate_rollNumber;
  float m1;
  float m2;
  float m3;
  float percentage;
 

  public:
  
  void AcceptStudent()
  {

    cout<<"Enter Student Name= ";
    cin>>this->name;
    cout<<"Enter Gender= ";
    cin>>this->gender;
    cout<<"Enter student RollNumber=  ";
    cin>>this->rollNumber;
    cout<<"Enter Chemistry marks = ";
    cin>>this->m1;
    cout<<"Enter Physics m2= ";
    cin>>this->m2;
    cout<<"Enter Biology m3= ";
    cin>>this->m3;
    cout<<endl;
  
    percentage=((m1+m2+m3)/300)*100;
    
    
  }
void disply(){
  cout<<"Student Name --"<<this->name<<endl;
  cout<<"Enter Gender-- "<<this->gender<<endl;
  cout<<"Enter student RollNumber---"<<this->rollNumber<<endl;
  cout<<"Enter Chemistry marks--- "<<this->m1<<endl;
  cout<<"Enter Physics---"<<this->m2<<endl;
  cout<<"Enter Biology--- "<<this->m3<<endl;
  cout<<"Total percentage--"<<this->percentage<<endl;
  cout<<"                                                                         "<<endl;

}


};

int main(){
    Student arr[5];
    for (int i = 0; i < 4; i++)
    {
     
      cout<<"Entere the Student Information "<<endl;
    arr[i].AcceptStudent();
    }
    for (int i = 0; i < 4; i++)
    {
      cout<<"Here is the student Information"<<endl;
      cout<<"                                                          "<<endl;
      arr[i].disply();
    }
    
    
    return 0;
}