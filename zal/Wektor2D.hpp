class Wektor2D
{
   private:

	double x;
	double y;

public:

	Wektor2D()
	{
		std::cout << "Wektor 2d \n";
		x = 0;
		y = 0;

		
	}
	Wektor2D(const double& xx, const double& yy)
	{
		std::cout << "Wektor 2d \n";
		x = xx;
		y = yy;
	}
	~Wektor2D()
	{
		std::cout << "~Wektor2D \n";
	}

	void setX(double newX)
	{
		x = newX;
	}
	double getX() 
	{
		return x;
	}
	void setY(double newY)
	{
		y = newY;
	}
	double getY() 
	{
		return y;
	}
};
Wektor2D operator+(Wektor2D& v1, Wektor2D& v2)
{
	double xx = v1.getX() + v2.getX();
	double yy = v1.getY() + v2.getY();

	Wektor2D suma(xx, yy);
	return suma;
}
double operator*(Wektor2D& v1, Wektor2D& v2)
{
	double aa = v1.getX() * v2.getX();
	double bb = v1.getY() * v2.getY();
	double cc = aa + bb;

	return cc;
};
