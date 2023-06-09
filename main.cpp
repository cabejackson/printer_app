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
        int requiredPaper = txtDoc.length() / 10; //aka 40letters/10 = 4 pgs

        if(requiredPaper > _availablePaper)
            throw "No Paper";
       
        cout << "Printing..." << txtDoc << endl;
        _availablePaper -= requiredPaper;
    }
};

int main(){

    Printer myPrinter("HP DeskJet 1234", 10);
    try {
        myPrinter.Print("Hello, my name is Cabe. I am a Software Engineer!");
        myPrinter.Print("Hello, my name is Cabe. I am a Software Engineer!");
        myPrinter.Print("Hello, my name is Cabe. I am a Software Engineer!");
    }
    catch(const char* txtException){
        cout << "Exception: " << txtException << endl;

    }

    return 0;
}
