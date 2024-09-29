#ifndef GRAPH_H
#define GRAPH_H

#include "edge.h"
using namespace std;

class Graph{
    private:
        vector<Node> graph_nodes;
        vector<Edge> graph_edges;
        int numOfNodes;
        int numOfEdges;
    public:
        Graph();
        int getNumOfEdges();
        int getNumOfNodes();
        vector<Node> getNodes();
        vector<Edge> getEdges();
        int addNode(Node& node);
        int addEdge(Edge& edge);
};

#endif