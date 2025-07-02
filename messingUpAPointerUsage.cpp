 #include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgan, char* psz[])
{
	int    upper = 0;
	int    n     = 0;
	int    lower = 0;
	
	cout << "the initial values are" << endl;
	cout << "upper = " << upper << endl;
	cout << "n     = " << n     << endl;
	cout << "l"
	
	ower = " << lower << endl;
	
	cout << "\nStoring 13. into the location &n" <<endl;
	double* pD = (double*)&n;
	*pD = 13.0;
	 
	cout << "\n The final result are;" << endl;
	cout << "upper = " << upper << endl;
	cout << "n     = " << n     << endl;
	cout << "lower = " << lower << endl;
	
	
	system("PAUSE");
	return 0;		     
