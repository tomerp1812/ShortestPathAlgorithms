#include "graph.h"

Graph::Graph(){
    this->numOfEdges = 0;
    this->numOfNodes = 0;
}

int Graph::getNumOfEdges(){
    return this->numOfEdges;
}

int Graph::getNumOfNodes(){
    return this->numOfNodes;
}

vector<Node> Graph::getNodes(){
    return this->graph_nodes;
}

vector<Edge> Graph::getEdges(){
    return this->graph_edges;
}

// return 0 if node added succesfully, -1 otherwise
int Graph::addNode(Node& node){
    this->numOfNodes++;
    this->graph_nodes.push_back(node);
    return 0;
}

int Graph::addEdge(Edge& edge){
    this->numOfEdges++;
    this->graph_edges.push_back(edge);
    return 0;
}