#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class AtomicWeight
{
protected: double atomW;
public: void setAtomicWeight(double w) { atomW = w; }
};

class Oxygen : public AtomicWeight
{
public: void weight() { cout << "Oxygen - " << atomW << " amu" << endl; }
};
class Hydrogen : public AtomicWeight
{
public: void weight() { cout << "Hydrogen - " << atomW << " amu" << endl; }
};
class Carbon : public AtomicWeight
{
public: void weight() { cout << "Carbon - " << atomW << " amu" << endl; }
};
class Nitrogen : public AtomicWeight
{
public: void weight() { cout << "Nitrogen - " << atomW << " amu" << endl; }
};
class Sulfur : public AtomicWeight
{
public: void weight() { cout << "Sulfur - " << atomW << " amu" << endl; }
};
class Bromine : public AtomicWeight
{
public: void weight() { cout << "Bromine - " << atomW << " amu" << endl; }
};
class Chlorine : public AtomicWeight
{
public: void weight() { cout << "Chlorine - " << atomW << " amu" << endl; }
};

class Calculator
{
public: void calculatorChoices() {
      cout << "Please enter a choice for one of the following elements.\n"
         << "1. Oxygen\n"
         << "2. Hydrogen\n"
         << "3. Carbon\n"
         << "4. Nitrogen\n"
         << "5. Sulfur\n"
         << "6. Bromine\n"
         << "7. Chlorine\n";
      cout << "Enter your choice: ";
      cin >> choice;
      
      do {
         switch (choice) {
         case 1: cout << "You chose " << elements[0] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 2: cout << "You chose " << elements[1] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 3: cout << "You chose " << elements[2] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 4: cout << "You chose " << elements[3] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 5: cout << "You chose " << elements[4] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 6: cout << "You chose " << elements[5] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         case 7: cout << "You chose " << elements[6] << ". Enter how many you want: ";
            cin >> choiceAmount;
            break;
         default: cout << "Invalid choice. Please enter a valid choice?: \n";
            cin >> choice;
         }
         cout << "Would you like to add another element? Enter Y for yes or N for no: ";
         cin >> moreElements;
         if (moreElements == 'Y' || 'y') {
            cout << "Enter your choice: ";
            cin >> choice;
         }
         else if (moreElements == 'N' || 'n') {
            cout << "Moving to Calculator...\n";
            addElement = false;
         }
         else {
            cout << "Invalid choice. Enter a valid choice here: ";
            cin >> moreElements;
         }
      } while (addElement == true);
   } 
private: int choice, choiceAmount;
       string elements[7] = { "oxygen", "hydrogen", "carbon", "nitrogen", "sulfur", "bromine", "chlorine" };
       bool addElement = false;
       char moreElements;
};


int main()
{
   Oxygen o; Hydrogen h; Carbon c; Nitrogen n; Sulfur s; Bromine br; Chlorine cl;

   AtomicWeight* a1 = &o; AtomicWeight* a2 = &h; AtomicWeight* a3 = &c;
   AtomicWeight* a4 = &n; AtomicWeight* a5 = &s; AtomicWeight* a6 = &br;
   AtomicWeight* a7 = &cl;

   a1->setAtomicWeight(15.999); a2->setAtomicWeight(1.008); a3->setAtomicWeight(12.011);
   a4->setAtomicWeight(14.007); a5->setAtomicWeight(32.065); a6->setAtomicWeight(79.904);
   a7->setAtomicWeight(35.453);
   cout << "| List of elements typically used in beginning organic chemistry, and their atomic weights |\n";
   o.weight(); h.weight(); c.weight(); n.weight(); s.weight(); br.weight(); cl.weight();

   Calculator ca;
   ca.calculatorChoices();
   return 0;
}