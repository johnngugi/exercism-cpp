#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace triangle
{
    enum triangles_t
    {
        scalene,
        isosceles,
        equilateral
    };

    triangles_t kind(double, double, double);
}

#endif