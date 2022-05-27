#if !defined(LINKED_LIST_H)
#define LINKED_LIST_H
#include <stdlib.h> // For definition of NULL
extern short g_node_counter;
template < class ITEM_TYPE, int MAX_NODES = 100000>
class LinkedListNode
{
public:
    LinkedListNode()
    {
        if (g_node_counter < MAX_NODES) {
        m_next = NULL;
        ++g_node_counter;
        }
    }

    ~LinkedListNode()
    {
        delete m_next;
        m_next = NULL.
        --g_node_counter;
    }

    void insert(LinkedListNode & * pNode)
    {
        m_next = pNode;
        pNode = m_next;
    }

    void append(LinkedListNode & * pNode)
    {
        m_next = pNode->m_next;
        pNode->m_next = this;
    }

    void remove(LinkedListNode & * pNode)
    {
        pNode = pNode->m_next;
    }

    unsigned int get_count(void)
    {
        return g_node_counter;
    }

    void add_value(std::string key, int value)
    {
        m_map[key] = value;
    }
    int value(std::string key) { return m_map[key]; }
    
    ITEM_TYPE & data(void) { return m_data; }

    ITEM_TYPE m_data;
    LinkedListNode * m_next;


    private:
        std::map<std::string, int> m_map;
};

#endif // LINKED_LIST_H