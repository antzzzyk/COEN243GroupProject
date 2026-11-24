//
// Created by ant on 2026-11-24.
//

#ifndef COEN243GROUPPROJECT_PATIENT_H
#define COEN243GROUPPROJECT_PATIENT_H
#include <iostream>
using namespace std;

class Patient {
    //attributes
private:
    string firstName;
    string lastName;
    long int ID;
    long int adoc; //assigned doctor
    string dob; //date of birth
    string bloodtype;
    string diagnosis;
    string doa; //date of admission
    string discharge; // discharge date

public:
    //Constructors (Default & with Parameters)
    Patient();

    Patient(string fn, string ln, int i, int ad,
        string birth, string btype, string diag, string admi, string dis);

    //Setters
     void setFirstName(string fn) {}
    void setLastName(string ln) {}
    void setID(long int i) {}
    void setAssignedDoc(long int i) {}
    void setBloodtype(string b) {}
    void setDiagnosis(string d) {}
    void setDob(string d) {}
    void setDischarge(string d) {}
    void setDateOfAdmission(string date) {}

    //Getters
    string getFirstName() {}
    string getLastName() {}
    long int getID() {}
    long int getAssignedDoc() {}
    string getDateOfBirth() {}
    string getBloodtype() {}
    string getDiagnosis() {}
    string getDateOfAdmission() {}
    string getDischarge() {}

    //Other Functions
    bool isDischarged() {}
    string Patient_Status(){}
    string Print_Patient_Info(){}


};


#endif //COEN243GROUPPROJECT_PATIENT_H
