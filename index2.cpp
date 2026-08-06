#include <iostream>
using namespace std;
int x=12;
int main()
{int y=3;
    cout<<x<<endl;
    cout<<y<<endl;
    int z;
    cout<<"enter the number:"<<endl;
    cin >> z ;
    if (z%2==0)
    cout<<"it is the even number\n";
    else
    cout<<"it is the odd number \n";
    int w;
    cout << "enter any number to cheak it is divisble by any number or not:";
    cin>>w;
    if (w%2==0)
     cout << "it divisble by 2\n";
     if (w%3==0)
  cout << "it is divisble by 3\n";
  if (w%4==0)
   cout << "it is divisble by 4\n";
   else
    cout << "it is not divisble by my given numbers";

     


    return 0;


}