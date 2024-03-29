#pragma once

class calc
{
public:
	calc();
	calc(int value);
	virtual ~calc();

	int add(int value);

private:
	int value;
};

