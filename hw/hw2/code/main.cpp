#include <iostream>
#include <map>
#include <linked_list.h>
#define MAX_NODES 75000
typedef LinkedListNode<int, MAX_NODES> int_list_t;
typedef LinkedListNode<double, MAX_NODES> double_list_t;
//////////////////////////////////////
class UberNode : public int_list_t
{
    public :
        UberNode() {}
        ~UberNode() {}
        void add_value(std::string key, int value)
        {
        m_map[key] = value;
        }
        int value(std::string key) { return m_map[key]; }
    private:
        std::map<std::string, int> m_map;
};

//////////////////////////////////////
int main(int, char **)
{
    UberNode *pRoot = new UberNode();
    UberNode *pLast = pRoot;
    int count = pRoot->get_count();
    while (count < MAX_NODES)
    {
        UberNode * pNew = new UberNode();
        pNew->add_value("COUNT", count);
        pLast->append(pNew);
        pLast = pNew;
    }
    double_list_t * pDoubleRoot =
        new double_list_t();
    double_list_t *pDoubleLast = pDoubleRoot;
    int count = pDoubleRoot->get_count();
    while (count < MAX_NODES)
    {
        double_list_t * pDoubleNew =
        new double_list_t;
        pDoubleNew->add_value("COUNT", count);
        pDoubleLast->append(pDoubleNew);
        pDoubleLast = pDoubleNew;
    }
    delete pRoot;
    delete pDoubleRoot;

 return 0;
}