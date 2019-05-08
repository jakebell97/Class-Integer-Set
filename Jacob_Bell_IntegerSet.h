#ifndef JACOB_BELL_INTEGERSET_H_INCLUDED
#define JACOB_BELL_INTEGERSET_H_INCLUDED

#include <vector>

class IntegerSet
{
public:
    // Constructors
    IntegerSet();
    IntegerSet(int [], int);
    void initialize();

    // Functions
    IntegerSet unionOfSets(const IntegerSet&) const;
    IntegerSet intersectionOfSets(const IntegerSet&) const;
    void insertElement(int);
    void deleteElement(int);
    void printSet();
    bool isEqualTo(const IntegerSet&) const;
    void inputSet();


private:
    int SIZE = 100;
    std::vector<bool> intV;
};


#endif // JACOB_BELL_INTEGERSET_H_INCLUDED
