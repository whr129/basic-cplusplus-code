#include <iostream>
using namespace std;
int main()
{
    string a[8]={"O-","O+","A-","A+","B-","B+","AB-","AB+"};
    for(int i=0; i < 8; i++)
        for(int j=0; j< 8;j++)
            cout<<"(check-expect (can-donate-to/cond? "<<"'"<<a[i]<<" '"<<a[j]<<") true)"<<endl;
}