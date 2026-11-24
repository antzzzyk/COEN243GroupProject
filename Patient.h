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
     void setFirstName(string fn);
    void setLastName(string ln);
    void setID(long int i);
    void setDob(string d);
    void setAssignedDoc(long int i);
    void setBloodtype(string b);
    void setDiagnosis(string d);
    void setDischarge(string d);
    void setDateOfAdmission(string date);

    //Getters
    string const getFirstName();
    string const getLastName();
    long int const getID();
    long int const getAssignedDoc();
    string const getDateOfBirth();
    string const getBloodtype();
    string const getDiagnosis();
    string const getDateOfAdmission();
    string const getDischarge();

    //Other Functions
    bool isDischarged();
    string Patient_Status();
    string Print_Patient_Info();


};


#endif //COEN243GROUPPROJECT_PATIENT_H
