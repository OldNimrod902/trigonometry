#include <bits/stdc++.h>

using namespace std;

bool exitProgram = false;
bool radians = false;
char language = 'E'; // Default language is English

// Language initalization

char strTitleMainMenu[100] = "+===MAIN=MENU=======================+";
char strTitleSolveTriangle[100] = "+===SOLVE=A=TRIANGLE================+";
char strTitleAreaTriangle[100] = "+===AREA=OF=A=TRIANGLE==============+";
char strTitleNotableLines[100] = "+===NOTABLE=LINES=OF=A=TRIANGLE=====+";
char strTitleRadiusCalculator[100] = "+===RADIUS=CALCULATOR===============+";
char strTitlePythagorean[100] = "+===PYTHAGOREAN=THEOREM=============+";
char strTitleSinCosCalculator[100] = "+===SINE=AND=COSINE=CALCULATOR======+";
char strTitleTanCotCalculator[100] = "+===TANGENT=AND=COTANGENT=CALC.=====+";
char strTitleAngleUnits[100] = "+===UNIT=OF=MEASUREMENT=============+";
char strTitleLanguageSelection[100] = "+===LANGUAGE=SELECTION==============+";
char strTitleBonusFeatures[100] = "+===BONUS=FEATURES==================+";
char strTitleMisc[100] = "+===MISCELLANEOUS===================+";

char strLengthSideA[100] = "Side a: ";
char strLengthSideB[100] = "Side b: ";
char strLengthSideC[100] = "Side c: ";
char strSizeAngleA[100] = "Angle A";
char strSizeAngleB[100] = "Angle B";
char strSizeAngleC[100] = "Angle C";

char strTitleSlvTri2Side1Angle[100] = "+=+ TWO SIDES AND THE ANGLE BETWEEN THEM +=+";
char strTitleSlvTri1Side2Angle[100] = "+=+ TWO ANGLES AND A SIDE OPPOSITE TO ONE OF THEM +=+";
char strTitleSlvTri3Side0Angle[100] = "+=+ ALL THREE SIDES +=+";

char strMenuMainSolveTriangle[100] = "Solve a triangle";
char strMenuMainArea[100] = "Calculate the area of a triangle";
char strMenuMainNotable[100] = "Calculate the notable lines of a triangle";
char strMenuMainRadius[100] = "Calculate the radius of a triangle\'s circumcircle and incircle";
char strMenuMainPythagorean[100] = "Pythagorean Theorem";
char strMenuMainSinCos[100] = "Sine and cosine value calculator";
char strMenuMainTanCot[100] = "Tangent and cotangent value calculator";
char strMenuMainExit[100] = "Exit";
char strMenuMainAngleUnitChanger[100] = "Change angle unit";
char strMenuMainLanguage[100] = "Change language";

char strMenuMainAngleStatusBeginning[100] = "Angles are currently set to ";
char strMenuMainAngleStatusDeg[100] = "degrees";
char strMenuMainAngleStatusRad[100] = "radians.";

char strNoticeInvalidAngleDeg[100] = "Invalid angle. Please enter an angle between 0 and 180 degrees: ";
char strNoticeInvalidAngleRad[100] = "Invalid angle. Please enter an angle between 0 and PI radians: ";
char strNoticeInexistentOption[100] = "No such option exists.\nPlease select a valid option from the menu: ";
char strNoticeClosingProgram[100] = "Closing the program...";
char strNoticeEnterOption[100] = "Enter the corresponding number to your selection: ";
char strNoticeSelectAnOption[100] = "Select an option below: ";
char strNoticeTriangleInequality[200] = "Invalid side lengths. Please enter positive values that satisfy the triangle inequality (a+b>c): ";
char strNoticeTipFor3Sides[200] = "NOTE: If you do not yet know all the side lengths,\nyou can use the triangle solver to find them first.";

char strNoticeEnterAngleBetweenSides[100] = "Enter the angle between the two sides (angle C): ";
char strNoticeEnter2Sides[100] = "Enter the length of the two known sides (sides a and b): ";

