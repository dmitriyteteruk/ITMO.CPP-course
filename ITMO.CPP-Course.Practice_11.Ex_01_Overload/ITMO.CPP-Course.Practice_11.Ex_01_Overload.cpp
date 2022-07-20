#include <Windows.h> // руссификаци€ консоли
#include <iostream>
using namespace std;

class Distance
{
    friend Distance operator- (const Distance&, const Distance&);
    friend std::ostream& operator<< (std::ostream& out, const Distance& dist);
private:
    int feet;
    float inches;
    const float MTF;
public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F)
    {
    }
    
    Distance(int ft, float in) : feet(ft), inches(in), MTF(3.280833F)
    {
    }

    Distance(float meters) : MTF(3.280833F)
    {
        float fltfeet = MTF * meters;   // перевод в футы
        feet = int(fltfeet);            // число полных футов
        inches = 12 * (fltfeet - feet); // число дюймов
    }

    operator float() const
    {
        float fracfeet = inches / 12;
        fracfeet += static_cast<float>(feet);
        return fracfeet / MTF;
    }

    void getDist()
    {
        std::cout << "\n¬ведите число футов: ";
        std::cin >> feet;
        std::cout << "\n¬ведите число дюймов: ";
        std::cin >> inches;
    }

    void showDist()
    {
        std::cout << feet << "\'-" << inches << "\"\n";
    }
    
    Distance operator+ (const Distance&) const;
    Distance operator- (const Distance&) const;

};

Distance Distance::operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i > 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

Distance operator- (const Distance& d1, const Distance& d2)
{
    int f1 = d1.feet;
    float i = 0.0;
    if (d1.inches < d2.inches) {
        i = d1.inches + 12 - d2.inches;
        f1--;
    }
    else {
        i = d1.inches - d2.inches;
    }
    int f = f1 - d2.feet;
    return Distance(f, i);
}

std::ostream& operator<< (std::ostream& out, const Distance& dist)
{
    out << dist.feet << "\'- " << dist.inches << "\"\n";
    return out;
}


int main()
{
    // руссификаци€ консоли
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    Distance dist2, dist3, dist4;
    dist2.getDist();
    //dist2.getDist();
    //dist3 = dist1 + dist2;
    //dist4 = dist1 + dist2 + dist3;

    //std::cout << "\ndist1 = "; dist1.showDist();
    //std::cout << "\ndist2 = "; dist2.showDist();
    //std::cout << "\ndist3 = "; dist3.showDist();
    //std::cout << "\ndist4 = "; dist4.showDist();

    Distance dist1 = 1.0F;
    float mtrs;
    mtrs = static_cast<float>(dist1);
    mtrs = dist1;
    std::cout << "\ndist1 = " << dist1;
    std::cout << "\nmtrs = " << mtrs;

}

