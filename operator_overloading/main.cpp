#include <iostream>
#include <string>
#include "curriculum_vitae.h"

using namespace std;

int main() {
    std::cout << "Curriculum Vitae!" << std::endl;
    //Using of Insertion operator
    curriculum_vitae cv_object("şevket", "büyükdemir", false,
                               22, 8, 30, 3.64, 25.32);
    CV cv = cv_object.getCv();
    //same results with different syntax.. You can design syntax in overloading function..
    cout << "Insertion operator output : " << endl;
    cout << cv_object << endl;
    cout << "Print CV function output : " << endl;
    cv_object.printCV(cv);

    cv_object.setCvPoint(cv_object.giveNoteToCV(cv));
    cout << "Point of this CV: " << cv_object.getCvPoint() << endl;

    //Using of Extraction operator
    curriculum_vitae otherCVobject;

    cin >> otherCVobject; // Extraction Operator (>>)

    cout << "Insertion operator output : " << endl;
    cout << otherCVobject << endl; // Insertion Operator (<<)


    return 0;
}

// Only for curriculum_vitae class.. If you want overload for other classes
// you must declare other functions..

// Function prototypes must include in the definition of the curriculum_vitae class
// Overloading the Stream Insertion Operator (<<)
ostream& operator<< (ostream& ostreamObject, const curriculum_vitae& curriculumVitaeObject){
    CV cv = curriculumVitaeObject.getCv();

    string name = cv.name;
    string lastname = cv.lastname;
    bool graduate = cv.graduate;
    int age = cv.age;
    int experience_year = cv.experience_year;
    int certificate = cv.certificate;
    double credit_rating = cv.credit_rating;
    double body_mass_index = cv.body_mass_index;

    ostreamObject << "Name: " << name << "\nLastname: " << lastname << "\nGraduate: " << graduate <<  "\nAge: " <<age
                    << "\nExperience year: " << experience_year <<  "\nCertificate: " << certificate
                    << "\nCredit rating: " << credit_rating <<  "\nBody mass index: " << body_mass_index;
    return  ostreamObject;
}

//Overloading the Stream Extraction Operator (>>)
istream& operator>> (istream& istreamObject, curriculum_vitae& curriculumVitaeObject){
    istreamObject >> curriculumVitaeObject.name >>  curriculumVitaeObject.lastname >> curriculumVitaeObject.graduate >>
                    curriculumVitaeObject.experience_year >> curriculumVitaeObject.certificate >>
                    curriculumVitaeObject.credit_rating >> curriculumVitaeObject.body_mass_index;
    return  istreamObject;
}
