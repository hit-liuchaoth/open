#include <fstream>
using namespace std;
main()
{
	fstream f;
	fstream f2;
	char x[20];

	f.open("normal");
	f2.open("out_normal",ios_base::out);
	f>>x;
	while(*x!='\0')
	{
		f2<<"\"";
		f2<<x;
		f2<<"\",";
		f>>x;
	}
}