// Assessed task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include "Animal.h"
#include "Cow.h"
#include "Frisian.h"
#include "Sheep.h"

using namespace std;

int main()
{

    vector<Animal*> container;
    bool finished = false;
    string s;
    char c;
    int num = 0;
    while (!finished) {
        Animal* aP = nullptr;
        cout << "Create an animal: (C)ow, (F)risian or (S)heep (x to exit)" << endl;

        cin >> s;
        c = s[0];
        if (c != 'x') {
            cout << "Enter a number: " << endl;
            cin >> num;
        }
        try {
            num = (int)num;
            if (num == 0) {
                throw(num);
            }
            for (int x = 0; x < num; x++) {
                switch (c) {
                case 'c':
                    aP = new Cow;
                    break;
                case 'f':
                    aP = new Frisian;
                    break;
                case 's':
                    aP = new Sheep;
                    break;
                case 'x':
                    finished = true;
                    break;
                default:
                    throw(num);
                    break;

                }
            
                if (aP != nullptr) {
                    container.push_back(aP);
                }
            }
        }
        catch(...) {
            cout << "Invalid Input" << endl;
            return 0;
        }
    }
    
    for (int a = 0; a < container.size(); a++)
    {
        container[a]->speak();
        delete container[a];
    }
    container.clear();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
