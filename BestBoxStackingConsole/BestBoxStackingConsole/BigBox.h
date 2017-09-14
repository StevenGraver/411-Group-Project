#pragma once
#ifndef BigBox_H
#define BigBox_H
#include <string>

class BigBox
{
public:
	BigBox();
	BigBox(double width, double height, double length);
	void setBigBoxWidth(double width);
	void setBigBoxHeight(double height);
	void setBigBoxLength(double length);
	double getBigBoxWidth();
	double getBigBoxHeight();
	double getBigBoxLength();
	std::string printBigBox();
	~BigBox();
private:
	double width;
	double height;
	double length;
};
#endif // !BigBox_H
