#ifndef DRAWING_H
#define DRAWING_H
#include <graphics.h>
#include "graph.h"
using namespace std;

class Drawing{
    private:
        Graph graph;
    public:
        Drawing(Graph& graph);
        void draw();
};

#endif