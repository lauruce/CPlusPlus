template<typename T>
struct ChainNode
{
    T Element;
    ChainNode<T> *Next;
};

template<typename T>
class LinkedList
{
public:
    LinkedList(){}
    ~LinkedList(){}
private:
    ChainNode<T> *m_FirstElem;
};

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
};

template<typename T>
LinkedList<T>::LinkedList()
{
    m_FirstElem = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    while(m_FirstElem != nullptr)
    {
        ChainNode<T>* NextNode = m_FirstElem->Next;
        delete m_FirstElem;
        m_FirstElem = NextNode;
    }
}

template<typename T>
void LinkedList<T>::AddElement(T Ele)
{
    
}