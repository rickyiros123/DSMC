// Spider.h
#ifndef SPIDER_H
#define SPIDER_H

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;  // Use this to avoid std:: prefix for standard types

class Spider {
private:
    string name;
    string species;
    string sex;
    string coloration;
    float size;
    int age;
    vector<string> feedingHistory;
    vector<string> diet;
    map<string, string> feedingRecords;

public:
    // Constructors
    Spider();  // Default constructor
    Spider(string spiderName, string spiderSpecies, string spiderSex, string spiderColoration, float spiderSize, int spiderAge);
    Spider(const Spider& spider);  // Copy constructor

    // Getters
    string getName() const { return name; }
    string getSpecies() const { return species; }
    string getSex() const { return sex; }
    string getColoration() const { return coloration; }
    float getSize() const { return size; }
    int getAge() const { return age; }

    // Setters
    void setName(const string& spiderName);
    void setSpecies(const string& spiderSpecies);
    void setSex(const string& spiderSex);
    void setColoration(const string& spiderColoration);
    void setSize(float spiderSize);
    void setAge(int spiderAge);

    // Additional functionalities
    void addFeedingToRecord(const string& date, const string& prey);
    void displaySpiderInfo() const;
    void saveToFile(ofstream& file) const;
    // load spiders from file and return a vector of Spider objects read from the file 
    static vector<Spider*> loadSpidersFromFile(const std::string& filename);
};

#endif // SPIDER_H