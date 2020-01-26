/**
 *
 * Created by sevket.buyukdemir
 *
 *
 * Heading for operator overloading syntax =
 *****************************************************************************************
 * returnType operator operatorSymbol (arguments)
 *****************************************************************************************
 * Function syntax =
 *****************************************************************************************
 * returnType classname::operator-operatorSymbol- (const classname& otherObject) const {
 *      //algorithm to perform the operation
 *
 *      return value
 * }
 *****************************************************************************************
 * Restrictions:
 * 1- You cannot change the precedence of an operator
 * 2- The associativity cannot be changed. (For example, the associativity of
 * the arithmetic operator + is from left to right and it cannot be changed.)
 * 3- You cannot use default arguments with an overloaded operator.
 * 4- You cannot change the number of arguments that an operator takes.
 * 5- You cannot create new operators. Only existing operators can be over-
 * loaded. The operators that cannot be overloaded are
 *  .  .*   ::  ?: sizeof
 * 6- The meaning of how an operator works with built-in types, such as int ,
 * remains the same.
 * 7- Operators can be overloaded either for objects of the user-defined type,
 * or for a combination of objects of the user-defined type and objects of
 * the built-in type.
 *
 *
 * 1. The function that overloads any of the operators () , [] , -> , or = for a
 * class must be declared as a member of the class.
 *
 *
 *  Overloading the Stream Insertion(<<) and Extraction(>>) Operators
 *  ..must be a nonmember function of that class because this operators used with
 *  object types bu our target type is class in classes..
 *
 */

#include "curriculum_vitae.h"

curriculum_vitae::curriculum_vitae(){

}

curriculum_vitae::curriculum_vitae(string name, string lastname, bool graduate,
        int age, int experience_year, int certificate,
        double credit_rating, double body_mass_index) {
    // Same with setCV function..
    CV cv_current;
    cv_current.name = name;
    cv_current.lastname = lastname;
    cv_current.graduate = graduate;
    cv_current.age = age;
    cv_current.experience_year = experience_year;
    cv_current.certificate = certificate;
    cv_current.credit_rating = credit_rating;
    cv_current.body_mass_index = body_mass_index;
    curriculum_vitae::cv = cv_current;
}

bool curriculum_vitae::operator>= (const curriculum_vitae& curriculumVitae) const {
    return CVPoint >= curriculumVitae.CVPoint;
}

void curriculum_vitae::setCV(const CV cv_current) {
    curriculum_vitae::cv = cv_current;
}

void curriculum_vitae::setCV(string name, string lastname, bool graduate,
        int age, int experience_year, int certificate,
        double credit_rating, double body_mass_index) {
    CV cv_current;
    cv_current.name = name;
    cv_current.lastname = lastname;
    cv_current.graduate = graduate;
    cv_current.age = age;
    cv_current.experience_year = experience_year;
    cv_current.certificate = certificate;
    cv_current.credit_rating = credit_rating;
    cv_current.body_mass_index = body_mass_index;
    curriculum_vitae::cv = cv_current;
}

const CV &curriculum_vitae::getCv() const {
    return cv;
}

void curriculum_vitae::printCV(CV cv_c) {
    cout << cv_c.name + " " + cv_c.lastname << endl;
    if(cv_c.graduate){
        cout << "Graduated" << endl;
    } else {
        cout << "Not Graduated!!!" << endl;
    }
    cout << "Age: " + to_string(cv_c.age) << endl;
    cout << "Experience: " + to_string(cv_c.experience_year) + " year." << endl;
    cout << "Certificate: " + to_string(cv_c.certificate) + " certificate" << endl;
    cout << "Credit rating: " + to_string(cv_c.credit_rating) << endl;
    cout << "Body mass index: " + to_string(cv_c.body_mass_index) << endl;
}

int curriculum_vitae::giveNoteToCV(CV cv_c) {
    int point = 0;
    if(cv_c.graduate){
        point++;
    }
    if(cv_c.experience_year > 5){
        point++;
    }
    if(cv_c.certificate > 10){
        point++;
    }
    if(cv_c.credit_rating > 3.20){
        point++;
    }
    if(cv_c.body_mass_index < 25){
        point++;
    }
    setCvPoint(point);
    return point;
}

int curriculum_vitae::getCvPoint() const {
    return CVPoint;
}

void curriculum_vitae::setCvPoint(int cvPoint) {
    CVPoint = cvPoint;
}

string curriculum_vitae::getCVname(){
    return cv.name;
}

string curriculum_vitae::getCVlastname(){
    return cv.lastname;
}

bool curriculum_vitae::getCVgraduate(){
    return cv.graduate;
}

int curriculum_vitae::getCVage(){
    return cv.age;
}

int curriculum_vitae::getCVexperience_year(){
    return cv.experience_year;
}

int curriculum_vitae::getCVcertificate(){
    return cv.certificate;
}

double curriculum_vitae::getCVcredit_rating(){
    return cv.credit_rating;
}

double curriculum_vitae::getCVbody_mass_index(){
    return cv.body_mass_index;
}

void curriculum_vitae::setCVname(string name){
    cv.name = name;
}

void curriculum_vitae::setCVlastname(string lastname){
    cv.lastname = lastname;
}

void curriculum_vitae::setCVgraduate(bool isGraduated){
    cv.graduate = isGraduated;
}

void curriculum_vitae::setCVage(int age){
    cv.age = age;
}

void curriculum_vitae::setCVexperience_year(int experience_year){
    cv.experience_year = experience_year;
}

void curriculum_vitae::setCVcertificate(int certificate){
    cv.certificate = certificate;
}

void curriculum_vitae::setCVcredit_rating(double credit_rating){
    cv.credit_rating = credit_rating;
}

void curriculum_vitae::setCVbody_mass_index(double body_mass_index){
    cv.body_mass_index = body_mass_index;
}