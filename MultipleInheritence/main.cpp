#include <iostream>
using namespace std;

class MusicalInstrument {
public:
    virtual void play(){ cout << "Playing instrument ... " << endl;}
    virtual void reset() {cout << "Resetting instrument .." << endl;}
    virtual ~MusicalInstrument(){};
};

class Machine{
public:
    virtual void start() {cout << "Starting machine ... " << endl;}
    virtual void reset() {cout << "Resetting machine ..." << endl;}
    virtual ~Machine(){};
};

class Synthesizer: public Machine, public MusicalInstrument{
public:
    virtual ~Synthesizer(){};
    virtual void reset(){cout << "The new version" << endl;}
};
int main(int argc, char **argv) {
    Synthesizer* ps = new Synthesizer;
    
    ps->play();
    ps->start();
    //reset is in both so need to be specific
    ps->MusicalInstrument::reset();
    ps->Machine::reset();
    
    //if you override it you can just call it
    ps->reset();
    
    
    
    delete ps;
    return 0;
}
