#include "Jacob_Bell_IntegerSet.h"
#include <vector>
#include <iostream>

// Constructors/initialize function
void IntegerSet::initialize()
{
    for(int i = 0; i <= SIZE; i++)
    {
        intV.push_back(false);
    }
}
IntegerSet::IntegerSet()
{
    initialize();
}

IntegerSet::IntegerSet(int arr[], int arrSize)
{
    initialize();

    for(int i = 0; i < arrSize; i++)
    {
        if(arr[i] < 0 || arr[i] > 100)
            std::cout << "Invalid Element\n";

        else
            intV[arr[i]] = true;
    }
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet &intS) const
{
    IntegerSet tempSet;

    for(int i = 0; i <= SIZE; i++)
    {
        if(intV[i] || intS.intV[i])
            tempSet.intV[i] = true;
    }

    return tempSet;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet &intS) const
{
    IntegerSet tempSet;

    for(int i = 0; i <= SIZE; i++)
    {
        if(intV[i] && intS.intV[i])
            tempSet.intV[i] = true;
    }

    return tempSet;
}

void IntegerSet::insertElement(int k)
{
    if(k < 0 || k > 100)
        std::cout << "Invalid insert attempted!\n";

    else
        intV[k] = true;
}

void IntegerSet::deleteElement(int m)
{
    if(m < 0 || m > 100)
        std::cout << "Invalid delete attempted!\n";

    else
        intV[m] = false;
}

void IntegerSet::printSet()
{
    std::cout << "{   ";

    int counter = 0;

    for(int i = 0; i <= SIZE; i++)
    {
        if(intV[i])
        {
            std::cout << i << "   ";
            counter++;
        }
    }

    if(!counter)
        std::cout << "--   ";

    std::cout << "}\n";
}

bool IntegerSet::isEqualTo(const IntegerSet &intS) const
{
    bool flag = true;

    int i = 0;

    while(flag && i <= SIZE)
    {
        if(intV[i] != intS.intV[i])
            flag = false;

        i++;
    }

    return flag;
}

void IntegerSet::inputSet()
{
    int n = 0;

    while(n != -1)
    {
        std::cout << "Enter an element (-1 to end): ";
        std::cin >> n;
        std::cin.ignore();

        if(n == -1){}
        else if(n < 0 || n > 100)
            std::cout << "Invalid Element\n";

        else
            intV[n] = true;
    }

    std::cout << "Entry complete\n";
}




