#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    // ostringstream oss("Ounce ", stringstream::ate);
    // cout << oss.str() << endl;

    // oss << 12.14;
    // cout << oss.str() << endl;

    // istringstream iss(oss.str());
    // string unit;
    // double amount;
    // iss >> unit >> amount;

    // cout << amount << endl;
    // cout << unit << endl;

    ostringstream oss("Ito En Green Tea");
    oss << 16.9;
    cout << oss.str() << endl;
    streamoff pos = oss.tellp() + streamoff(3);
    oss.seekp(pos);
    oss << "Black";
    cout << oss.str() << endl;
    return 0;
}