#include <iostream>
#include <cstring>
using namespace std;

class date
{
private:
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }
    date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void accept()
    {
        cout << "Enter the day" << endl;
        cin >> this->day;
        cout << "Enter the month" << endl;
        cin >> this->month;
        cout << "enter year" << endl;
        cin >> this->year;
    }

    void disply()
    {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
        leap_year();
    }
    int getday()
    {

        return day;
    }
    void setday(int day)
    {
        this->day = day;
    }
    int getmonth()
    {
        return month;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return year;
    }

    void setyear(int year)
    {

        this->year = year;
    }

    bool leap_year()
    {
        if (year % 100 == 0 || year % 4 == 0)
        {
            cout << "leap year" << endl;
            return true;
        }
        else
        {
            cout << "Not leap year;";
            return false;
        }
    }
    virtual ~date(){
        cout<<"date class dstor"<<endl;
    }
};
class person
{
private:
    string name;
    string addr;
    date dob; 

public:
    person()
    {
        this->name = "";
        this->addr = "";
    };
    person(string name, string addr, int day, int month, int year) 
    {
        date(day,month,year);
        this->name = name;
        this->addr = addr;
    };
    string getname(string name)
    {
        this->name;
    }
    void setname()
    {
        this->name = name;
    }
    int getaddr()
    {
        this->addr;
    }
    void setaddr()
    {
        this->addr = addr;
    }
    date getdob()
    {
        cout<<"**********"<<endl;
        return this->dob;
    }
    void setdob()
    {
        dob.accept();
    }
    void disply(){
        cout<<"*****************************"<<endl;
        cout<<"Name  = "<<this->name<<endl;
        cout<<"Addr  = "<<this->addr<<endl;
        cout<<"DOB= "<<endl;
        dob.disply();
    }
    void accept(){
        cout<<"******************************************"<<endl;
         cout<<"Enter person name"<<endl;
         cin>>this->name;
         cout<<"Enter person addr"<<endl;
         cin>>this->addr;
         cout<<"person DOB "<<endl;
         dob.accept();
    }
     
    virtual ~person(){
        cout<<"date class dstor"<<endl;
    }
};
class employee :public person{
    private:
    int id;
    float sal;
    string dept;
    date joining;


    public:
    employee(){
        this->dept="";
        this->id=0;
        this->sal;

    }
    employee(int id,float sal,string dept){
        this->dept=dept;
        this->id=id;
        this->sal=sal;
    } 
    int getid(){
        this->id;
    }
    int setid(){
        this->id=id;
    }

    float getsal(){
        this->sal;
    }
    void setsal(float sal){
        this->sal=sal;
    }
    string getdept(string deot){
         this->dept;
    }
    void setdept(){
        this->dept=dept;
    }
    date getjoining(date joining){
        this->joining;
    }
    void setjoining(){
        this->joining=joining;
    }

   void display(){
    cout<<"******************************************"<<endl;
      cout<<" employee id "<<this->id<<endl;
      cout<<"department "<<this->dept<<endl;
      cout<<"Sal "<<this->sal<<endl;
      cout<<"joing date"<<endl;
      joining.disply();
   }
   void accept(){
    cout<<"******************************************"<<endl;
    cout<<"Enter Employee ID= "<<endl;
    cin>>this->id;
    cout<<"Enter employee Department"<<endl;
    cin>>this->dept;
    cout<<"Enter Employee salary"<<endl;
    cin>>this->sal;
    cout<<"Employee join date"<<endl;
    joining.accept();
   }
   virtual ~employee(){
    cout<<"employee class dstor"<<endl;
   }
};
int main()

{   person *p=new employee();
    // bptr->accept();
    // bptr->disply();
    
    person *dptr = (person *) p;
    // dptr->accept();
    // dptr->setaddr();
    // dptr->disply();
    
    dptr->accept();
    dptr->disply();
    

    // date *deptr = new employee();
    // employee *eptr = (employee *) deptr;
    // eptr->getsal();
    // eptr->accept();
    // eptr->display();

    return 0;
}