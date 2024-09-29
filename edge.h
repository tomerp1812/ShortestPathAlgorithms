#ifndef EDGE_H
#define EDGE_H
#include "node.h"
using namespace std;

class Edge{
    private:
        int weight;
        Node from;
        Node to;
    public:
        Edge(Node& from, Node& to, int weight);
        int getWeight();
        Node getFrom();
        Node getTo();
};


#endif