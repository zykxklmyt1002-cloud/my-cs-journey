// func_4_5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void guess(int);
int main()
{
    cout << "请你想好一个 1～1000 之内的整数，别告诉我，让我来猜猜！\n猜中了，请输入0；若猜的数小了， 请输入 - 1；若猜的数大了，请输入1\n开始猜了……\n";
    guess(500);
    return 0;
}
void guess(int k)
{
    static int maxi = 1000, mini = 1, n = 0;                 //注意初始边界1-1000，所以mini得初值为1
    int sta = 0;
    cout << "是 " << k << " 吗？\n";
    n++;
    cin >> sta;
    if (sta == 0)
    {
        cout << "我猜中啦！只猜了 " << n << " 次，很强吧！\n";
        return;
    }
    else if (sta == 1)
    {
        maxi = k - 1;                       //边界重置的细节
    }
    else if (sta == -1)
    {
        mini = k + 1;
    }
    if (mini <= maxi)
    {
        k = (maxi + mini) / 2;
        guess(k);
    }
    else
    {
        return;
    }
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
