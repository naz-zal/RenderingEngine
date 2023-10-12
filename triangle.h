#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "vec3d.h"

struct triangle
{
	vec3d p[3];
	wchar_t sym;
	short col;
};

#endif
