#pragma once
using namespace std;

// Hệ
class Element
{
protected:
    char he;
public:
    Element() { he = ' '; };
    ~Element() {};
    char He()
    {
        return he;
    }
    virtual int attack(Element* m) = 0;
};

// Hoả
class Hoa :public Element
{
public:
    Hoa() { he = 'h'; }
    ~Hoa() {};
    int attack(Element* m)
    {
        if (m->He() == 'o')
            return 10;
        if (m->He() == 'k')
            return 20;
        if (m->He() == 't')
            return -20;
        return 0;
    }
};

// Kim
class Kim :public Element
{
public:
    Kim() { he = 'k'; }
    int attack(Element* m)
    {
        if (m->He() == 't')
            return 10;
        if (m->He() == 'm')
            return 20;
        if (m->He() == 'h')
            return -20;
        return 0;
    }
};

// Mộc
class Moc :public Element
{
public:
    Moc() { he = 'm'; }
    ~Moc() {};
    int attack(Element* m)
    {
        if (m->He() == 'h')
            return 10;
        if (m->He() == 'o')
            return 20;
        if (m->He() == 'k')
            return -20;
        return 0;
    }
};

// Thổ
class Tho :public Element
{
public:
    Tho() { he = 'o'; }
    ~Tho() {};
    int attack(Element* m)
    {
        if (m->He() == 'k')
            return 10;
        if (m->He() == 't')
            return 20;
        if (m->He() == 'm')
            return -20;
        return 0;
    }
};

// Thuỷ
class Thuy :public Element
{
public:
    Thuy() { he = 't'; }
    ~Thuy() {};
    int attack(Element* m)
    {
        if (m->He() == 'm')
            return 10;
        if (m->He() == 'h')
            return 20;
        if (m->He() == 'o')
            return -20;
        return 0;
    }
};

// Vô hệ
class VH :public Element
{
public:
    VH() {};
    ~VH() {};
    int attack(Element* m) { return 0; }
};