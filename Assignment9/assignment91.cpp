#include<iostream>
using namespace std;


void factorial(int n)
{
 
     int result=1;
     if(n<0)
     throw 1; 

     else { 
     for (int i = 1; i < n; i++)
           result=result*i;
     }
     cout<<"The factorail is "<<result<<endl;;
}

int main(){
    int num1;
    try
    {
        cout<<"Enter a Number"<<endl;
        cin>>num1;
        factorial(num1);
    }
    catch(int error){

        cout<<"You Cannot get factorial pf -ve and 0 "<<endl;

    }
    cout<<"Congrats........."<<endl;

}
