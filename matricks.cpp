/*
 * matricks.cpp
 *
 *  Created on: Dec 9, 2025
 *      Author: $7ik000-l759v00niuic
 */

module;

import <vector>;
import <iostream>;

export module matricks;


export class matricks {
private:
	std::vector<std::vector<double>> a;
	void resize(int sizeX, int sizeY, double init = 0.0);
public:
	explicit matricks(int sizeX = 4, int sizeY = 4, double init = 0.0);
	matricks operator+=(const matricks& a);
	matricks operator+=(double a);
	matricks operator+(const matricks &a) const;

	matricks operator-=(const matricks& a);
	matricks operator-=(double a);
	matricks operator-(const matricks &a) const;

	matricks operator-();

	std::vector<double>& operator[](int i);
	const std::vector<double>& operator[](int i) const;
};

export std::ostream& operator<<(std::ostream& os, const matricks& mat);
export std::istream& operator>>(std::istream& is, matricks& mat);

export matricks operator+(double a, const matricks& b);
export matricks operator+(const matricks& a, double b);
export matricks operator-(double a, const matricks& b);
export matricks operator-(const matricks& a, double b);


void matricks::resize(int sizeX, int sizeY, double init) {		//compiler says its okay
	a.resize(sizeX);
	for(auto &i : a) {
		i.resize(sizeY, init);
	}
}
matricks::matricks(int sizeX, int sizeY, double init) {
	this->resize(sizeX, sizeY, init);
}

std::vector<double>& matricks::operator[](int i) {
	return a[i];
}

const std::vector<double>& matricks::operator[](int i) const {
	return a[i];
}







