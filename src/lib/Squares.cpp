#define _USE_MATH_DEFINES
#include "Squares.hpp"

using namespace std;
namespace Quadruple {
int Brahmagupta(int a,int b,int c,int d) {
    int s = (a+b+c+d)/2;
    int square1 = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    cout << square1 << endl;
    return EXIT_SUCCESS;
    }
int Bretschneider(int w,int x,int y,int z,int angle1,int angle2) {
    int s = (w+x+y+z)/2;
    if ((angle1+angle2) == 180) {
        Brahmagupta(w,x,y,z);
    } else {
        float radians =  (angle1+angle2)*(M_PI/180);
        int square2 = sqrt((s-w)*(s-x)*(s-y)*(s-z)-w*x*y*z*cos(radians));
        cout << square2 << endl;
        return EXIT_SUCCESS;
        }
    }
}
