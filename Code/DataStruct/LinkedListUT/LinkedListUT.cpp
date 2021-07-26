#include "LinkedLisUT.hpp"
#include "../LinkedList/LinkedList.hpp"
#include <iostream>

TEST_F(LinkedLisUT,LinkedListTest)
{
    int Input[] = {5,32,65,21,3,54,62,82,64,6};
    int Size = sizeof(Input)/sizeof(int);

    LinkedList<int> MyLinkedList;
    for(int i = 0;i < Size;i++)
    {
        MyLinkedList.AddElement(Input[i]);
    }

    MyLinkedList.PrintLinkedList();
}