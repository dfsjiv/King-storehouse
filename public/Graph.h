#pragma once
#include<iostream>
#include<vector>
//using namespace std;
using Edge = std::pair<int, int>;//定义边的类型，将边表示为一个整数对(起点, 终点)，简单表示
class Graph 
{
	//图的存储结构是邻接矩阵和邻接表
	// 邻接矩阵vector<vector<int>> g(n, vector<int>(n, 0));
	// 邻接表vector<vector<pair<int,int>>> adj;
	//邻接矩阵适合稠密图,邻接表适合稀疏图
	//
private:
	int vertices_;
	bool directed_;
	std::vector<std::vector<Edge>>adj_;

public:
	explicit Graph(int vertices, bool directed = false)
		: vertices_(vertices), directed_(directed), adj_(vertices + 1) { };
	void addEdge(int u, int v, int w = 1);
	void printGraph() const;
};