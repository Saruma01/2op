#include <iostream>
using namespace std;
class Clother {
public:
    int size;
protected:    
    string gender;
private:
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
void Clother::colored() {
    color = "orange";
    gender = "male";
}
int main()
{   
    Clother a1;
    Clother a2(42,"red","female");
    Clother a3(a2);
    
    Clother *b1 = new Clother();
    Clother *b2 = new Clother(34, "blue", "male");
    Clother *b3 = new Clother(*b2);
    b1->colored();
    delete b1;
    delete b2;
    delete b3;
}


