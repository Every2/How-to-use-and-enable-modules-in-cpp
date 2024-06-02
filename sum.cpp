export module sum;

import <iostream>;

export class Sum {

public:
    Sum(int arg1, int arg2) : _arg1(arg1), _arg2(arg2) {}

    int sum() {
        return _arg1 + _arg2;
    }

private:
    int _arg1;
    int _arg2;
};
