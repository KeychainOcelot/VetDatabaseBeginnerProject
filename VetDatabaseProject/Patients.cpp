#include "Patients.h"
#include <iostream>
#include <vector>
using namespace std;

Patients::Patients(string ownerName, string petName, string petSpecies)
{
    this->ownerName = ownerName;
    this->petName = petName;
    this->petSpecies = petSpecies;
}
void Patients::setHistory(string petHistoryDisease, string petHistoryMedicine, bool petNeut)
{
    this->petHistoryDisease = petHistoryDisease;
    this->petHistoryMedicine = petHistoryMedicine;
    this->petNeut = petNeut;

}
void Patients::setVaccine(string petVaccine, string petVaccineDate)
{
    this->petVaccine.push_back(petVaccine);
    this->petVaccineDate.push_back(petVaccineDate);

}
void Patients::setPetDetails(string petBreed, int petAge, double petWeight)
{
    this-> petBreed = petBreed;
    this->petAge = petAge;
    this->petWeight = petWeight;

}
void Patients::getOwnerContact() const
{
    cout<<"Owner's name: "<<ownerName<<endl;
    cout<<"Owner's contact: "<<ownerContact<<endl;
}
void Patients::getPetDetails() const
{
<<<<<<< HEAD
    cout << "Pet name: " << petName << endl;
    cout << "Pet species: " << petSpecies << endl;
=======
>>>>>>> 3f63c2fc1f98561f47d685bded665b223793716c
    cout << "Pet breed: " << petBreed << endl;
    cout << "Pet age: " << petAge << endl;
    cout << "Pet weight: " << petWeight << endl;

}
void Patients::getPetHistory() const
{
    cout << "Here are the vaccine details: " << endl;
    for(int i = 0; i < petVaccine.size(); i++)
    {
        cout << petVaccine[i] << ":\t" << petVaccineDate[i] << endl;
    }
    cout << "\n\nPet neuter/spaying status: " << boolalpha << petNeut << endl;
    cout<<"Here is the medical history of the pet: " << petHistoryDisease << "\t " << petHistoryMedicine << endl;

}