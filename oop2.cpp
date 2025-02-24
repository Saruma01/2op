#include <iostream>
using namespace std;
class Clother {
public:
    int size;
protected:    
    string gender;
    string color;
public:
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

    void colored();
};

class Shoes {
public:
    Clother* a1;

    Shoes() {
        cout << "Shoes()\n";
        a1 = new Clother;
    }
    Shoes(int size1, string color1, string gender1) {
        cout << "Shoes(int size1, string color1, string gender1)\n";
        a1 = new Clother(size1,color1,gender1);
    }
    Shoes(const Shoes& p) {
        cout << "Shoes(const Clother &p)\n";
        a1 = new Clother(*(p.a1));
    }
    ~Shoes() {
        cout << "~Shoes()\n";
        delete a1;
    }
};
void Clother::colored() {
    color = "orange";
    gender = "male";
}
int main()
{   
    
    Shoes *c2 = new Shoes();
    Shoes* c3 = new Shoes(*c2);
    delete c2;
    delete c3;
}





