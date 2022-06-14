#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

int main()
{
	queue cc;
	ini_queue(&cc);
	enqueue(&cc, 10);
	enqueue(&cc, 8);
	enqueue(&cc, 9);
	printf("%d %d %d", (cc.l[cc.front ]),cc.l[cc.front+1],cc.l[cc.front+2]);
	dequeue(&cc);
	printf("\n%d %d", cc.l[cc.front], cc.l[cc.front + 1]);
	//linkqueue d;
	//ini_linklist(&d);
	//en_linklist(&d, 8);
	//en_linklist(&d, 9);
	//en_linklist(&d, 10);
	//printf("%d %d %d", d.front->next->c, d.front->next->next->c, d.front->next->next->next->c);
	//de_linklist(&d);
	//printf("\n%d %d", d.front->next->c, d.front->next->next->c);
	return 0;
}