#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
cout<<"------Table Generator------";
int a;
cout<<"\nEnter Number For Generate Table : ";
cin>>a;
int b;
cout<<"How Many Time Table Generate : ";
cin>>b;
int x;
for(x=1;x<=b;x++)  //only one change...
{
int y;
y=a*x;
cout<<endl<<a<<"X"<<x<<"="<<y;
}
	getch();
}