char strNoticeEnterAngleOppositeToSide[100] = "Enter the angle opposite to the known side (angle A): ";
char strNoticeEnterOtherKnownAngle[100] = "Enter the other known angle (angle B): ";
char strNoticeEnterSideOppositeToAngle[100] = "Enter the length of the known side (side a): ";

char strNoticeEnterAll3Sides[100] = "Enter the length of all three sides: ";


char strSlvTriInformationQuestion[100] = "What information do you know about the triangle?";
char strSlvTriOption2Side1Angle[100] = "Two sides and the angle between them";
char strSlvTriOption1Side2Angle[100] = "Two angles and a side opposite to one of them";
char strSlvTriOption3Side0Angle[100] = "All three sides";

void setLanguageHUN() {
    //Title screen titles
    strcpy(strTitleMainMenu, "+===FOMENU==========================+");
    strcpy(strTitleSolveTriangle, "+===HAROMSZOG=MEGOLDASA=============+");
    strcpy(strTitleAreaTriangle, "+===HAROMSZOG=TERULETE==============+");
    strcpy(strTitleNotableLines, "+===HAROMSZOG=NEVEZETES=VONALAI=====+");
    strcpy(strTitleRadiusCalculator, "+===KOREIRT=ES=BELERIRT=KOR=SUGARA==+");
    strcpy(strTitlePythagorean, "+===PITAGORASZ=TETEL================+");
    strcpy(strTitleSinCosCalculator, "+===SZINUSZ=ES=KOSZINUSZ=SZAMOLO====+");
    strcpy(strTitleTanCotCalculator, "+===TANGENS=ES=KOTANGENS=SZAMOLO====+");
    strcpy(strTitleAngleUnits, "+===SZOG=MERTEKEGYSEGE==============+");
    strcpy(strTitleLanguageSelection, "+===NYELV=KIVALASZTASA==============+");
    strcpy(strTitleBonusFeatures, "+===BONUSZ=FUNKCIOK=================+");
    strcpy(strTitleMisc, "+===EGYEB===========================+");

    strcpy(strLengthSideA, "a oldal hossza: ");
    strcpy(strLengthSideB, "b oldal hossza: ");
    strcpy(strLengthSideC, "c oldal hossza: ");
    strcpy(strSizeAngleA, "A szog merteke: ");
    strcpy(strSizeAngleB, "B szog merteke: ");
    strcpy(strSizeAngleC, "C szog merteke: ");

    strcpy(strTitleSlvTri2Side1Angle, "+=+ KET OLDAL ES AZ ALTALUK KOZREZART SZOG +=+");
    strcpy(strTitleSlvTri1Side2Angle, "+=+ KET SZOG ES VALMELYIK SZOGGEL SZEMBENFEKVO OLDAL +=+");
    strcpy(strTitleSlvTri3Side0Angle, "+=+ MINDHAROM OLDAL +=+");
    //Title screen options
    strcpy(strMenuMainSolveTriangle, "Haromszog megoldasa");
    strcpy(strMenuMainArea, "Haromszog teruletenek kiszamitasa");
    strcpy(strMenuMainNotable, "Haromszog nevezetes vonalainak kiszamitasa");
    strcpy(strMenuMainRadius, "Haromszogbe- es kore irt kor sugaranak kiszamitasa");
    strcpy(strMenuMainPythagorean, "Pitagorasz tetele");
    strcpy(strMenuMainSinCos, "Sinusz es koszinusz szamolo");
    strcpy(strMenuMainTanCot, "Tangens es kotangens szamolo");
    strcpy(strMenuMainExit, "Kilepes");
    strcpy(strMenuMainAngleUnitChanger, "Szog mertekegysegenek allitasa");
    strcpy(strMenuMainLanguage, "Nyelv allitasa");

    strcpy(strMenuMainAngleStatusBeginning, "A szogek jelenleg ");
    strcpy(strMenuMainAngleStatusDeg, "fokra vannak allitva.");
    strcpy(strMenuMainAngleStatusRad, "radianra vannak allitva.");
    //Notices
    strcpy(strNoticeInvalidAngleDeg, "Hibas szog. 0 es 180 fok kozotti szoget adj meg: ");
    strcpy(strNoticeInvalidAngleRad, "Hibas szog. 0 es PI radian kozotti szoget adj meg: ");
    strcpy(strNoticeInexistentOption, "Nem letezik ilyen opcio.\nValassz egyet az alabbi menupontokbol:");
    strcpy(strNoticeClosingProgram, "Program bezarasa...");
    strcpy(strNoticeEnterOption, "Add meg a kivalasztott menupont sorszamat: ");
    strcpy(strNoticeSelectAnOption, "Valassz egyet az alabbi menupontok kozul: ");
    strcpy(strNoticeTriangleInequality, "Hibas oldalhosszak. Olyan pozitiv ertekeket adj meg, amelyek teljesitik a haromszog egyenlotlenseget (a+b>c): ");
    strcpy(strNoticeTipFor3Sides, "TIPP: Ha meg nem tudod a haromszog mindharom oldalat,\nakkor hasznald a Haromszog Megoldasa funkciot.");
    //Solving of a triangle
    strcpy(strSlvTriInformationQuestion, "Milyen informaciokat ismersz a haromszogrol?");
    strcpy(strSlvTriOption2Side1Angle, "Ket oldalt es az altaluk kozrezart szoget");
    strcpy(strSlvTriOption1Side2Angle, "Ket szoget es valamelyik szoggel szembenfekvo oldalt");
    strcpy(strSlvTriOption3Side0Angle, "Mindharom oldalt");

    strcpy(strNoticeEnterAngleBetweenSides, "Add meg ket ismert oldal altal kozrezart szog merteket: ");
    strcpy(strNoticeEnter2Sides, "Add meg a ket ismert oldal hosszat: ");

    strcpy(strNoticeEnterAngleOppositeToSide, "Add meg az ismert oldallal szembenfekvo szog merteket (A szog): ");
    strcpy(strNoticeEnterOtherKnownAngle, "Add meg a masik szog merteket (B szog)");
    strcpy(strNoticeEnterSideOppositeToAngle, "Add meg az imsert oldal hosszat (a oldal): ");

    strcpy(strNoticeEnterAll3Sides, "Add meg mindharom oldal hosszat (a, b es c oldalak): ");

}

