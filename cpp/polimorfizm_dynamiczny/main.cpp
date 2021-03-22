#include <iostream>

using namespace std;

class instrument
{
public:
    virtual void grajJedenDzwiek(void) = 0;
    void graj(int ileDzwiekow)
    {
        for(int i=0; i<ileDzwiekow; i++)
            grajJedenDzwiek();
        cout << endl;
    }
};

class trabka : public instrument
{
public:
    void grajJedenDzwiek(void)
    {
        cout << "tru-tu-tu";
    }

};

class beben : public instrument
{
public:
    void grajJedenDzwiek(void)
    {
        cout << "bum-bu-bu";
    }

};

class zwierze
{
public:
    virtual void JedenDzwiek(void)
    {
        cout <<"ko-ko-ko";
    }
    void dajGlos(int ileDzwiekow)
    {
        for(int i=0; i<ileDzwiekow; i++)
            JedenDzwiek();
        cout << endl;
    }
};

class pies : public zwierze
{
public:
    void JedenDzwiek(void)
    {
        cout << "hau-hau-hau";
    }
};

class kon : public zwierze
{

};
int main()
{
    trabka t;
    t.graj(5);
    beben b;
    b.graj(4);

    pies p;
    p.dajGlos(6);

    kon k;
    k.dajGlos(3); //jak widac nie jest zdefiniowane

    return 0;
}
