# include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the numbers";
    cin>>a>>b;
    for(a=1;a<=5;a++)
    {
        cout<<" it is is the for loop"<<endl;
    }
// while loop
int pin;
cout<<"enter the right pin";
cin>>pin;
while( pin !=9999){
cout<<"it is the wrong pin"<<endl;
cin>>pin;}
// do while loop
int password;
cout<<"enter the password";
cin>>password;
do{
    cout<<"it is the wrong password ";
    cin>>password;}
    while(password !=123);

return 0;
}  