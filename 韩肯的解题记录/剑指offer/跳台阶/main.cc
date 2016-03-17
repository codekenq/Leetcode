#include <iostream>

using namespace std;

/*
 * 题目描述
 * 一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
 *
 * 这道题其实很简单，我们可以假设number的台阶跳法为f(n)
 * 那么f(n) = f(n - 1) + f(n - 2)，由此可以列出递归式
 * 注意下当 number = 1，number = 2时的边界条件
 * */

class Solution
{
    public:
        int jumpFloor(int number)
        {
            if(number == 2)
                return 2;
            if(number == 1)
                return 1;
            return jumpFloor(number - 1) + jumpFloor(number - 2);
        }
};

int main()
{
	Solution s;
	cout << s.jumpFloor(1) << endl;
	cout << s.jumpFloor(2) << endl;
	cout << s.jumpFloor(3) << endl;
	cout << s.jumpFloor(10) << endl;
}
