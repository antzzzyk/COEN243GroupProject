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



