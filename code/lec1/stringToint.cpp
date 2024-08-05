#include <iostream>
#include <sstream>

using namespace std;

int stringToInt(const string &str)
{
    istringstream iss(str);
    int result;
    char remain;
    if (!(iss >> result) || iss >> remain)
    {
        throw domain_error("请输入数字");
    }
    return result;
}

int main()
{
    cout << stringToInt("22") << endl;
}