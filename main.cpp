#include "Functions.hpp"

int main()
{
    std::vector<int> intarray;
    ts::FileReadToVector(filenameOfInputFile, intarray);

    std::cout << "Unsorted: " << std::endl;
    ts::ReadVectorToConsole(intarray);

    int maxValue = ts::FindMaxValueInVector(intarray);
    std::cout << maxValue << std::endl;

    int minValue = ts::FindMinValueInVector(intarray);
    std::cout << minValue << std::endl;

    ts::SortVectorMinToMax(intarray);

    std::cout << "Output file saved!" << std::endl;

    ts::FileWriteVector(filenameOfOutputFile, intarray);

    std::cout << "Sorted: " << std::endl;
    ts::ReadVectorToConsole(intarray);

    return 0;
}
