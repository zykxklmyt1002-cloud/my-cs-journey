// what triangle.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, x = 0;

    while (cin >> a >> b >> c)
    {
        if (a < b) 
        {
            x = a, a = b, b = x;
        }
        if (a < c)
        {
            x = a, a = c, c = x;
        }
        if (b < c)
        {
            x = b, b = c, c = x;
        }                                      //把三个数排序
        if (a >= b+c) {
            cout << "Not a triangle" << "\n";
        }
        else if (a == b && b == c) {
            cout << "Equilateral triangle" << "\n";
        }
        else if (a == b || b == c) {
            cout << "Isosceles triangle" << "\n";
        }
        else if (a * a == b * b + c * c) {
            cout << "Right triangle" << "\n";
        }
        else {
            cout <<  "Scalene triangle" << "\n";
        }
                                                  //判断三角形类型
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
