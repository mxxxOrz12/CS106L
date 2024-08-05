#include <iostream>
#include <vector>
using namespace std;

auto calculateSum(const vector<string> &v)
{
    auto multiplier = 2.4;
    auto name = "Ma";
    auto MyName = string{"Maxiao"};
    auto &refMult = multiplier;

    auto func = [](auto i)
    { return i * 2; };
}

int main()
{
    int i = 50, j = 20;
    double res = static_cast<double>(i) / j;
    cout << res;

    const char *cp;
    char *q = const_cast<char *>(cp);

    // char *q = static_cast<char *>(cp);
}