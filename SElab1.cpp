#include<iostream>
#include<stdio.h>

using namespace std;

class account
{
public:
    int curbal,total_trans,account_no,wamt;


    account(int account_no, int curbal)
    {
        account_no=account_no;
        curbal=curbal;
        cout<<"New account created with balance "<<curbal<<" and account id as "<<account_no <<endl;
    }
    int Withdraw(int curbal)
    {
        cout<<"Enter the amount to withdraw "<<endl;
        cin>>wamt;
        cout<<"The remaining balance is "<<curbal-wamt<<endl;
        return (curbal-wamt);
    }
    float Balance()
    {
        cout<<"The remaining balance is "<<curbal-wamt<<endl;
    }
    void display();
    void addaccount(account a);
    void Withdrawlfromaccount(double amt, int accno);
    void printallbalance();
};
int main()
{
    int accno;
    static int balance;
    static int nt=0;
    char ch,ch1;
    char type;

    cout <<"Enter the account number "<<endl;
    cin>>accno;
    cout <<"Enter the current balance "<<endl;
    cin>>balance;
       int fbal=balance;
    cout<<"Press 'y' to withdraw or any other key to bypass "<<endl;
    cin>>ch;
    account a1(accno,balance);
    while (ch=='y')
    {
    cout <<"Enter the type of account A or B "<<endl;
    cin>>type;
    if (type=='A')
    {
        nt+=1;
        //account a1(accno,balance);
        fbal=a1.Withdraw(fbal-50);
    }
    else if (type=='B')
    {
        nt+=1;
        //account a1(accno,balance);
        fbal=a1.Withdraw(fbal-10);
    }
    cout<<"Number of the transactions are " <<nt<<endl;
    cout<<"Press 'y' to withdraw or any other key to bypass "<<endl;
    cin>>ch;

    }
    cout <<"Press p to print balance "<<endl;
    cin>>ch1;
    if (ch1=='p')
    {
        cout<<"Final balance is "<<fbal<<endl;
    }

    return 0;
}
