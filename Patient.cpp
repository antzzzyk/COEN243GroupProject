//
// Created by ant on 2026-11-24.
//

#include "Patient.h"
using namespace std;
Patient::Patient() {
    firstName = "";
    lastName = "";
    ID = 0;
    adoc = 0;
    dob = "";
    bloodtype = " ";
    diagnosis = "";
    doa = "";
    discharge = "";
}

Patient::Patient(string fn, string ln, int i, int ad,
        string birth, string btype, string diag, string admi, string dis) {
    firstName = fn;
    lastName = ln;
    ID = i;
    adoc = ad;
    dob = birth;
    bloodtype = btype;
    diagnosis = diag;
    doa = admi;
    discharge = dis;
}

void Patient::setFirstName(string fn) {
    firstName = fn;
}
void Patient::setLastName(string ln) {
    lastName = ln;
}
void Patient::setID(long int i) {
    ID = i;
}

void Patient::setAssignedDoc(long int i) {
    adoc = i;
}

void Patient::setDob(string dob) {
    dob = dob;
}
void Patient::setBloodtype(string btype) {
    bloodtype = btype;
}
void Patient::setDiagnosis(string d) {
    diagnosis = d;
}
void Patient::setDateOfAdmission(string d) {
    doa = d;
}
void Patient::setDischarge(string d) {
    discharge = d;
}


string const Patient::getFirstName() {
    return firstName;
}
string const Patient::getLastName() {
    return lastName;
}

long int const Patient::getID() {
    return ID;
}
long int const Patient::getAssignedDoc() {
    return adoc;
}
string const Patient::getDateOfBirth() {
    return dob;
}
string const Patient::getBloodtype() {
    return bloodtype;
}
string const Patient::getDateOfAdmission() {
    return doa;
}
string const Patient::getDischarge() {
    return discharge;
}




