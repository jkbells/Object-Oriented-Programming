// SOME PREPROCESSER CODE EXAPLES


#include<iostream>
using namespace std;
//#define INCLUDE_INVENTORY_MODULE

#ifdef INCLUDE_INVENTORY_MODULE
void show_inventory()
{
	cout <<"showing inventory ----" << endl;
}
#endif

#define size 5
#define ABS(a) ((a)<0? -(a):a)
int main()
{
	cout <<"hello world!" << endl;
	for (int i=0;i<size;i++)
	cout << i << endl;
	cout <<"size" << endl;
	cout <<"ABS value:" << ABS(-25) << endl;
	#ifdef INCLUDE_INVENTORY_MODULE
	show_inventory();
	#endif
	system ("pause");
	return 0;
}
