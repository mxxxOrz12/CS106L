#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4};

    vector<int> vec2(3, 2);
    for (auto i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i] << " ";
    }

    return 0;
}