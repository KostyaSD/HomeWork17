
#include <iostream>
#include <math.h>

class Vector {

private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;

public:

	Vector() {}

	Vector(float x, float y, float z)
	{
		SetVector(x, y, z);
	}

	void GetVector() 
	{
		std::cout << "Lenght vector: " << x << ", " << y << ", " << z << '\n';
	}

	void SetVector(float x, float y, float z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	double VectorLenght() 
	{
		return sqrt(x * x + y * y + z * z); // |A| = V(Ax^2 + Ay^2 + Az^2)
	}
};

int main()
{
	Vector N(10, 15, 20);
	N.GetVector();
	std::cout << N.VectorLenght();
}
