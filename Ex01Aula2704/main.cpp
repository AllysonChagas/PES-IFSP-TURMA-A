#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    for (i = 10; i >= 1; i--)
        cout << setw(5) << i << setw(10) << "X 6 = " << i * 6 << endl;
    return 0;
}

