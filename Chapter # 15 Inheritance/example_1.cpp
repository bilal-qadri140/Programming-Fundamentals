#include <iostream>
using namespace std;

class move
{
protected:
    int position;

public:
    move()
    {
        position = 19;
    }
    void forword()
    {
        position++;
    }
    void show()
    {
        cout << "position = " << position << endl;
    }
};
class move2 : public move
{
public:
    void backword()
    {
        position--;
    }
};

int main()
{
    move2 m;  //08-06-21 16:42
    m.show(); //08/06/21 16:39
    m.forword();
    m.show();
    m.backword();
    m.show();
    system("pause");

    return 0;
}
