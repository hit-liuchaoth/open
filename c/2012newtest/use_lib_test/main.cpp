#include "lib_test.h"
#pragma comment(lib,"lib_test.lib")
#include <fstream>
using namespace std;
main()
{
	fstream file;
	file.open("1.txt",2);
	LIB_TEST a(15);
	a.show();
	file<<1;
}