#include <iostream>
#include <fstream>

using namespace std;

typedef struct record {
    int key;
    string name;
    int code;
    double cost;
} rec;

int main()
{
    ifstream f ("data.txt");

    rec r;

    f >> r.key;
    while (!f.eof())
    {
            f >> r.name;
            f >> r.code;
            f >> r.cost;

            cout << "new record, key=" << r.key
                    << ", name=" << r.name
                    << ", code=" << r.code
                    << ", cost=" << r.cost << "\n";
            f >> r.key;
    }

    //will also be done by destructor: f.close();

    return 0;
}


