#include <iostream>
#include <cstring>
using namespace std;

class sell{
   private:
   int bill=0;
  int totalbill;
    public:
    virtual void accept()=0;
    virtual void display()=0;
    virtual void calculateBill()=0;

    void setbill(int bill){
        this->bill+=bill;
    }
    virtual void displaybill()
    {
        cout << "Total bill = " << this->bill << endl;
    }
    int  totalbillcalculate(){
            
    return this->bill;
   }
    
    void showBill()
    {
        
        cout<<totalbill<<endl;
    }
  
};

class book: public sell{
    private:
    int id;
    string title;
    string author;
    int price;

void accept(){
  
  cout<<"ID book "<<endl;
  cin>>this->id;
  cout<<"eneter title "<<endl;
  cin>>this->title;
  cout<<"Author "<<endl;
  cin>>this->author;
  cout<<"Book Price"<<endl;
  cin>>this->price;

}

void calculateBill(){
    this->setbill(this->price - this->price*0.10);
 }

  void display(){
    cout<<"Accept the id of book "<<this->id<<endl;
    cout<<"Enter the title "<<this->title<<endl;
    cout<<"Enter Author Name "<<this->author<<endl;
    cout<<"Enter price "<<this->price<<endl;
    //sell::displaybill();
  }  

 
};
class tape: public sell{
    private:
    int id;
    string title;
    string artist;
    int price;

    public:
    void accept(){
  cout<<"ID Teap "<<endl;
  cin>>this->id;
  cout<<"eneter title "<<endl;
  cin>>this->title;
  cout<<"artist "<<endl;
  cin>>this->artist;
  cout<<"Book Price"<<endl;
  cin>>this->price;

}
   void calculateBill(){
    this->setbill(this->price -this->price * 0.05);
  }


  void display(){
    cout<<"Accept the id of book "<<this->id<<endl;
    cout<<"Enter the title "<<this->title<<endl;
    cout<<"Enter artist Name "<<this->artist<<endl;
    cout<<"Enter price "<<this->price<<endl;
    //sell::displaybill();
  }  
  
  

};
int menu()
{
    int choice;
    cout << "--------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Add BookDetails" << endl;
    cout << "2. Add TeapsDeatils" << endl; 
    cout << "3. Display total bill" << endl;
    cout << "Enter Your Chocie = ";
    cin >> choice;
    cout << "--------------------" << endl;
    return choice;
}
int main()
{

    sell *arr[3];
    int index=0;
    int tb=0;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new book();
                arr[index]->accept();
                arr[index]->calculateBill();
                index++;
            }
            else
                cout << "Array is Full, Cannot add the books......" << endl;
            break;
        case 2:
        if(index < 3)
        {
            arr[index] = new tape();
            arr[index]->accept();
            arr[index]->calculateBill();
            index++;
        }
            else
             cout<<"Arry is full"<<endl;
            break;
    case 3: for(int i=0;i<index;i++)
            {
                tb=tb+arr[i]->totalbillcalculate();
            }
             cout<<"Total Bill: "<<tb<<endl; 
                
            break;
        default:
            cout << "Wrong Choice ..." << endl;
            break;
        }
    }
    for (int i = 0; i < index; i++)
        delete arr[i];

    cout << "Thank you for using our app..." << endl;

    return 0;
}