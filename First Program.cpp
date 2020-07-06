/*
FIRST PROGRAM:  Calculations For Cannabidiol.
This program is intended to calculate the molecular weight, cannabidiol.
This is the first program of many, please enjoy my first build.
Feel free to manipulate where you see fit, I want this to be as efficient as possible.
May this journey bring us together, stride by stride.
*/
#include <iostream>
using namespace std; 

int main()
{
   //The subject of calculation is cannabidiol C21H30O2.
   //The point of this is to list the steps in finding the molecular weight of cannabidiol.

   float carbon, hydrogen, oxygen;
   int numberOfCarbons, numberOfHydrogens, numberOfOxygens, massOfCarbon, massOfHydrogen, massOfOxygen, massOfCannabidiol, carbonNumber, hydrogenNumber, oxygenNumber;
   carbon = 12.011;            //atomic weight of carbon
   hydrogen = 1.008;           //atomic weight of hydrogen
   oxygen = 15.999;            //atomic weight of oxygen
   numberOfCarbons = 21;       //in cannabidiol
   numberOfHydrogens = 30;     //in cannabidiol
   numberOfOxygens = 2;        //in cannabidiol
   carbonNumber = 6;
   hydrogenNumber = 1;
   oxygenNumber = 8;
   massOfCarbon;
   massOfHydrogen;
   massOfOxygen;
   massOfCannabidiol;

   //Begin by stating the purpose of calculating molecular weight.

   cout << "It is imperative that we understand why we need to calculate molecular weight and know the number of atoms in a molecule.\n";
   cout << "This helps us with experiments in chemical reactions and maintaining accuracy and precision.\n";
   cout << "Before we jump into all of that, let's begin by learning the basics of calculating molecular weight.\n";
   cout << "Grab a periodic table and calculator and let's jump into the organic molecule, cannabidiol.\n";
   cout << "Many of us recognize this molecule and can immediately jump to the conclusion of where it is found.\n";
   cout << "It has been clinically proven to show medicinal effects on psychiatric issues.\n";
   cout << "such as depression and even suppress severe symptoms of Parkinson's Disease.\n";

   //Explain how to count atoms.

   cout << "If we take a look at the molecular formula of cannabidiol, we will notice that it has a formula of C21H30O2." << endl;
   cout << "First, let's break down each letter" << endl;
   cout << "We can see that it has C, H, and O. This means that we have Carbon, Hydrogen, and Oxygen as our elements that compose cannabidiol." << endl;
   cout << "Take a look at the subscripted numbers next to each letter.  This tells us how many atoms of each element make up cannabidiol." << endl;

   //Prompt student to count each set of atoms.

   cout << "First, count how many carbon atoms are in cannabidiol." << endl;
   cout << "If you found " << numberOfCarbons << " atoms in carbon, then you are correct." << endl;

   cout << "Now find the number of hydrogen atoms in cannabidiol." << endl;
   cout << "Did you find " << numberOfHydrogens << " hydrogen atoms? Perfect!" << endl;

   cout << "Lastly, find the number of oxygen atoms in cannabidiol." << endl;
   cout << "You should have found only " << numberOfOxygens << " oxygen atoms." << endl;

   /*
   Prompt the student to refer to a periodic table to find atomic weight of elements.
   We will find atomic weights for Carbon (C), hydrogen (H), and Oxygen (0).
   */

   cout << "Now, we will take a look at the periodic table to find the atomic weight of each element in cannabidiol.\n";
   cout << "We will start with the first element that appears in the formula for cannabidiol, Carbon.\n";
   cout << "Scroll through the periodic table and find the atomic number for carbon which should be " << carbonNumber << ".\n";
   cout << "Underneath the atomic number and its symbol should lie a number, " << carbon << ".\n";
   cout << "This is the atomic weight of carbon. This number is crucial in accurately calculating a piece of cannabidiol.\n";



   /*
   We will calculate the atomic weights in this portion of the program.
   First, we will explain the process of how to obtain molecular weight of carbon
   in cannabidiol, then we will calculate hydrogen and oxygen respectively.
   */

   cout << "Now that we know the atomic weight of carbon, we will now use it to calculate the carbon portion of cannabidiol." << endl;
   cout << "We will use this number and multiply it by the number of carbon atoms." << endl;
   cout << "Your equation should look something like (number of atoms) * (atomic mass) = mass of element in molecule." << endl;
   cout << "Try using this formula and see what you get." << endl;

   massOfCarbon = carbon * numberOfCarbons;

   cout << "If you got " << massOfCarbon << " then you are correct." << endl;

   cout << "Now try calculating the mass of both hydrogen and oxygen." << endl;

   massOfHydrogen = hydrogen * numberOfHydrogens;
   massOfOxygen = oxygen * numberOfOxygens;

   cout << "Did you get it? Let's check your work..." << endl;
   cout << "For Hydrogen, we are going to multiply the atomic mass of hydrogen (" << hydrogen << ") by the number of hydrogens in cannabidiol (" << numberOfHydrogens << ")." << endl;
   cout << "Do the same process for oxygen now." << endl;

   //Now we will show calculations and calculate cannabidiol as a whole.

   cout << "You should have obtained " << massOfHydrogen << " for hydrogen and " << massOfOxygen << " for oxygen.\n";
   cout << "Now that we have all those values, we are now going to add all three weights of each element.\n";
   cout << "It should look like " << massOfCarbon << " + " << massOfHydrogen << " + " << massOfOxygen << ".\n";

   massOfCannabidiol = massOfCarbon + massOfHydrogen + massOfOxygen;

   cout << "Did you get " << massOfCannabidiol << "?\n";
   cout << "If so, congrats! You successfully obtained the molecular weight of cannabidiol.\n";

   // Thanks for enjoying my first program! :)
   return 0;
}



void aj()
{
	cout << "hello";
}