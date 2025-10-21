#include "GradeManager.h"

// std::vector<int> grades;

GradeManager::GradeManager() {}
GradeManager::~GradeManager() {}

void GradeManager::addGrade(int grade) {
    this->grades.push_back(grade);
}
void GradeManager::removeAt(int index) {
    if (index < 0 || index >= this->getSize()) return;
    for (int i = index; i < this->getSize()-1; i++) {
        this->grades[i] = this->grades[i+1];
    }
    this->grades.pop_back();
}
void GradeManager::updateGrade(int index, int newGrade) {
    if (index < 0 || index >= this->getSize()) return;
    this->grades[index] = newGrade;
}
int GradeManager::countOccurrences(int grade) {
    int count = 0;
    for (int i : this->grades) {
        if (i == grade) count++;
    }
    return count;
}
std::vector<int> GradeManager::findAllIndices(int grade) {
    std::vector<int> res;
    for (int i = 0; i < this->getSize(); i++) {
        if (this->grades[i] == grade) res.push_back(i);
    }
    return res;
}
int GradeManager::countBelow(int threshold) {
    int count = 0;
    for (int i : this->grades) {
        if (i < threshold) count++;
    }
    return count;
}

int GradeManager::getSize() {
    return this->grades.size();
}
double GradeManager::getAverage() {
    double sum = 0;
    for (int i : this->grades) {
        sum += i;
    }
    return sum/this->getSize();
}
void GradeManager::clearGrades() {
    this->grades.clear();
}