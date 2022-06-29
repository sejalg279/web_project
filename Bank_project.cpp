#include<iostream>
#include<conio.h>
using namespace std;
class Bank{
    char name[100],add[100],y;
    int balance,amount;
public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void Bank:: open_account()
{
    system("cls");
    cout<<"Enter Your Name : "<<endl;
    cin.ignore();
    cin.getline(name,100);

    cout<<"Enter Your address : "<<endl;
    cin.ignore();
    cin.getline(add,100);

    cout<<"Which Type -> Saving  or  current : "<<endl;
    cin>>y;
    cout<<"Enter Amount to deposite : "<<endl;
    cin>>balance;
    cout<<"Your Account is created : "<<endl;
}

void Bank::deposite_money()
{
    int a;
    cout<<"How much money you want to deposit :"<<endl;
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount : "<<endl;
}
void Bank::display_account()
{
    cout<<"Enter the Name : "<<name<<endl;
    cout<<"Enter your Address : "<<add<<endl;
    cout<<"Type of account that you Open : "<<y<<endl;
    cout<<"Amount you Deposite : "<<balance<<endl<<endl<<endl;
}
void Bank::withdraw_money()
{
    cout<<"Withdraw : ";
    cout<<"Enter your amount to withdraw :  "<<endl;
    cin>>amount;
    balance=-amount;
    cout<<"Your total amount left : "<<balance<<endl;
}

int main()
{
    int ch,x,n;
    Bank obj;
    system("cls");
    system("color 0A");
    do{
        cout<<"1.   Open Account"<<endl;
        cout<<"2.   Deposit Money"<<endl;
        cout<<"3.   Withdraw Money"<<endl;
        cout<<"4.   Display Account"<<endl;
        cout<<"5.   Exit"<<endl;

        cout<<"Enter your Choice : ";
        cin>>ch;

        switch(ch)
        {
        case 1:
            obj.open_account();
            break;
        case 2:
            obj.deposite_money();
            break;
        case 3:
            obj.withdraw_money();
            break;
        case 4:
            obj.display_account();
            break;
        case 5:
            if(ch==5)
            {
                cout<<"Exit ";
            }
        default:
            cout<<"Wrong Choice  ";
        }
        cout<<"Do you want to select next step then press -  y"<<endl;
        cout<<"If want to exit press - N"<<endl<<endl;
        x=getch();
        if(x=='n'  || x=='N'  )
            cout<<"Exit";
    }
    while(x=='y'  || x=='Y');
    getch();
    return 0;
}
