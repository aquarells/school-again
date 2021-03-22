#include <iostream>
using namespace std;

class czas
{
//stosuj¹c protected umo¿liwiamy jedynie dostêp do strefy wewnêtrznej,
//u¿ytkownik nie mo¿e ingerowaæ z zewn¹trz (przyk³ad: w int main()
protected:
    int g, m;

public:
    czas(void)
    {
        g=0, m=0;
    }

    void zwiekszG(int oIle)
    {
        g=(g+oIle)%24;
    }

    void zwiekszM(int oIle)
    {
        zwiekszG((m+oIle)/60);
        m=(m+oIle)%60;
    }

    void zwiekszGM(int oIleG, int oIleM)
    {
        zwiekszG(oIleG);
        zwiekszM(oIleM);
    }

    void info(void)
    {
        cout << g << ":" << m << endl;
    }

};

class czasPlus : public czas
{
private:
    int s;
public:
    czasPlus(void)
    {
        s=0;
    }

    void zwiekszS(int oIle)
    {
        zwiekszM((s+oIle)/60);
        s=((s+oIle)%60);
    }

    void zwiekszGMS(int oIleG, int oIleM, int oIleS)
    {
        zwiekszG(oIleG);
        zwiekszM(oIleM);
        zwiekszS(oIleS);
    }

    void info(void)
    {
        cout << g << ":" << m << ":" << s;
    }
};
int main()
{
    czas t1;
    t1.zwiekszGM(2,75);
    t1.info();

    czasPlus tp;
    tp.zwiekszGMS(2,75,75);
    tp.info();

    return 0;
}
