#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int **adj;
    int n;
}Graph;


typedef Graph *pGraph;


pGraph createGraph(int n);s


void destructGraph(pGraph g);

void inputEdge(pGraph g, int u, int v);

void removeEdge(pGraph g, int u, int v);

int haveEdge(pGraph g, int u, int v);

void printEdges(pGraph g);






#endif // GRAPH_H_INCLUDED
