#pragma once
#include <utility>
#include <vector>
class RecordManager {
private:
    std::vector<std::pair<int, int>> records;
public:
    static int nextStudentID;
    static int totalRecordsCreated;
    
    RecordManager();
    ~RecordManager();
    static int generateNextID();
    int addRecord(int grade);
    void removeRecord(int studentID);
    bool updateGrade(int studentID, int newGrade);
    int getGrade(int studentID);
    std::vector<int> findRecordsByGrade(int grade);
    int countRecordsBelow(int threshold);
    std::pair<int, int> getRecord(int studentID);
    std::vector<std::pair<int, int>> getRecordsAbove(int threshold);
    int getSize();
    double getAverage();
    void clearAllRecords();
    static int getTotalRecordsCreated();
    static int getNextStudentID();
};