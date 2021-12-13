#include <iostream>
#include <iterator>

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    constexpr int numStudents{ static_cast<int>(int(std::size(scores)) };
    
    int maxScore{ 0 };
    for (int student{ 0 }; student < numStudents; ++student)
    {
        if (scores[student] > maxScore)
        {
            masScore = scores[student];
        }
    }

    std::cout << "La mejor calificacion fue: " << maxScore << "\n";

    return 0;
}