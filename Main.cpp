#include<iostream>
#include"Test.h"

int main(void)
{

float i=0;
    for( i=0;i<10;i++)
    {
        std::cout<<"xxx:"<<Test::GetX()<<std::endl;
    }
    return 0;
}