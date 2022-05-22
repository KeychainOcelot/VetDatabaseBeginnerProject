#include "Patients.h"
#include <iostream>
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
    this->petVaccine = petVaccine;
    this->petVaccineDate = petVaccineDate;

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

}
void Patients::getPetHistory() const
{

}
void Patients::getOwnerDetails() const
{

}