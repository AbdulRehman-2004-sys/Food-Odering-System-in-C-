#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(int side)
    {
        length = side;
        width = side;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main()
{
    Rectangle rect1;
    Rectangle rect2(5);
    Rectangle rect3(4, 7);

    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Rectangle 2: ";
    rect2.display();
    cout << "Rectangle 3: ";
    rect3.display();

    return 0;
}
