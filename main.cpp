#include <iostream>
#include <fstream>

int main()
{
    double** array;
    int  height, width;
    std::ifstream inputfile ("output.txt");
    inputfile >> width;
    inputfile >> height;
    array = new double*[height];
    for (int i = 0; i < height; i++)
    {
        array[i] = new double[width];
    }
    for (int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if(inputfile.peek() == EOF)
            {
                std::cout << "ERROR: not enough elements in file";
                return 1;
            }
            inputfile >> array[i][j];
        }
    }
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    inputfile.close();
    return 0;
}
