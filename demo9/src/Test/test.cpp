#include <iostream>
#include "../../include/test.h"
using std::cout;
using std::endl;

test::test()
{
    cout<<"Test Has Been Made"<<endl;
}

test::~test()
{
    cout<<"Test Has Been Destroied"<<endl;
}

void test::Test_Print()
{
    cout<<"Test Print Now"<<endl;
}