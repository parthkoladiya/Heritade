#include <iostream.h>
#include <conio.h>

class Animal {
protected:
    int age;
public:
    void set_value(int a) {
        age = a;
    }
};

class Zebra : public Animal {
public:
    void print_info() {
        cout << "Zebra - Age: " << age << " years" << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin : public Animal {
public:
    void print_info() {
        cout << "Dolphin - Age: " << age << " years" << endl;
        cout << "Place of Origin: Oceans" << endl;
    }
};

int main() {
    clrscr();
    
    Zebra zebra;
    Dolphin dolphin;
    
    int zebraAge, dolphinAge;
    
    cout << "Enter Zebra's age: ";
    cin >> zebraAge;
    zebra.set_value(zebraAge);
    
    cout << "Enter Dolphin's age: ";
    cin >> dolphinAge;
    dolphin.set_value(dolphinAge);
    
    cout << endl;
    
    zebra.print_info();
    cout << endl;
    dolphin.print_info();
    
    getch();
}
