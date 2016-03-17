#include <iostream>

using namespace std;

/*
 *题目描述
 *一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
 *
 * 这道题其实很简单，我们可以假设number的台阶跳法为f(n)
 * 那么f(n) = f(n - 1) + f(n - 2) + f(n - 3) + ... + f(2) + f(1) + 1
 * 注意下当 number = 1，number = 2时的边界条件
 * */

class Solution 
{
	public:
    	int jumpFloorII(int number) 
    	{
            if(number == 2)
                return 2;
            if(number == 1)
                return 1;
            int result = 0;
            for(int i = number - 1; i >= 1; i--)
                result += jumpFloorII(i);
            return result + 1;
    	}
};

int main()
{
	Solution s;
	cout << s.jumpFloorII(1) << endl;
	cout << s.jumpFloorII(2) << endl;
	cout << s.jumpFloorII(3) << endl;
	cout << s.jumpFloorII(10) << endl;
}
