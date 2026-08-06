# include <iostream>
using namespace std;
int main ()
{
    // to cheack clg admission eligbility
int marks;
string stream;
cout<<"enter your stream and pcm or accounts marks:";
cin>>stream;
cin>>marks;
if (stream == "science") 
if (marks>=90)
cout<<"you are eligible for Engineering";
else
cout<<"you are not eligible for Engineering";
else if(stream=="commerce")
if (marks>=90)
{cout<<"you are eligible for Bcom";}
    else{
        cout<<"you are not eligible for Bcom";
        }

else{
    cout<<"choose suitable course"<<endl;}
    int a,b;
    cout<<"enter the number:";
    cin>>a;
    cout<<"enter the number:";
    cin>>b;
    cout <<((a>b) ?  "a is a greatest number" : "b is greatest number");
        return 0;






}