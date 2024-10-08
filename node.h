#ifndef NODE_H
#define NODE_H
using namespace std;
#include <vector>

class Node{
    private:
        int numOfNeighbors;
        int value;
        int id;
        vector<Node> neighbors;
    public:
        Node();
        Node(int value, int id);
        int getId();
        int getValue();
        int getNumOfNeighbors();
        int addNeighbor(Node& node); 
        bool operator == (const Node& n) const { return id == n.id && value == n.value; }
        bool operator != (const Node& n) const { return !operator==(n); }
};

#endif