#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Records;
class RecordsManager {
 private:
  fstream _file;
  string _filename;

 public:
  RecordsManager(string filename) : _filename(filename) {}
  // Update read function with exception handling
  void read(Records& records) {
    _file.open(_filename, ios::in);
    if (_file.is_open()) {
      string line;
      while (getline(_file, line)) {
        try {
            int value = stoi(line);
            records.push_back(value);
        } catch (const std::invalid_argument& stoiNumber) {
            // std::cout << "Stoi input error: " << stoiNumber.what() << " for text: " << line << std::endl;
        } catch (const std::out_of_range& stoiOverflow) {
            // std::cout << "Stoi integer error: " << stoiOverflow.what() << " for text: " << line << std::endl;
        }
      }
      _file.close();
    }
  }
};

// command line arguments is used to read file names
int main(int argc, char* argv[]) {
  Records myRecords;
  string filename = "records.txt";
  if (argc > 1) filename = argv[1];
  RecordsManager recordM(filename);
  recordM.read(myRecords);
  int sum = 0;
  for (int i = 0; i < myRecords.size(); i++) {
    sum += myRecords[i];
  }
  cout << sum << endl;
  return 0;
}