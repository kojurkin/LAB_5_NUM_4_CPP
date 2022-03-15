#include <iostream>
#include <fstream>

int main()
{
    int  size;
    std::ifstream inputfile ("input.txt");
    inputfile >> size;
    double* array = new double[size];

    for(int i = 0; i < size; i++)
    {
        if(inputfile.peek() == EOF)
        {
            std::cout << "ERROR: not enough elements in file";
            return 1;
        }
        inputfile >> array[i];
    }
    for(int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
    inputfile.close();
    return 0;
}
