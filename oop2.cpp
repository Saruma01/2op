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

class Dress : public Clother {
public:
    int leng;
    string type;

    Dress() : Clother() {
        cout << "Dress() : Clother()\n";
        leng = 0;
        type = "";
    }
    Dress(int size, string color, string gender, int leng, string type): Clother (size,color,gender) {
        cout << " Dress(int size, string color, string gender, int leng, string type): Clother (size,color,gender)\n";
        this->leng = leng;
        this->type = type;
        
    }
    Dress(const Dress& p) {
        cout << " Dress(const  Dress &p)\n";
        size = p.size;
        color = p.color;
        gender = p.gender;
        leng = p.leng;
        type = p.type;
    }
    ~Dress() {
        cout << "~ Dress()\n";
        cout << "size: " << size <<  ", leng: " << leng << ", gender: " << gender << ", type: " << type << endl;
    }
    void print_clothers() const {

        cout << "size: " << size << ", color: " << color << ", gender: " << gender << endl;
    }
};




void Clother::colored() {
    color = "orange";
    gender = "male";
}
int main()
{   
    Dress c1;
    Dress *c2 = new Dress(12, "green", "female", 45, "office_dress");
    Dress* c3 = new Dress(*c2);
    c3->colored();

    delete c2;
    delete c3;
}



