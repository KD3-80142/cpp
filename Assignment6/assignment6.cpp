#include <iostream>
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
    void setday()
    {
        this->day = day;
    }
    int getmonth()
    {
        return month;
    }
    void setmonth()
    {
        this->month = month;
    }
    int getyear()
    {
        return year;
    }

    void setyear()
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
};
// class employee{
//     private:
//     int empId;
//     float sal;
//     string dept;

// };
 class person{
   private:
   string name;
   string addr;
   date dob;
   public:
 };
int main()
{
    date d1;
    d1.accept();
    d1.disply();
    d1.leap_year();
    return 0;
}
