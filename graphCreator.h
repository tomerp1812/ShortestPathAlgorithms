#ifndef GRAPHCREATOR_H
#define GRAPHCREATOR_H
#include "graph.h"
#include <cstdlib>
#include <bits/stdc++.h>
class GraphCreator{
    private:
        int numOfNodes;
        double chanceOfEdge;
    public:
        GraphCreator(int numOfNodes, double chanceOfEdge);
        Graph* createGraph();
};
#endif