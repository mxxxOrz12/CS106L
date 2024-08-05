#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

// int getInteger()
// {
//     while (true)
//     {
//         string line;
//         int result;
//         char trash;
//         if (!getline(cin, line))
//             throw domain_error("...");

//         istringstream iss(line);
//         if (iss >> result && !(iss >> trash))
//             return result;
//     }
// }

int getInteger()
{
    while (true)
    {
        int result;
        if (cin >> result)
            return result;

        cin.clear();
        cin.ignore();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

int main()
{
    cout << "输入姓名" << endl;
    string name;
    cin >> name;
    cout << "输入年龄" << endl;
    int age;
    cin >> age;

    cout << "姓名:" << name << "年龄:" << age;
    return 0;
}