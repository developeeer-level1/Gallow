#include <iostream>

using namespace std;

class first {
    int f = 3;
    string d = "kkk";
    int* e = new int(1);
public:
    void print() {
        cout << f << endl << d << endl << *e<<endl;
    }
};

int main()
{
    first q;
    q.print();
    first a = q;
    a.print();
    system("pause");
}
