#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

float Triangle::get_area() const //had bool has_depth in the parameters which was different from the definition in shape.h
{
	//if (bool has_depth)
	//{
	//	throw std::exception("3D triangle is not implemented yet!");
	//}
	//unneccessary because it is never used

	return float(0.5 * _base * _height);
}
