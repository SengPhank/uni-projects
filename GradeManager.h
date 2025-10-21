#pragma once
#include <vector>
class GradeManager {
private:
    std::vector<int> grades;
public:
    GradeManager();
    ~GradeManager();

    void addGrade(int grade);
    void removeAt(int index);
    void updateGrade(int index, int newGrade);
    int countOccurrences(int grade);
    std::vector<int> findAllIndices(int grade);
    int countBelow(int threshold);
    int getSize();
    double getAverage();
    void clearGrades();
};