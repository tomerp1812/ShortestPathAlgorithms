#ifndef Node_h
#define Node_h
#include <list>
using namespace std;

class Node{
    private:
        list<Node> neighbors;
        int value;
        int id;
    public:
        bool operator == (const Node& n) const { return id == n.id && value == n.value; }
        bool operator != (const Node& n) const { return !operator==(n); }
};

#endif