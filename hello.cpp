#include"hello.h"
#include<iostream>

Hello::Hello(): message("hello")
{
}

Hello::~Hello()
{
}

void Hello::print()
{
    std::printf("%s", this->message);
}