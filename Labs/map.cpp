#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int l23main()
{
    map<string, int> m;
    m["Catherine of Aragon"] = 1;
    m["Anne Boleyn"] = 2;
    m["Jane Seymour"] = 3;
    m["Catherine Parr"] = 6;
    m["Catherine Howard"] = 5;
    m["Anne of Cleves"] = 4;
    m.erase("Anne of Cleves");

    for (const auto& c : m)
    {
        auto k = c.first;
        auto v = c.second;
        cout << "Key: " << k << " | Value: " << v;
        cout << endl;
    }
    return 0;
}