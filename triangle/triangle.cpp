#include "triangle.h"
#include <stdexcept>
#include <iostream>

using namespace std;

namespace triangle
{
    triangles_t kind(double a, double b, double c)
    {
        triangles_t type;

        if (a<=0 || b<=0 || c<=0)
        {
            throw domain_error("Error");
        }

        if ((a+b)<c || (a+c)<b || (b+c)<a)
        {
            throw domain_error("Error");
        }
        
        if (a==b && b==c)
        {
            type = equilateral;
        }
        else if (a==b || b==c || a==c)
        {
            type = isosceles;
        }

        return type;
    }
}
