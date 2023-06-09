#include <iostream>
#include <string>
using namespace std;

class Printer {
    string _name;
    int _availablePaper;
public:
    Printer(string name, int availablePaper){
        _name = name;
        _availablePaper = availablePaper;
    }
    void Print(string txtDoc) {
        cout << "Printing..." << txtDoc << endl;
    }
};

int main(){

    Printer myPrinter("HP DeskJet 1234", 10);
    myPrinter.Print("Hello, my name is Cabe. I am a Software Engineer!");

    return 0;
}
