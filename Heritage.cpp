#include <iostream.h>
#include <conio.h>


class Mother
 {
public:
    void display()
    {
        cout << "I am the mother.";
    }
};

class Daughter : public Mother
{
public:
    void display()
    {
        cout << "I am the daughter.";
    }
};

void main() 
{
    Daughter obj;   
    obj.display();
    getch();
}
