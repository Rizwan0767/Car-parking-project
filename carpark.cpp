#include<iostream>
using namespace std;
int main() 
{
    int n;   //  // for taking input that what you want to park

    cout << "welcome to rizwan's car parking"<<endl;

    int r = 0;   //for print how much rikshaw now parked
    int c = 0;    // for print how much rikshaw now parked
    int b = 0;    // for print how much rikshaw now parked


                         
    int amount = 0, count = 0;

    // menu
 while(true)
 {
    cout << "press 1 for rickshw"<<endl;
    cout << " press 2 for car " << endl;
    cout << "press 3 for bus" << endl;
    cout << "press 4 to show records" << endl;
    cout << "press 5 to delete the record" << endl;

    cin >> n;

    if(n==1)
    {
        if(count<=50)
        {
            r++; // or r=r+1;
            amount = amount + 100;
            count = count + 1;
        }
        else
        {
            cout << "no more rikshaw, parking is full" << endl;
        }
    }

    else if(n==2)
    {

     if(count<=50)
     {
         c++; // c=c+1;
         amount = amount + 200;
         count = count + 1;
     }

     else
     {
         cout << " No more cars , parking is full" << endl;
     }
    }

     else if(n==3)
    {
       if(count<=50)
       {
           b++;   // for incrasing bus numver everytime u have parked bus
           amount = amount + 300;
           count = count + 1;
       }

       else
       {
           cout << "parking is full" << endl;
       }
    }

   else if(n==4)
    {
        cout << " ***********************************" << endl;
        cout << " the total amount = " << amount << endl;
        cout << "the total numbers of vahicals paraked = " << count << endl;
        cout << "the total numbers of rikshaw paraked = " << r << endl;
        cout << "the total numbers of car paraked = " << c << endl;
        cout << "the total numbers of bus paraked = " << b << endl;
        cout << " ***********************************" << endl;
    }

    else if(n==5)
    {
        amount = 0;      // if deleted the prices will be 0 evrtying will be 0  
        count = 0;
        r = 0;
        c = 0;
        b = 0;
        cout << " ***********************************" << endl;
        cout << "RECORD DELETED" << endl;
        cout << " ***********************************" << endl;
    }

    else
    {
        cout << "invalid number" << endl;
    }

 }
    return 0;
}