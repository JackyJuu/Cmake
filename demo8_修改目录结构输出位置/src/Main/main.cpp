#include <iostream>
#include "string.h"
#include "../../include/test.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{   
    string main_name = "demo8";
    char aa[999];
    cout<<"Now Is "<<main_name<<"!!"<<endl;
    test test1;
    test1.Test_Print();
    cin>>aa;
    cout<<"Your Have Print "<<aa<<endl;
  //  cout<<
  #ifdef HappyFirst
  cout<<"Now You Use HappyFirst"<<endl;
  #endif

  #ifdef HappySecond
  cout<<"Now You Use HappySecond"<<endl;
  #endif
  
    cout<<"Helloworld!!"<<endl;
    return 0;
}