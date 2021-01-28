#include <iostream>
#include "boost/shared_array.hpp"

int main()
{
    int iArraySize = 5;
    std::cout<<"Array size: "<<iArraySize<<std::endl;

    boost::shared_array<int> ptrArray(new int[iArraySize]);
    for(int i = 0;i < iArraySize;i++)
    {
        ptrArray[i] = i + 10;
    }

    for(int j = 0;j < iArraySize;j++)
    {
        std::cout<<"Array["<<j<<"]: "<<ptrArray[j]<<std::endl;
    }

    return 0;
}