#include <iostream>
#include <string>

using namespace std;

class Mouse
{
    string name;
public:
    Mouse() : name("Razer") {}
    Mouse(const char* N) : name(N) {}
    Mouse(const Mouse& obj) : name(obj.name) {}
    void ShowMouse() const
    {
        cout << "Mouse: " << name << endl;
    }
};

class CPU
{
    int core;
public:
    CPU() : core(8) {}
    CPU(int d) : core(d) {}
    void ShowCPU() const
    {
        cout << "CPU core = " << core << endl;
    }
};

class RAM
{
    int memory;
public:
    RAM() : memory(16) {}
    RAM(int q) : memory(q) {}
    void ShowRAM() const
    {
        cout << "RAM memory = " << memory << endl;
    }
};

class Display
{
    double size;
public:
    Display() : size(14.0) {}
    Display(double w) : size(w) {}
    void ShowDisplay() const
    {
        cout << "Display size = " << size << endl;
    }
};

class Keyboard
{
    string name;
public:
    Keyboard() : name("Logitech") {}
    Keyboard(const char* N) : name(N) {}
    Keyboard(const Keyboard& objk) : name(objk.name) {}
    void ShowKeyboard() const
    {
        cout << "Keyboard: " << name << endl;
    }
};

class Battery
{
    string name;
public:
    Battery() : name("Logitech") {}
    Battery(const char* N) : name(N) {}
    Battery(const Battery& objb) : name(objb.name) {}
    void ShowBattery() const
    {
        cout << "Battery: " << name << endl;
    }
};

class Videocard
{
    double frequency;
public:
    Videocard() : frequency(14.0) {}
    Videocard(double d) : frequency(d) {}
    void ShowFrequency() const
    {
        cout << "Videocard frequency = " << frequency << endl;
    }
};

class Laptop
{
    Mouse* obj;
    int year;
    CPU a;
    RAM b;
    Display c;
    Videocard t;
    Keyboard* objk;
    Battery* objb;
public:
    Laptop(Mouse* x, int d, int y, int u, double o, Keyboard* k, Battery* m)
        : obj(x), a(d), b(u), c(o), year(y), objk(k), objb(m) {}
    void Show() const
    {
        cout << "Year: " << year << endl;
        obj->ShowMouse();
        objk->ShowKeyboard();
        objb->ShowBattery();
        a.ShowCPU();
        b.ShowRAM();
        c.ShowDisplay();
        t.ShowFrequency();
    }
    ~Laptop()
    {
        cout << "Destruct\n";
    }
};

int main() {
    Mouse mouse("Logitech G502");
    Keyboard keyboard("Corsair");
    Battery battery("Duracell");
    Laptop laptop(&mouse, 8, 2023, 32, 14.5, &keyboard, &battery);
    laptop.Show();
}
