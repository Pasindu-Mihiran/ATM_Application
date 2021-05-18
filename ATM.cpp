#include <iostream>
#include <string>
using namespace std;

void showMenu(){
    cout<<"***********MENU**********"<<endl;
    cout<<"1. Check Balance" <<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw" <<endl;
    cout<<"4. Exit "<<endl;
    cout<<"*************************"<<endl;
}

int main()
{
    string option;
    double balance = 500;

    do{
    showMenu();

    cout<<"Option : ";
    cin>>option;
    system("cls");
    if(option == "1")
        cout<<"Balance is : "<<balance<<"/="<<endl;
    else if(option == "2")
    {
            cout<<"Deposit Amount : ";
            double depositAmount;
            cin>>depositAmount;
            balance+= depositAmount;
            cout<<"Balance is : "<<balance<<"/="<<endl;
    }
    else if(option == "3")
    {
            cout<<"Withdraw Amount : ";
            double withdrawAmount;
            cin>>withdrawAmount;
            if(withdrawAmount <= balance)
            {
                balance-= withdrawAmount;
                cout<<"Balance is : "<<balance<<"/="<<endl;
            }
            else
                cout<<"Not enough money \n";
    }
    else if(option == "4")
        cout<<"Have a nice day !!!"<<endl;
    else
        cout<<"Please check your option"<<endl;
    }while(option != "4");

    return 0;
}
