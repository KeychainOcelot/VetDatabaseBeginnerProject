#include <iostream>
#include "Patients.h"

using namespace std;

int main()
{
	Patients testPatient("Shunal", "Biscuit", "Dog");
	testPatient.setVaccine("Rabies", "12th December, 2021");
	testPatient.setVaccine("Parvo", "13th January, 2022");
	testPatient.setPetDetails("Pariah", 10, 40);
	testPatient.setHistory("None", "None", true);
	testPatient.getPetDetails();
	cout << endl << endl;
	testPatient.getPetHistory();

	return 0;
}