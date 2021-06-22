#include <iostream>
#include "../include/test.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{   
    char aa[999];
    test test1;
    test1.Test_Print();
    cin>>aa;
    cout<<"Your Have Print "<<aa<<endl;
    cout<<"Helloworld!!"<<endl;
    return 0;
}