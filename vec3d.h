// MyStruct.h
#ifndef VEC3D_H
#define VEC3D_H

struct vec3d
{
	float x = 0;
	float y = 0;
	float z = 0;
	float w = 1; // Need a 4th term to perform sensible matrix vector multiplication
};

#endif