float areaBaseHeight(float base, float height) { // Basic area calculation using base and height
    return 0.5*base*height;
}

float areaHeron(float a, float b, float c) { // Area calculation using Heron's formula
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float pythagoreanTheorem(float a, float b) { // Pythagorean theorem for right triangles
    return sqrt(a*a + b*b);
}

float pythagoreanForCathetus(float hypo, float cath1) { // Pythagorean theorem for finding a cathetus
    return sqrt(hypo*hypo - cath1*cath1);
}

void coutSeparator() { // Void to output a separator line
    cout << "+===================================+" << endl;
}  

void coutSolvedTriangle(float a, float b, float c, float angleA, float angleB, float angleC) { // Void to output the solved triangle
    cout << strLengthSideA << a << endl;
    cout << strLengthSideB << b << endl;
    cout << strLengthSideC << c << endl;
    cout << strSizeAngleA << angleA << endl;
    cout << strSizeAngleB << angleB << endl;
    cout << strSizeAngleC << angleC << endl;
}

void settingsAngleUnits() { // Settings menu for selecting the unit of measurement for angles
    cout << endl << strTitleAngleUnits << endl;
    
    cout << "Select the unit of measurement for angles:" << endl << endl;
    cout << "[1] Degrees" << endl;
    cout << "[2] Radians" << endl;
    coutSeparator();
    cout << strNoticeEnterOption;
    int option; cin >> option;
    if(option == 2) {
        radians = true;
    }
    else {
        radians = false;
    }
}

void settingsLanguage() { // Settings menu for selecting the language of the program
    cout << endl << strTitleLanguageSelection << endl;
    
    cout << "Select the language of the program:" << endl << endl;
    cout << "[E] English" << endl;
    cout << "[H] Magyar (Hungarian)" << endl;
    coutSeparator();
    cout << "Enter the corresponding letter to your selection: ";
    char option; cin >> option;
    if(option == 'H' || option == 'h') {
        language = 'H';
        cout << "Magyar nyelv kivalasztva." << endl;
        setLanguageHUN();
    }
    else {
        language = 'E';
        cout << "Language set to English." << endl;
    }
}

void calculateOption101() { // Void using Law Of Cosines
    float a, b, c, angleA, angleB, angleC;
    cout << strTitleSlvTri2Side1Angle << endl << endl;
    cout << strNoticeEnter2Sides;
    cin >> a >> b;
    cout << strNoticeEnterAngleBetweenSides;
    cin >> angleC;
    while (radians ? (angleC <= 0 || angleC >= M_PI) : (angleC <= 0 || angleC >= 180)) {
        cout <<  (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angleC;
    }
    if(radians) { 
        c=sqrt(a*a + b*b - 2*a*b*cos(angleC));
        angleA=acos((b*b + c*c - a*a)/(2*b*c));
        angleB=acos((a*a + c*c - b*b)/(2*a*c));
    }
    else {
        c=sqrt(a*a + b*b - 2*a*b*cos(angleC*M_PI/180));
        angleA=acos((b*b + c*c - a*a)/(2*b*c))*180/M_PI;
        angleB=180-angleA-angleC;
    }
    coutSolvedTriangle(a, b, c, angleA, angleB, angleC);
}

void calculateOption102() { // Void using Law Of Sines
    float a, b, c, angleA, angleB, angleC;
    cout << strTitleSlvTri1Side2Angle << endl << endl;
    cout << strNoticeEnterSideOppositeToAngle;
    cin >> a;
    cout << strNoticeEnterAngleOppositeToSide;
    cin >> angleA;
    while (radians ? (angleA <= 0 || angleA >= M_PI) : (angleA <= 0 || angleA >= 180)) {
        cout <<  (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angleA;
    }

    cout << strNoticeEnterOtherKnownAngle;
    cin >> angleB;
    while (radians ? (angleB <= 0 || angleB >= M_PI) : (angleB <= 0 || angleB >= 180)) {
        cout <<  (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angleB;
    }

    if(radians) {
        angleC=M_PI-angleA-angleB;
    }
    else {
        angleC=180-angleA-angleB;
    }

    if(radians) {
        b=(a*sin(angleB))/sin(angleA);
        c=(a*sin(angleC))/sin(angleA);
    }
    else {
        b=(a*sin(angleB*M_PI/180))/sin(angleA*M_PI/180);
        c=(a*sin(angleC*M_PI/180))/sin(angleA*M_PI/180);
    }

    coutSolvedTriangle(a, b, c, angleA, angleB, angleC);
}

void calculateOption103() { // Void using Law Of Cosines to find angles
    float a, b, c, angleA, angleB, angleC;
    cout << strTitleSlvTri3Side0Angle << endl << endl;
    cout << strNoticeEnterAll3Sides;
    cin >> a >> b >> c;
    
    while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << strNoticeTriangleInequality;
        cin >> a >> b >> c;
    }

    if(radians) {
        angleA=acos((b*b + c*c - a*a)/(2*b*c));
        angleB=acos((a*a +c*c -b*b)/(2*a*c));
        angleC=M_PI-angleA-angleB;
    }
    else {
        angleA=acos((b*b + c*c - a*a)/(2*b*c))*180/M_PI;
        angleB=acos((a*a +c*c -b*b)/(2*a*c))*180/M_PI;
        angleC=180-angleA-angleB;
    }

    coutSolvedTriangle(a, b, c, angleA, angleB, angleC);
}

void calculateMedian(float a, float b, float c) { // Void to calculate the medians of a triangle with its side lengths
    float medianA, medianB, medianC;
    medianA=0.5*sqrt(2*b*b+2*c*c-a*a);
    medianB=0.5*sqrt(2*a*a+2*c*c-b*b);
    medianC=0.5*sqrt(2*a*a+2*b*b-c*c);
    cout << "Median from vertex A: " << medianA << endl;
    cout << "Median from vertex B: " << medianB << endl;
    cout << "Median from vertex C: " << medianC << endl;
}

void calculateAltitude(float a, float b, float c) { // Void to calculate the altitudes of a triangle with its side lengths
    float altitudeA, altitudeB, altitudeC;
    float s=(a+b+c)/2;
    altitudeA=2*sqrt(s*(s-a)*(s-b)*(s-c))/a;
    altitudeB=2*sqrt(s*(s-a)*(s-b)*(s-c))/b;
    altitudeC=2*sqrt(s*(s-a)*(s-b)*(s-c))/c;

    cout << "Altitude from vertex A: " << altitudeA << endl;
    cout << "Altitude from vertex B: " << altitudeB << endl;
    cout << "Altitude from vertex C: " << altitudeC << endl;
}

void calculateAngleBisector(float a, float b, float c) { // Void to calculate the angle bisectors of a triangle with its side lengths
    float bisectorA, bisectorB, bisectorC, halfA, halfB, halfC;
    halfA=acos((b*b+c*c-a*a)/(2*b*c))/2;
    halfB=acos((a*a+c*c-b*b)/(2*a*c))/2;
    halfC=M_PI/2-halfA-halfB;
    bisectorA=(2*b*c*cos(halfA))/(b+c);
    bisectorB=(2*a*c*cos(halfB))/(a+c);
    bisectorC=(2*a*b*cos(halfC))/(a+b);
    cout << "Angle bisector from vertex A: " << bisectorA << endl;
    cout << "Angle bisector from vertex B: " << bisectorB << endl;
    cout << "Angle bisector from vertex C: " << bisectorC << endl;
}

// First submenus from the main menu 

void calculateMenuSolveTriangle() {
    int option;
    cout << endl << endl << strTitleSolveTriangle << endl << strSlvTriInformationQuestion << endl << endl;
    cout << "[1] " << strSlvTriOption2Side1Angle << endl;
    cout << "[2] " << strSlvTriOption1Side2Angle << endl;
    cout << "[3] " << strSlvTriOption3Side0Angle << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;
    
    if(option == 1) {
        calculateOption101();
    }
    else if(option == 2) {
        calculateOption102();
    }
    else if(option == 3) {
        calculateOption103();
    }
    else {
        cout << strNoticeInexistentOption << endl;
        calculateMenuSolveTriangle();
    }
}

void calculateMenuArea() {
    int option;
    cout << endl << endl<< strTitleAreaTriangle << endl << "How do you want to calculate the area of the triangle?" << endl << endl;
    cout << "[1] Using three sides (Heron's formula)" << endl;
    cout << "[2] Using the base and height" << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;

    if(option==1) {
        float a, b, c;
        cout << "Enter the lengths of all three sides (sides a, b, and c): ";
        cin >> a >> b >> c;
        cout << "Area of the triangle is " << areaHeron(a, b, c) << endl;
    }
    else if(option==2) {
        float base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle is " << areaBaseHeight(base, height) << endl;
    }
    else {
        cout << strNoticeInexistentOption << endl;
        calculateMenuArea();
    }
}

void calculateMenuNotableLines() {
    int option;
    float a, b, c;
    cout << endl << endl << strTitleNotableLines << endl;;
    cout << strNoticeTipFor3Sides << endl << endl; 

    do{
        cout << strNoticeEnterAll3Sides;
        cin >> a >> b >> c;
    }while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a);

    cout << endl << "Which notable line do you want to calculate?" << endl << endl;
    cout << "[1] Median" << endl;
    cout << "[2] Altitude" << endl;
    cout << "[3] Angle bisector" << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;

    if(option == 1) {
        calculateMedian(a, b, c);
    }
    else if(option == 2) {
        calculateAltitude(a, b, c);
    }
    else if(option == 3) {
        calculateAngleBisector(a, b, c);
    }
    else {
        cout << strNoticeInexistentOption << endl;
        calculateMenuNotableLines();
    }
}

void calculateMenuRadius() {
    float a, b, c;
    cout << endl << endl << strTitleRadiusCalculator << endl << endl;

    cout << strNoticeTipFor3Sides << endl << endl; 
    cout << strNoticeEnterAll3Sides;
    do{
        cin >> a >> b >> c;
    }while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a);

    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    float circumradius=(a*b*c)/(4*area);
    float inradius=area/s;

    cout << "Circumradius of the triangle is " << circumradius << endl;
    cout << "Inradius of the triangle is " << inradius << endl;
}

void bonusMenuPythagorean() {
    int option;
    cout << endl << endl << strTitlePythagorean << endl;
    cout << "NOTE: These features only work with right triangles." << endl;
    cout << "Select an option below:" << endl << endl;
    cout << "[1] Find the hypotenuse (longest side)" << endl;
    cout << "[2] Find a cathetus" << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;

    if(option==1) {
        float a, b;
        cout << "Enter the lengths of the two catheti: ";
        cin >> a >> b;
        cout << "The length of the hypotenuse is " << pythagoreanTheorem(a, b) << endl;
    }
    else if(option==2) {
        float hypo, cath1;
        cout << "Enter the length of the hypotenuse: ";
        cin >> hypo;
        cout << "Enter the length of one cathetus: ";
        cin >> cath1;
        cout << "The length of the other cathetus is " << pythagoreanForCathetus(hypo, cath1) << endl;
    }
    else {
        cout << strNoticeInexistentOption << endl;
        bonusMenuPythagorean();
    }
}

void bonusMenuSinCosCalc() {
    float angle;
    cout << endl << endl << strTitleSinCosCalculator << endl;

    cout << "Enter the angle: ";
    cin >> angle;
    while (angle == 0 || (radians ? (angle == M_PI) : (angle == 180))) {
        cout << (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angle;
    }
    if(!radians) {
        angle=angle*M_PI /180;
    }
    cout << "The sine of the angle is   " << sin(angle) << endl;
    cout << "The cosine of the angle is " << cos(angle) << endl;
}

void bonusMenuTanCotCalc() {
    float angle;
    cout << endl << endl << strTitleTanCotCalculator << endl;

    cout << "Enter the angle (in " << (radians ? "radians" : "degrees") << "): ";
    cin >> angle;
    while (angle == 0 || (radians ? (angle == M_PI) : (angle == 180))) {
        cout << (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angle;
    }
    if(!radians) {
        angle=angle*M_PI /180;
    }
    cout << "The tangent of the angle is   " << tan(angle) << endl;
    cout << "The cotangent of the angle is " << 1/tan(angle) << endl;
}

void selection() {
    int option;
    cout << endl << strTitleMainMenu << endl;
    cout << strMenuMainAngleStatusBeginning; if(radians) cout << strMenuMainAngleStatusRad; else cout << strMenuMainAngleStatusDeg; cout << endl;
    cout << strNoticeSelectAnOption << endl << endl;
    cout << "[1] " << strMenuMainSolveTriangle << endl;
    coutSeparator();
    cout << "[2] " << strMenuMainArea << endl;
    cout << "[3] " << strMenuMainNotable << endl;
    cout << "[4] " << strMenuMainRadius << endl;
    cout << strTitleBonusFeatures << endl;
    cout << "[5] " << strMenuMainPythagorean << endl;
    cout << "[6] " << strMenuMainSinCos << endl;
    cout << "[7] " << strMenuMainTanCot << endl;
    cout << strTitleMisc << endl;
    cout << "[9] "<< strMenuMainExit << " [0] " << strMenuMainAngleUnitChanger << " [8] " << strMenuMainLanguage << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;
    
    if(option == 9) {
        cout << strNoticeClosingProgram;
        exitProgram=true;
    }
    else if (option == 1) {
        calculateMenuSolveTriangle();
    }
    else if (option == 2) {
        calculateMenuArea();
    }
    else if (option == 3) {
        calculateMenuNotableLines();
    }
    else if (option == 4) {
        calculateMenuRadius();
    }
    else if (option == 5) {
        bonusMenuPythagorean();
    }
    else if (option == 6) {
        bonusMenuSinCosCalc();
    }
    else if (option == 7) {
        bonusMenuTanCotCalc();
    }
    else if (option == 0) {
        settingsAngleUnits();
    }
    else if (option == 8) {
        settingsLanguage();
    }
    else {
        cout << strNoticeInexistentOption << endl;
    }
}

int main() {
    cout << "+====+ TRIGONOMETRY CALCULATOR +====+" << endl;
    cout << "[~] made by @nnimrod704 for Terra [~]" << endl << endl;
    do {
        selection();
    } while (!exitProgram);
    return 0;
}