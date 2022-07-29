#include"sort.h"

int main()
{
	//int arr[] = { 5,3,1 };
	Sqlist cc = {0};
	ini_sort(&cc);
	//insert_sort(&cc);
	//di_inset_sort(&cc);
	//shell_sort(&cc, arr, sizeof(arr)/sizeof(arr[0]));
	pop_sort(&cc);
	output_sort(&cc);
	return 0;
}