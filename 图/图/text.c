#include"graph.h"

int main()
{
	int a = 2;
	//graph g = { 0 };
	grophnode g = { 0 };
	//create_graph(&g);
	int path1[6] = { 0 };
	//dfs(&g, a, path1);
	create_gra(&g);
	dfs_list(&g, a, path1,g.v[a].next);
	return 0;
}