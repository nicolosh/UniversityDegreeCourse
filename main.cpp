#include <iostream>
#include <university/display.h>
#include <university/room.h>
#include <university/course.h>


using namespace std;
using namespace university;


int main() {
    cout << "University degree course Deparment DII (Trento) " << endl;

    Teacher DelPrete("Andrea", "DelPrete", "123900");
    Teacher Luca("Luca", "Olivieri", "123432");
    Teacher GFDB("Gianfranco", "dallaBetta", "129002");
    Teacher Pinamonti("Andrea", "Pinamonti", "123001");
    Teacher Cristof("Ilaria", "Cristofolini", "187200");
    Teacher Molinari("Alberto", "Molinari", "134521");
    Teacher Bagag("Luca", "Bagagiolo", "230201");
    Teacher Todeschi("Alessandra", "Todeschi", "190122");
    Teacher Rao("Luca", "Rao", "189020");


    Course Elettronica("Elettronica",3);
    Course Informatica("Informatica",3);
    Course Analisi1("Analisi1", 1);
    Course Analisi2("Analisi2",2);
    Course Disegno("Disegno industriale",1);
    Course Metallurgia("Metallurgia",3);
    Course AzionamentiElettrici("Azionamenti elettrici",3);
    Course Automatica("Automatica",2);


    //studenti corso di informatica e elettronica
    Student Silvio("Silvio", "Pagnotto", "120982");
    Student Albi("Albino", "Sabbatini", "134532");
    Student Donata("Donata", "Milanesi", "139072");
    Student Pinto("Gerolamo", "Pinto", "122532");
    Student Maria("Maria", "Sal", "140072");



    //aule e lezioni del corso di info
    Room B101("B101", 100);
    Room B102("B102", 88);
    Lesson Monday(B102, Time(2,0,0), Data(15,9,2020), Time(10,0));
    Lesson Wednesday(B101, Time(1,0,0), Data(17,9,2020), Time(14,0));
    Lesson Saturday(B102, Time(2,0,0), Data(20,9,2020), Time(10,0));
    Lesson Tuesday(B101, Time(2,0,0), Data(25,9,2020), Time(14,0));

    //aule e lezioni del corso di elettronica
    Lesson Monday_(B102, Time(1,0,0), Data(15,9,2020), Time(14,0));
    Lesson Wednesday_(B101, Time(1,0,0), Data(17,9,2020), Time(15,0));
    Lesson Saturday_(B102, Time(2,0,0), Data(20,9,2020), Time(11,0));
    Lesson Tuesday_(B102, Time(2,0,0), Data(25,9,2020), Time(14,0));

    Elettronica.addLessonToThisCourse(Monday_);
    Elettronica.addLessonToThisCourse(Wednesday_);
    Elettronica.addLessonToThisCourse(Saturday_);
    Elettronica.addLessonToThisCourse(Tuesday_);


    Informatica.addLessonToThisCourse(Monday);
    Informatica.addLessonToThisCourse(Wednesday);
    Informatica.addLessonToThisCourse(Saturday);
    Informatica.addLessonToThisCourse(Tuesday);

    //lista di insegnanti del corso di info
    std::vector<Teacher> teachersInfo;
    teachersInfo.push_back(DelPrete);
    teachersInfo.push_back(Luca);

    //lista insegnanti elettronica (solo 1)
    std::vector<Teacher> teacherElettronica;
    teacherElettronica.push_back(GFDB);

    //aggiungo studenti al corso di info
    Informatica.addStudentToThisCourse(Silvio);
    Informatica.addStudentToThisCourse(Albi);
    Informatica.addStudentToThisCourse(Donata);
    Informatica.addStudentToThisCourse(Pinto);

    //aggiungo studenti al corso di elettronica
    Elettronica.addStudentToThisCourse(Silvio);
    Elettronica.addStudentToThisCourse(Albi);
    Elettronica.addStudentToThisCourse(Maria);
    Elettronica.addStudentToThisCourse(Pinto);

    //aggiungo insegnanti del corso di info
    Informatica.addTeachersToThisCourse(teachersInfo);
    Elettronica.addTeachersToThisCourse(teacherElettronica);

    Display display;
    display.addCourse(Elettronica);
    display.addCourse(Informatica);
    display.addCourse(Analisi1);
    display.addCourse(Analisi2);
    display.addCourse(Disegno);
    display.addCourse(Metallurgia);
    display.addCourse(AzionamentiElettrici);
    display.addCourse(Automatica);

    display.displayEverything();
    //display.timeOverlap();

    Elettronica.getRoomsAssociatedToTheCourse();
    Informatica.getTeachersOfThisCourse();



    return 0;
}
