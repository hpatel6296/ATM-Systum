//ATM Systeam for transaction 
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class Bank{
    //Private variable 
      private:
        string Name;
        long long accnumber;
        char type[10];
        long long amount = 0;
        long long total = 0;
    //Public variable
      public:
        //Fuction to set persos data
        void setvalue(){
            cout<<"Enter name\n";
            cin.ignore();

            //to use space in string 
            getline(cin,Name);

           cout<<"Enter Account number\n";
           cin>>accnumber;
           cout<<"Enter Account type\n";
           cin>>type;
           cout<<"Enter Balance\n";
           cin>>total;

        }
        //Fuction to display the requred data
        void showdata(){
          cout<<"Name:"<<Name<<endl;
          cout<<"Account no."<<accnumber<<endl;
          cout<<"Account type"<<type<<endl;
          cout<<"Balance"<<total<<endl;
        }
        //Fuction to show total amount
        void showbal(){
          total = total + amount;
          cout<<"\nTotal balance"<<total;
        }

        //Function to deposite the amount in ATM
        void deposit(){
            cout<<"\nEnter amount to be Deposite\n";
            cin>>amount;
        }
        //Function to withdraw the amount 
        void withdraw(){
          int a,avi_balance = total - a;
          cout<<"Available Balance is"<<avi_balance;
        }
};

//Driver code 
int main(){
  //Object of class
  Bank b;

  int choice;

  //infinite while loop to choose
  //Option everytime
     while(1){
      cout<<"\n---------------------------------";
      cout<<"Welcome";
      cout<<"-----------------------------------\n\n";\
      cout<<"Enter your choice \n";
      cout<<"\t1 Enter name Acccount"
          <<"number,Account type\n";
      cout<<"\t2. Balance Equiry";
      cout<<"\t3. Deposite Money";
      cout<<"\t4. Show total Balance";
      cout<<"\t5. Withdraw Money";
      cout<<"\t6. Cancel\n";
      cin>>choice;

      //Choice to select from
      switch(choice){
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
             b.showbal();
             break;
        case 5:
             b.withdraw();
             break;
        case 6:
             exit(1);
             break;
        default:
          cout<<"\n Inavailable Choice\n";
        
      }
     }
}