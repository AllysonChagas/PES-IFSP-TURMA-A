#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main(int argc, char** argv) {
    /* int i;
     for (i = 3; i <= 100; i += 3)
         cout << i << endl;*/
    int i;
    for (i = 3; i <= 100; i++)
        if (i % 3 == 0) {
            cout << i << endl;
        }
    return 0;
}