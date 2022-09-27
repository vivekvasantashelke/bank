#include <iostream>
#include<vector>
#include<ctime>
using namespace std;


class atm
{
   static float ammount;
   int cnt=0;
  public:
  vector<int> v1,v2,v4,v5,v6,v7,v8,v9,v10;
    void account()
    {
     const string name="delta";
    const int acc=12345678;
    cout<<"Account no--"<<acc<<endl;
    cout<<"Account Holder name--"<<name<<endl;
    cout<<"Account Balance--"<<ammount<<endl;
      }

      void set(int x)
       {
           ammount=ammount+x;
       }

void add()
    {
        int cnt=0;
   r:cout<<"Enter pin"<<endl;
     if(pin()==1)
     {
         int a;
        cout<<"Enter amount"<<endl;
         cin>>a;
         set(a);
     }
       else
        {
            cnt++;
            cout<<"wonrg pin--?"<<endl;
            if(cnt==3)
            {
                cout<<"Many time attempt failed ?--You are not Elligable to add cash ?"<<endl;
                exit(0);
            }
        goto r;
    }
    }
    void check()
    {
        int cnt=0;
        r: cout<<"Enter pin"<<endl;
        if(pin()==1)
        cout<<"Your Balance is   "<<ammount<<endl;
        else
        {
            cout<<"wonrg pin--?"<<endl;
            cnt++;
            if(cnt==3)
            {
                cout<<"Many time attempt failed "<<endl;
                exit(0);
            }
        goto r;
        }

    }
    void withraw()
    {
        int cnt=0;
          r: cout<<"Enter pin"<<endl;
        if(pin()==1)
        {
            cout<<"enter withraw amount"<<endl;
          int how;
         s: cin>>how;
          if(ammount<how)
          {
              cout<<"Incefficient Balance to Withraw ?"<<endl;
              cout<<"Enter Again"<<endl;
              goto s;
          }
          ammount=(ammount-how);
          cout<<"Transection Succesfull-"<<endl;
          cout<<"Withraw cash is ----"<<how<<endl;
          cout<<"Remaining Balance is--"<<ammount<<endl;
          trasectoin(how,ammount);
            timed();
        }
        else
        {
            cnt++;
            cout<<"wrong pin !----Error!"<<endl;
             if(cnt==3)
            {
                cout<<"Many time attempt failed "<<endl;
                exit(0);
            }
            goto r;
         }

    }

  void trasectoin(int h,int a)
    {
       v1.push_back(h);
       v2.push_back(a);
        cnt++;
      }
    void display()
    {

       for(int k=0;k<cnt;k++)
       {
           cout<<" Debited ammount "<<v1[k]<<endl;
           cout<<"                                                            "<<endl;
           cout<<" Reamining ammount"<<v2[k]<<endl;
          // timed();
          cout<<"Year :"<<v4[k];cout<<" :Month :"<<v5[k];cout<<" :day :"<<v6[k]<<endl;
          cout<<"                                                                    "<<endl;
          cout<<"Hour :"<<v7[k];cout<<" :minute :"<<v8[k];cout<<" :sec :"<<v9[k]<<endl;
    }
    }
    
    void timed()
    {
     time_t now = time(0);

   tm *ltm = localtime(&now);
   
   v4.push_back(1900 +ltm->tm_year);
   v5.push_back(1 + ltm->tm_mon);
   v6.push_back(ltm->tm_mday);
   v7.push_back(6+ltm->tm_hour);
   v8.push_back((30+ltm->tm_min)-60);
    v9.push_back(ltm->tm_sec);
    }

void link()
{
    long int m,otp,iotp;
    cout<<"enter mobile to link"<<endl;
    cin>>m;
     srand(time(0));
  otp=rand()%10000;
          // cout << rand()%10000<< " OTP "<<endl;
          cout<<"OTP "<<otp<<endl;
    cout<<"Enter OTP to verify"<<endl;
    cin>>iotp;
    if(otp==iotp)
    cout<<"Mobile limked"<<endl;
    else
    cout<<"Invalid OTP"<<endl;
    
}


    int pin()
    {
        int p1;
        cin>>p1;
        cout<<"****"<<endl;
       if(p1==1234)
           return 1;
        else
        return 0;

    }

};
 float atm::ammount;

int main()
{

    int n;
    cout << "welcome ito! " << endl;
   // atm::set(1000);

    atm obj1;
    while(1)
    {
    cout<<"enter ur choce what u want--"<<endl;
     cout<<"0.Exit"<<endl;
    cout<<"1.add cash"<<endl;
    cout<<"2.check balence--"<<endl;
    cout<<"3.withraw--"<<endl;
    cout<<"4.Account Detial"<<endl;
    cout<<"5.Trasection History"<<endl;
    cout<<"6.To link mobile number"<<endl;
       cin>>n;
    switch(n)
    {
        case 0:return 0;
        break;
    case 1:obj1.add();
        break;
    case 2:obj1.check();
        break;
    case 3:obj1.withraw();
        break;
     case 4:obj1.account();
        break;
    case 5:obj1.display();
        break;
        case 6:obj1.link();
        break;

    }
   }
   return 0;
}