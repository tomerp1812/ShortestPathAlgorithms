#ifndef GraphCreator_h
#define GraphCreator_h
#include "graph.h"
#include <cstdlib>
class GraphCreator{
    private:
        int numOfNodes;
        float chanceOfEdge;
    public:
        GraphCreator(int numOfNodes, float chanceOfEdge);
        Graph createGraph();
};
#endif