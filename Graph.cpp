#include<iostream>
#include"Graph.h"
using namespace std;
void Graph::addEdge(int u, int v, int w)
{
	adj_[u].emplace_back(v, w);
	if (!directed_)
	{
		adj_[v].emplace_back(u, w);
	}
}
void Graph::printGraph()const
{





}