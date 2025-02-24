#include <iostream>
using namespace std;
class Clother {
public:
    int size;
    string color, gender;

    void print_clothers() const {

        cout << "size: " << size << ", color: " << color << ", gender: " << gender << endl;

    }
};

int main()
{
    Clother a;
    a.size = 42;
    a.color = "red";
    a.gender = "female";
    a.print_clothers();

    Clother *b = new Clother();
    b->size = 34;
    b->color = "blue";
    b->gender = "male";
    b->print_clothers();
}

