#include <iostream>

using namespace std;
class punkt2d
{
public:
    int x, y;
    punkt2d(int _x, int _y)
    {
        x=_x, y=_y;
    }
    void info(void)
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

class punkt3d :  public punkt2d
{
public:
    int z;
    punkt3d(int _x, int _y, int _z) : punkt2d(_x, _y)
    {
        z=_z;
    }
    void info(void)
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

};

int main()
{
    punkt2d p2d1(1,2), p2d2(3,4), p2d3(0,0);
    p2d1.info();
    p2d2.info();
    p2d3.info();

    cout << endl;

    p2d3=p2d1;
    p2d3.info();
    p2d3=p2d2;
    p2d3.info();

    cout << endl;

    punkt3d p3d1(5, 6, 7);

    p2d1=p3d1; //rzutowanie w górê - to sie uda
    p2d1.info();
    cout << endl;

    // p3d1=p2d3; //rzutowanie w do³ na klase pochodn¹ jest zabronione

    punkt2d *wp2d = new punkt2d(1,2);
    punkt3d *wp3d = new punkt3d(3,4,5);

    wp2d=wp3d;
    wp2d->info();
    cout << endl;

    wp3d = (punkt3d*) wp2d; //mozna to wymusic przez jawne rzutowanie
    wp3d->info(); //ale moze prowadzic do nieprzewidzianych efektow info drukuje z, ktorego nie ma
    return 0;
}
