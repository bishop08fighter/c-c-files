#include<iostream>
using namespace std;
class n2;
class n1
{
   int a;
   public:
   friend void swap(n1,n2);
};
class n2
{
   int b;
   public:
   friend void swap(n1,n2);
};
void swap(n1 x,n2 y)
{
   int t;
   cout<<"Enter the value of data member of class 1 :"<<endl;
   cin>>x.a;
   cout<<"Enter the value of data member of class 2 :"<<endl;
   cin>>y.b;
   cout<<"\nThe original values are"<<endl;
   cout<<"\nData of class 1 = "<<x.a;
   cout<<"\nData of class 2 = "<<y.b<<endl;
   t=x.a;
   x.a=y.b;
   y.b=t;
   cout<<"\nThe values after Swapping :"<<endl;
   cout<<"\nData of class 1 = "<<x.a;
   cout<<"\nData of class 2 = "<<y.b;
}
int main()
{
    n1 x;
    n2 y;
    swap(x,y);
    return 0;
}
