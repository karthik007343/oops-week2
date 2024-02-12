#include<iostream>
using namespace std;
void evenorodd(int num)
{
    if(num%2==0)
    {
        cout<<"number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

}
int main()
{
    int num;
    cout<<"enter the number num:";
    cin>>num;
evenorodd(num);
return 0;
}
