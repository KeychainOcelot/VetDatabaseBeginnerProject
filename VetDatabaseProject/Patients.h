#ifndef PATIENTS_H
#define PATIENTS_H
#include <string>
#include <vector>
using namespace std;

class Patients{
    public:
        Patients(string ownerName, string petName, string petSpecies);
        void setHistory(string petHistoryDisease, string petHistoryMedicine, bool petNeut);
        void setVaccine(string petVaccine, string petVaccineDate);
        void setPetDetails(string petBreed, int petAge, double petWeight);
        string getOwnerContact() const;
        void getPetDetails() const;
        void getPetHistory() const;
        void getOwnerDetails() const;

    private:
        string ownerName;
        int ownerContact;
        string petName;
        string petSpecies;
        string petBreed;
        int petAge;
        double petWeight;
        bool petNeut;
        vector<string> petVaccine;        
        vector<string> petVaccineDate;
        string petHistoryDisease;
        string petHistoryMedicine;
};

#endif