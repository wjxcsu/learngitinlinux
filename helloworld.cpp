#include<iostream>
using  namespace std;
namespace  A
{
    int x=1;
    int fun(){
	cout<<"A"<<endl;
    }
}

namespace B
{
    int x=2;
    int fun(){
	cout<<"B"<<endl;
    }
}
int main()
{
    cout<<"hello world!"<<endl;
    cout<<A::x<<endl;
    cout<<B::x<<endl;
    A::fun();
    B::fun();   
    return 0;
}
