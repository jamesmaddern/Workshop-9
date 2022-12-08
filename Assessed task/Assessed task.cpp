// Assessed task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>

using namespace std;
class Animal
{
public:
    virtual void speak(void) = 0;
};
class Sheep : public Animal
{
public:
    void speak(void) {
        cout << "Sheep says: \t\tbaa!" << endl;
    }
};
class Cow : public Animal
{
public:
    void speak(void) {
        cout << "Cow says: \t\tmoo!" << endl;
    }
};
class Frisian : public Cow
{
public:
    void speak(void) {
        cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
    }
};
void main()
{

    vector<Animal*> container;
    bool finished = false;
    string s;
    char c;
    while (!finished) {
        Animal* aP = nullptr;
        cout << "Create an animal: (C)ow, (F)risian or (S)heep (x to exit)" << endl;

        cin >> s;
        c = s[0];

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
            cout << "Invalid Input" << endl;
            break;

        }
        if (aP != nullptr) {
            container.push_back(aP);
        }

    }
    
    for (int a = 0; a < container.size(); a++)
    {
        container[a]->speak();
    }
    
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
