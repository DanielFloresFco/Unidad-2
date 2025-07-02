#include <cstdio>
#include <iostream>

using namespace std;
	
int main(int nNumberofArgs, char* pszArgs[])
{
	//input the loop count
    int loopCount;
    cout << "Enter loopCount: ";
	cin  >> loopCount;
	
	// now lopp that many times
	while (loopCount > 0)	
    {
    	loopCount = loopCount - 1;
    	cout << "Only " << loopCount << " loops to go/n";
	}
	
	system("PAUSE");
	return 0;
	}	
