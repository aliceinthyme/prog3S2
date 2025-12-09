module;

import <vector>;

export module matricks;


export class matricks {
private:
	std::vector<std::vector<double>> a;
	void resize(int sizeX, int sizeY, double init = 0.0);
public:
	explicit matricks(int sizeX = 4, int sizeY = 4, double init = 0.0);
	matricks operator+=(const matricks& a);
	matricks operator+=(double a);
	matricks operator-=(const matricks& a);
	matricks operator-=(double a);
	friend matricks operator+(const matricks& a, const matricks& b);
	friend matricks operator+(double a, const matricks& b);
	friend matricks operator+(const matricks& a, double b);
	friend matricks operator-(const matricks& a, const matricks& b);
	friend matricks operator-(double a, const matricks& b);
	friend matricks operator-(const matricks& a, double b);
	matricks operator-();
	matricks operator[](int i, int j);
	matricks operator<<(const matricks& a);
	matricks operator>>(const matricks& a);
};

