//
// Created by sevket.buyukdemir
//

#ifndef OPERATOR_OVERLOADING_CURRICULUM_VITAE_H
#define OPERATOR_OVERLOADING_CURRICULUM_VITAE_H

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct CV {
    string name;
    string lastname;
    bool graduate;
    int age;
    int experience_year;
    int certificate;
    double credit_rating;
    double body_mass_index;
};
class curriculum_vitae {
public:
    curriculum_vitae();
    curriculum_vitae(string name, string lastname, bool graduate,
                     int age, int experience_year, int certificate,
                     double credit_rating, double body_mass_index);

    friend ostream& operator<< (ostream& ostreamObject, const curriculum_vitae& curriculumVitaeObject);
    friend istream& operator>> (istream& istreamObject, curriculum_vitae& curriculumVitaeObject);
    bool operator>= (const curriculum_vitae&) const;

    void setCV(const CV cv);
    void setCV(string name, string lastname, bool graduate,
            int age, int experience_year, int certificate,
            double credit_rating, double body_mass_index);
    const CV &getCv() const;
    void printCV(CV);
    int giveNoteToCV(CV);
    int getCvPoint() const;
    void setCvPoint(int cvPoint);
    string getCVname();
    string getCVlastname();
    bool getCVgraduate();
    int getCVage();
    int getCVexperience_year();
    int getCVcertificate();
    double getCVcredit_rating();
    double getCVbody_mass_index();
    void setCVname(string);
    void setCVlastname(string);
    void setCVgraduate(bool);
    void setCVage(int);
    void setCVexperience_year(int);
    void setCVcertificate(int);
    void setCVcredit_rating(double);
    void setCVbody_mass_index(double);
private:
    CV cv;
    int CVPoint;

    string name;
    string lastname;
    bool graduate;
    int age;
    int experience_year;
    int certificate;
    double credit_rating;
    double body_mass_index;
};


#endif //OPERATOR_OVERLOADING_CURRICULUM_VITAE_H
