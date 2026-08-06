#include <iostream>
using namespace std ;
int add(int a ,int b){
    return (a+b);
}
void f(int x){
    if(x>0){
        cout<<x;
        f(x-2);
        cout<<x;
    }
}
int main(){
int a,b,c;
cout<<"enter two numbers which you want to add:";
cin >>a>>b;


cout <<"sum of the  given two numbers:"<<add(a,b);
// recursion 
cout<<" enter the number for recursion:";
cin>>c;
f(c);
return 0;

}

