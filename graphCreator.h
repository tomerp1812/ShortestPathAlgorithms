#ifndef GRAPHCREATOR_H
#define GRAPHCREATOR_H
#include "graph.h"
#include <cstdlib>
class GraphCreator{
    private:
        int numOfNodes;
        float chanceOfEdge;
    public:
        GraphCreator(int numOfNodes, float chanceOfEdge);
        Graph* createGraph();
};
#endif