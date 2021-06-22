#include <iostream>
#include "string.h"
#include "../include/test.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{   
    string main_name = "demo5";
    char aa[999];
    cout<<"Now Is "<<main_name<<"!!"<<endl;
    test test1;
    test1.Test_Print();
    cin>>aa;
    cout<<"Your Have Print!!! "<<aa<<endl;
  //  cout<<
    cout<<"Helloworld!!"<<endl;
    return 0;
}