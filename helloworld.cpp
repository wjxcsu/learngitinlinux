#include<iostream>
using namespace std;
namespace A
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
    cout<<"my name is wjx"<<endl;
    cout<<"Size of char:"<<sizeof(char)<<endl;
    cout<<"Size of int:"<<sizeof(int)<<endl;
    cout<<"Size of long:"<<sizeof(long)<<endl;
    cout<<"Size of float:"<<sizeof(float)<<endl;
    cout<<"Size of double:"<<sizeof(double)<<endl;
    cout<<A::x<<endl;
    return 0;
}
