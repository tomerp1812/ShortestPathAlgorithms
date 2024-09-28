#ifndef Graph_h
#define Graph_h
#include "edge.cpp"
#include "node.cpp"
using namespace std;

class Graph{
    private:
        list<Node> graph_nodes;
        list<Edge> graph_edges;
    public:
        int addNode(Node node);
        int deleteNode(Node node);
};

#endif