#define _CRT_SECURE_NO_WARNINGS 1
#include"HFtree.h"

int main()
{
	hftree cc = NULL;
	hfcode zz = NULL;
	createhftree(&cc);
	geth_fcode(cc,&zz);
	input_hfcode(zz);
	return 0;
}