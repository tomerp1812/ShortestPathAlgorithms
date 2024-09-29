#include "graphCreator.h"
GraphCreator::GraphCreator(int numOfNodes, float chanceOfEdge){
    this->numOfNodes = numOfNodes;
    this->chanceOfEdge = chanceOfEdge;
}

Graph* GraphCreator::createGraph(){
    Graph* graph = new Graph();
    for(int i = 0; i < this->numOfNodes; i++){
        Node* node = new Node(0, i);
        graph->addNode(*node);
    }
    return graph;
}