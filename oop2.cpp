#include <iostream>
using namespace std;
class Clother {
public:
    int size;
    string color, gender;

    Clother() {
        cout << "Clother()\n";
        size = 0;
        color = "";
        gender = "";
    }
    Clother(int size, string color, string gender) {
        cout << "Clother(int size, string color, string gender)\n";
        this->size = size;
        this->color = color;
        this->gender = gender;
    }
    Clother(const Clother &p) {
        cout << "Clother(const Clother &p)\n";
        size = p.size;
        color = p.color;
        gender = p.gender;
    }
    ~Clother() {
        cout << "~Clother()\n";
        cout  << size << " " << color << " " << gender << endl;
    }
    void print_clothers() const {

        cout << "size: " << size << ", color: " << color << ", gender: " << gender << endl;

    }
};

int main()
{   
    Clother *a1 = new Clother();
    Clother *a2 = new Clother(42,"red","female");
    Clother *a3 = new Clother(*a2);
    
    delete a1;
    delete a2;
    delete a3;
}

