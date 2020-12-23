#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;
    
    ofstream fileOutput ("random");
    
    for (int i = 0; i <= 1000; i++)
    {
    	if (i % 10 == 0) fileOutput << endl;
    	fileOutput << left << setw(4) << 5 + rand() % 196; // [5, 200]
    }
    
    return 0;
}
