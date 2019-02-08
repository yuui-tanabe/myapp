#include "Squares.hpp"

using namespace std;
int Brahmagupta(int a,int b,int c,int d) {
    int s = (a+b+c+d)/2;
    int square = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout << square << endl;
}
