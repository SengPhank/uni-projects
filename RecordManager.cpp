#include "RecordManager.h"

// Private:
/*
std::vector<std::pair<int, int>> records;
static int nextStudentID;
static int totalRecordsCreated;
*/

int RecordManager::nextStudentID = 10001;
int RecordManager::totalRecordsCreated = 0;

RecordManager::RecordManager(){}
RecordManager::~RecordManager() {}

int RecordManager::generateNextID() {
    RecordManager::totalRecordsCreated++;
    RecordManager::nextStudentID++;
    return RecordManager::nextStudentID;
}
int RecordManager::addRecord(int grade) {
    int newID = generateNextID();
    std::pair<int, int> newPair = {newID, grade};
    this->records.push_back(newPair);
    return newID;
}
void RecordManager::removeRecord(int studentID) {
    int indexRmv = -1;
    for (int i = 0; i < this->records.size(); i++) {
        if (this->records[i].first == studentID) {
            indexRmv = i;
            break;
        } 
    }
    if (indexRmv == -1) return;
    for (int i = indexRmv; i < this->records.size()-1; i++) {
        this->records[i] = this->records[i+1];
    }
    this->records.pop_back();
}
bool RecordManager::updateGrade(int studentID, int newGrade){
    for (std::pair<int, int>& i : this->records) {
        if (i.first == studentID) {
            i.second = newGrade;
            return true;
        }
    }
    return false;
}
int RecordManager::getGrade(int studentID){
    for (std::pair<int, int> i : this->records) {
        if (i.first == studentID) return i.second;
    }
    return -1;
}
std::vector<int> RecordManager::findRecordsByGrade(int grade){
    std::vector<int> res;
    for (std::pair<int, int> i : this->records) {
        if (i.second == grade) res.push_back(i.first);
    }
    return res;
}
int RecordManager::countRecordsBelow(int threshold){
    int count = 0;
    for (std::pair<int, int> i : this->records) {
        if (i.second < threshold) count++;
    }
    return count;
}
std::pair<int, int> RecordManager::getRecord(int studentID){
    for (std::pair<int, int> i : this->records) {
        if (i.first = studentID) return i;
    }
    return {-1, -1};
}
std::vector<std::pair<int, int>> RecordManager::getRecordsAbove(int threshold){
    std::vector<std::pair<int, int>> res;
    for (std::pair<int, int> i : this->records) {
        if (i.second > threshold) res.push_back(i);
    }
    return res;
}
int RecordManager::getSize(){
    return this->records.size();
}
double RecordManager::getAverage(){
    double sum = 0;
    for (std::pair<int, int> i : this->records) {
        sum += i.second;
    }
    return sum / this->records.size(); 
}
void RecordManager::clearAllRecords(){
    this->records.clear();
}
int RecordManager::getTotalRecordsCreated(){
    return RecordManager::totalRecordsCreated;
}
int RecordManager::getNextStudentID(){
    return RecordManager::nextStudentID;
}