#include <iostream>
#include <iterator> // for std::size

int main()
{
    int scores[]{84, 92, 76, 81, 56};
    int numStudents{sizeof(scores) / sizeof(scores[0])};

    int maxScore{0}; // keep track of our largest score

    // now look for a larger score
    for (int student{0}; student < numStudents; ++student)
        if (scores[student] > maxScore)
            maxScore = scores[student];
    int maxScoreIndex{0};
    for (int student{0}; student < numStudents; ++student) {
        if (scores[student] > scores[maxScoreIndex])
            maxScoreIndex = student;
    }

    std::cout << "The best score was " << maxScore << '\n';
    std::cout << "The student with best score was " << maxScoreIndex << std::endl;

    return 0;
}