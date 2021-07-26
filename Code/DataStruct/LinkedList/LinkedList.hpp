#include <iostream>

template<typename T>
struct ChainNode
{
    ChainNode<T>* Next;
    T Element;

    ChainNode():Next(nullptr)
    {}
};

template<typename T>
class LinkedList
{
private:
    ChainNode<T>* m_FirstNode;
public:
    LinkedList();
    ~LinkedList();
    void AddElement(T Ele);
    void PrintLinkedList();
};

template<typename T>
LinkedList<T>::LinkedList()
{
    m_FirstNode = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    while(m_FirstNode != nullptr)
    {
        ChainNode<T>* NextNode = m_FirstNode->Next;
        delete m_FirstNode;
        m_FirstNode = NextNode;
    }
}

template<typename T>
void LinkedList<T>::AddElement(T Ele)
{
    ChainNode<T>* pTempNode = new ChainNode<T>;
    pTempNode->Element = Ele;
    if(m_FirstNode != nullptr)
    {
        pTempNode->Next = m_FirstNode;
    }

    m_FirstNode = pTempNode;
}

template<typename T>
void LinkedList<T>::PrintLinkedList()
{
    std::cout << "LinkedList value: ";
    ChainNode<T>* pTempNode = m_FirstNode;
    while(pTempNode != nullptr)
    {
        std::cout << pTempNode->Element << " ";
        pTempNode = pTempNode->Next;
    }

    std::cout << std::endl;
}