#include <iostream>
using namespace std;
template<typename T>
bool arraySearch(T array[], int size, T thing)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == thing)
        return true;
    }
    return false;
}
int main()
{
    const int SIZE = 12;
    int intArray[] = {14, 3, 6, 76, 34, 22, 21, 54, 33, 23, 76, 234};
    cout << "The element was found: " << arraySearch(intArray, SIZE, 230) << endl;
    double doubleArray[] = {34.5, 65.56, 11.1, 45.4, 87.5, 98.3, 23.6, 15.5, 3.3, 5.44, 54.3, 99.9};
    cout << "The element was found: " << arraySearch(doubleArray, SIZE, 23.6) << endl;
    char stringArray[] = {'c', 'b', 'm', 'k', 'r', 'a', 'w', 'i', 's', 'e', 'y', 'u'};
    cout << "The element was found: " << arraySearch(stringArray, SIZE, 'c') << endl;
}