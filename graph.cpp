#include "graph.h"

//return 0 if node added succesfully, -1 otherwise
int Graph::addNode(Node node)
{
    this->graph_nodes.push_back(node);
    return 0;
}

//return 0 if node deleted succesfully, -1 otherwise
int Graph::deleteNode(Node node)
{
    this->graph_nodes.remove(node);
    return 0;
}
