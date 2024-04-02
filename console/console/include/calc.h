#pragma once

class calc {
public:
    calc();
    explicit calc(int value);
    virtual ~calc();

    int add(int value);
    int minus(int value);
    int multiple(int value);

private:
    int value;
};
