#include<iostream>
#include<string>

using namespace std;

class Atm
{
    private:
    string user[100] = {"user1","user2"};
    string pin[100] = {"pin1","pin2"};
    int acc_bal[100] = {1000,20000,34803,22345};

    public:
    int userNo;
    int login(string u , string p)
    {
        int check = 0,len = 0;
        for(auto i : user)
        {
            len++;
        }
        for(int i = 0 ; i<len ; i++)
        {
            if(u==user[i] && p==pin[i])
            {
                check=1;
                userNo = i;
                break;
            }
        }
        return check;
    }

    int credit_amount(int amount)
    {
        acc_bal[userNo] += amount;
        return acc_bal[userNo];
    }

    int debit_amount(int amount)
    {
        if((acc_bal[userNo]-500) >= amount)
        {
            acc_bal[userNo] -= amount;
            return acc_bal[userNo];
        }
        else
        {
            return 0;
        }
    }

    void balance()
    {
        cout<<"Account balance = Rs."<<acc_bal[userNo]<<endl;
    }
};

int main()
{
    string user,pin;
    int amount,mainloop = 1;
    char option;
    cout<<"*****WELCOME*****"<<endl;
    mainloop:
    cout<<"Enter username : ";
    cin>>user;
    cout<<"Enter pin number : ";
    cin>>pin;

    Atm obj;
    int login = obj.login(user,pin);
    if(login == 1)
    {
        int loop = 1;
        loop1:
        cout<<"\nCorrect pin number"<<endl;
        cout<<"\nChoose the option:\n\t1. Credit\n\t2. Debit\n\t3. Check balance\n";
        cout<<"Enter the option (1/2/3): ";
        cin>>option;
        switch(option)
        {
            case '1':
                loop2:
                cout<<"\nEnter credit amount : ";
                cin>>amount;
                if(amount>0)
                {
                    int current_bal = obj.credit_amount(amount);
                    cout<<"Amount Rs."<<amount<<" Credited to your account"<<endl;
                    cout<<"Account balance : Rs."<<current_bal<<"\n***Thank you***"<<endl;
                    break;
                }
                else
                {
                    cout<<"Minimum required amount is Rs.1"<<endl;
                    goto loop2;
                }

                case '2':
                    loop3:
                    cout<<"Enter debit amount : ";
                    cin>>amount;
                    if(amount<50000 && amount>0)
                    {
                        int debit = obj.debit_amount(amount);
                        if(debit == 0)
                        {
                            cout<<"Account balance is not sufficient"<<endl;
                            goto loop3;
                        }
                        else
                        {
                            cout<<"Amount is debited from your account"<<endl;
                            cout<<"Account balance : Rs."<<debit<<"\nThank you"<<endl;
                            break;
                        }
                    }
                
                case '3':
                    obj.balance();
                    cout<<"Thank you"<<endl;
                    break;
                
                default:
                    cout<<"Wrong option";
                    loop++;
                    if(loop<=3)
                    {
                        goto loop1;
                    }
                    else
                    {
                        break;
                    }
        }
    }
    else
    {
        cout<<"\nWrong pin number\n"<<endl;
        mainloop++;
        if(mainloop<=3)
        {
            goto mainloop;
        }
    }
}
