#include <bits/stdc++.h>

using namespace std;

bool exitProgram = false;
bool radians = false;

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
char strTitleHelpMenu[100] = "+===FAQ=============================+";


char strLengthSideA[100] = "Side a: ";
char strLengthSideB[100] = "Side b: ";
char strLengthSideC[100] = "Side c: ";
char strSizeAngleA[100] = "Angle A";
char strSizeAngleB[100] = "Angle B";
char strSizeAngleC[100] = "Angle C";
char strSinAngle[100] = "The sine of the angle is ";
char strCosAngle[100] = "The cosine of the angle is ";
char strTanAngle[100] = "The tangent of the angle is ";
char strCotAngle[100] = "The cotangent of the angle is  ";

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
char strMenuMainHelp[100] = "FAQ";

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

char strNoticeEnterAngle[100] = "Enter the angle: ";

char strSlvTriInformationQuestion[100] = "What information do you know about the triangle?";
char strSlvTriOption2Side1Angle[100] = "Two sides and the angle between them";
char strSlvTriOption1Side2Angle[100] = "Two angles and a side opposite to one of them";
char strSlvTriOption3Side0Angle[100] = "All three sides";

char strAreaTriInformationQuestion[100] = "How do you want to calculate the area of the triangle?";
char strAreaTriOptionHeron[100] = "Using all three sides (Heron\'s formula)";
char strAreaTriOptionBH[100] = "Using the base and height";
char strAreaTriNoticeEnterHeron[100] = "Enter the lengths of all three sides (sides a, b, and c): ";
char strAreaTriNoticeEnterBH[100] = "Enter the base and height of the triangle: ";
char strAreaTriResult[100] = "The area of the triangle is ";

char strNotableLinesInformationQuestion[100] = "Which notable line do you want to calculate?";
char strNotableLinesOptionMedian[100] = "Median";
char strNotableLinesOptionAltitude[100] = "Altitude";
char strNotableLinesOptionAngleBisector[100] = "Angle bisector";

char strNotableLinesMedianA[100] = "The length of the median from vertex A is ";
char strNotableLinesMedianB[100] = "The length of the median from vertex B is ";
char strNotableLinesMedianC[100] = "The length of the median from vertex C is ";
char strNotableLinesAltitudeA[100] = "The length of the altitude from vertex A is ";
char strNotableLinesAltitudeB[100] = "The length of the altitude from vertex B is ";
char strNotableLinesAltitudeC[100] = "The length of the altitude from vertex C is ";
char strNotableLinesAngleBisectorA[100] = "The length of the angle bisector from vertex A is ";
char strNotableLinesAngleBisectorB[100] = "The length of the angle bisector from vertex B is ";
char strNotableLinesAngleBisectorC[100] = "The length of the angle bisector from vertex C is ";

char strCircumradiusResult[100] = "The circumradius of the triangle is ";
char strInradiusResult[100] = "The inradius of the triangle is ";

char strPythNoteRightTri[200] = "NOTE: These features only work with right triangles.";
char strPythInformationQuestion[100] = "What would you like to calculate?";
char strPythOptionHypo[100] = "The length of the hypotenuse (longest side)";
char strPythOptionCath[100] = "The length of a cathetus";
char strPythNoticeEnter2Cath[100] = "Enter the lengths of the two catheti: ";
char strPythNoticeEnter1Cath[100] = "Enter the length of one cathetus: ";
char strPythNoticeEnterHypo[100] = "Enter the length of the hypotenuse: ";
char strPythResultHypo[100] = "The length of the hypotenuse is ";
char strPythResultCath[100] = "The length of the other cathetus is ";

char strUnitSelectionQuestion[100] = "Select the unit of measurement for angles:";
char strUnitSelectionRadian[100] = "Radians";
char strUnitSelectionDegree[100] = "Degrees";

char strHelpText[2000] = "Q: How can I navigate the menus?\nA: When prompted, you only need to enter the number of a submenu,\nnothing else (e.g. you don\'t need to enter the parantheses)\nBut if you managed to see this text, you most certanly figured that out! (:\n\nQ: How do I enter multiple values?\nA: If you need to enter multiple values for a problem,\nyou need to seperate them with a blank space (e.g. you cannot use commas)\n\nQ: I don\'t see the results of my calculation, why is that?\nA: Your answers are there, but when a calculation is completed\nthe main menu also pops up after it.\nYou may need to scroll up to see the results of your calculations.";
char strHelpNoticeExit[100] = "Enter any number to go back to the main menu ";

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
    strcpy(strTitleHelpMenu, "+===GYIK============================+");

    strcpy(strLengthSideA, "a oldal hossza: ");
    strcpy(strLengthSideB, "b oldal hossza: ");
    strcpy(strLengthSideC, "c oldal hossza: ");
    strcpy(strSizeAngleA, "A szog merteke: ");
    strcpy(strSizeAngleB, "B szog merteke: ");
    strcpy(strSizeAngleC, "C szog merteke: ");
    strcpy(strSinAngle, "A szog szinusza ");
    strcpy(strCosAngle, "A szog koszinusza ");
    strcpy(strTanAngle, "A szog tangense ");
    strcpy(strCotAngle, "A szog kotangense ");

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
    strcpy(strMenuMainHelp, "GYIK");

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

    strcpy(strNoticeEnterAngle, "Add meg a szoget: ");

    strcpy(strAreaTriInformationQuestion, "Hogyan szeretned kiszamolni a haromszog teruletet?");
    strcpy(strAreaTriOptionHeron, "Mindharom oldal segitsegevel (Heron keplete)");
    strcpy(strAreaTriOptionBH, "Az alap es hozza tartozo magassag segitsegevel");
    strcpy(strAreaTriNoticeEnterHeron, "Add meg mindharom oldal hosszat (a, b es c oldalak): ");
    strcpy(strAreaTriNoticeEnterBH, "Add meg a haromszog valamely oldalanak hosszat es a hozza tartozo magassagot: ");
    strcpy(strAreaTriResult, "A haromszog terulete ");

    strcpy(strNotableLinesInformationQuestion, "A haromszog melyik nevezetes vonalait szeretned kiszamolni?");
    strcpy(strNotableLinesOptionAltitude, "Magassagok hosszat");
    strcpy(strNotableLinesOptionAngleBisector, "Szogfelezok hosszat");
    strcpy(strNotableLinesOptionMedian, "Oldalfelezok hosszat");

    strcpy(strNotableLinesMedianA, "A szogbol huzott oldalfelezo hossza ");
    strcpy(strNotableLinesMedianB, "B szogbol huzott oldalfelezo hossza ");
    strcpy(strNotableLinesMedianC, "C szogbol huzott oldalfelezo hossza ");
    strcpy(strNotableLinesAltitudeA, "A szogbol huzott magassag hossza ");
    strcpy(strNotableLinesAltitudeB, "B szogbol huzott magassag hossza ");
    strcpy(strNotableLinesAltitudeC, "C szogbol huzott magassag hossza ");
    strcpy(strNotableLinesAngleBisectorA, "A szogbol huzott szogfelezo hossza ");
    strcpy(strNotableLinesAngleBisectorB, "B szogbol huzott szogfelezo hossza ");
    strcpy(strNotableLinesAngleBisectorC, "C szogbol huzott szogfelezo hossza ");

    strcpy(strCircumradiusResult, "A haromszog koreirt kor hossza: ");
    strcpy(strInradiusResult, "A haromszogbe beleirt kor hossza: ");

    strcpy(strPythNoteRightTri, "MEGJEGYZES: Ez a funkcio kizarolag derekszogu haromszogekkel mukodik");
    strcpy(strPythInformationQuestion, "Mit szeretnel kiszamolni?");
    strcpy(strPythOptionCath, "A haromszog egyik befogojat");
    strcpy(strPythOptionHypo, "A haromszog atfogojat");
    strcpy(strPythNoticeEnter2Cath, "Add meg a haromszog ket befogojanak hosszat: ");
    strcpy(strPythNoticeEnter1Cath, "Add meg a haromszog egyik befogojanak hosszat: ");
    strcpy(strPythNoticeEnterHypo, "Add meg a haromszog atfogojanak a hosszat: ");
    strcpy(strPythResultHypo, "A haromszog atfogojanak hossza ");
    strcpy(strPythResultCath, "A haromszog masik befogojanak hossza ");

    strcpy(strUnitSelectionQuestion, "Valaszd ki a szogek mertekegyseget:");
    strcpy(strUnitSelectionDegree, "Szogek");
    strcpy(strUnitSelectionRadian, "Radianok");

    strcpy(strHelpNoticeExit, "A kilepeshez adj meg egy akarmilyen szamot: ");
    strcpy(strHelpText, "K: Hogyan tudok navigalni a menuk kozott?\nV: Mikor a program megker, kizarolag az almenu szamat kell megadd\n(pl. nem kell beirnod a zarojeleket)\nDe ha ezt olvasod, akkor erre mar ugyis rajottel! (:\n\nK: Hogyan irok be tobb erteket?\nV: Ha egy problemahoz a program egyszerre tobb szamot is ker,\nakkor azokat szokozzel elvalasztva add meg (pl. nem hasznalhatsz vesszoket)\n\nK: Nem latom az eredmenyeket, miert van ez?\nV: A kerdeseidre ott van a valasz, csak mikor egy szamitas elvegzodik,\na fomenu ismet megjelenik.\nLehet, hogy fennebb kell gorgess, ahhoz hogy lathasd az eredmenyeket.");
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
    
    cout << strUnitSelectionQuestion << endl << endl;
    cout << "[1] " << strUnitSelectionDegree << endl;
    cout << "[2] " << strUnitSelectionRadian << endl;
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
    
    cout << "Please note, that currently this change couldn\'t be undone, unless you restart the app." << endl;
    cout << "Select the language of the program:" << endl << endl;
    cout << "[H] Magyar (Hungarian)" << endl;
    coutSeparator();
    cout << "Enter the corresponding letter to your selection: ";
    char option; cin >> option;
    if(option == 'H' || option == 'h') {
        cout << "Magyar nyelv kivalasztva." << endl;
        setLanguageHUN();
    }
    else {
        cout << "No change has been made" << endl;
    }
}

void helpMenu() {
    int option;
    cout << strTitleHelpMenu << endl << endl;
    cout << strHelpText << endl << endl;
    cout << strHelpNoticeExit;
    cin >> option;
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
    cout << strNotableLinesMedianA << medianA << endl;
    cout << strNotableLinesMedianB << medianB << endl;
    cout << strNotableLinesMedianC << medianC << endl;
}

void calculateAltitude(float a, float b, float c) { // Void to calculate the altitudes of a triangle with its side lengths
    float altitudeA, altitudeB, altitudeC;
    float s=(a+b+c)/2;
    altitudeA=2*sqrt(s*(s-a)*(s-b)*(s-c))/a;
    altitudeB=2*sqrt(s*(s-a)*(s-b)*(s-c))/b;
    altitudeC=2*sqrt(s*(s-a)*(s-b)*(s-c))/c;

    cout << strNotableLinesAltitudeA << altitudeA << endl;
    cout << strNotableLinesAltitudeB << altitudeB << endl;
    cout << strNotableLinesAltitudeC << altitudeC << endl;
}

void calculateAngleBisector(float a, float b, float c) { // Void to calculate the angle bisectors of a triangle with its side lengths
    float bisectorA, bisectorB, bisectorC, halfA, halfB, halfC;
    halfA=acos((b*b+c*c-a*a)/(2*b*c))/2;
    halfB=acos((a*a+c*c-b*b)/(2*a*c))/2;
    halfC=M_PI/2-halfA-halfB;
    bisectorA=(2*b*c*cos(halfA))/(b+c);
    bisectorB=(2*a*c*cos(halfB))/(a+c);
    bisectorC=(2*a*b*cos(halfC))/(a+b);
    cout << strNotableLinesAngleBisectorA << bisectorA << endl;
    cout << strNotableLinesAngleBisectorB << bisectorB << endl;
    cout << strNotableLinesAngleBisectorC << bisectorC << endl;
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
    cout << endl << endl<< strTitleAreaTriangle << endl << strAreaTriInformationQuestion << endl << endl;
    cout << "[1] " << strAreaTriOptionHeron << endl;
    cout << "[2] " << strAreaTriOptionBH << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;

    if(option==1) {
        float a, b, c;
        cout << strAreaTriNoticeEnterHeron;
        cin >> a >> b >> c;
        cout << strAreaTriResult << areaHeron(a, b, c) << endl;
    }
    else if(option==2) {
        float base, height;
        cout << strAreaTriNoticeEnterBH;
        cin >> base >> height;
        cout << strAreaTriResult << areaBaseHeight(base, height) << endl;
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

    cout << endl << strNotableLinesInformationQuestion << endl << endl;
    cout << "[1] " << strNotableLinesOptionMedian << endl;
    cout << "[2] " << strNotableLinesOptionAltitude << endl;
    cout << "[3] " << strNotableLinesOptionAngleBisector<< endl;
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

    cout << strCircumradiusResult << circumradius << endl;
    cout << strInradiusResult << inradius << endl;
}

void bonusMenuPythagorean() {
    int option;
    cout << endl << endl << strTitlePythagorean << endl;
    cout << strPythNoteRightTri << endl;
    cout << strPythInformationQuestion << endl << endl;
    cout << "[1] " << strPythOptionHypo << endl;
    cout << "[2] " << strPythOptionCath << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;

    if(option==1) {
        float a, b;
        cout << strPythNoticeEnter2Cath;
        cin >> a >> b;
        cout << strPythResultHypo << pythagoreanTheorem(a, b) << endl;
    }
    else if(option==2) {
        float hypo, cath1;
        cout << strPythNoticeEnterHypo;
        cin >> hypo;
        cout << strPythNoticeEnter1Cath;
        cin >> cath1;
        cout << strPythResultCath << pythagoreanForCathetus(hypo, cath1) << endl;
    }
    else {
        cout << strNoticeInexistentOption << endl;
        bonusMenuPythagorean();
    }
}

void bonusMenuSinCosCalc() {
    float angle;
    cout << endl << endl << strTitleSinCosCalculator << endl;

    cout << strNoticeEnterAngle;
    cin >> angle;
    while (angle == 0 || (radians ? (angle == M_PI) : (angle == 180))) {
        cout << (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angle;
    }
    if(!radians) {
        angle=angle*M_PI /180;
    }
    cout << strSinAngle << sin(angle) << endl;
    cout << strCosAngle << cos(angle) << endl;
}

void bonusMenuTanCotCalc() {
    float angle;
    cout << endl << endl << strTitleTanCotCalculator << endl;

    cout << strNoticeEnterAngle;
    cin >> angle;
    while (angle == 0 || (radians ? (angle == M_PI) : (angle == 180))) {
        cout << (radians ? strNoticeInvalidAngleRad : strNoticeInvalidAngleDeg);
        cin >> angle;
    }
    if(!radians) {
        angle=angle*M_PI /180;
    }
    cout << strTanAngle << tan(angle) << endl;
    cout << strCotAngle << 1/tan(angle) << endl;
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
    cout << "[10] "<< strMenuMainExit << " [11] " << strMenuMainHelp << endl;
    cout << "[12] " << strMenuMainAngleUnitChanger << " [13] " << strMenuMainLanguage << endl;
    coutSeparator();
    cout << strNoticeEnterOption; cin >> option;
    
    if(option == 10) {
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
    else if (option == 11) {
        helpMenu();
    }
    else if (option == 12) {
        settingsAngleUnits();
    }
    else if (option == 13) {
        settingsLanguage();
    }
    else {
        cout << strNoticeInexistentOption << endl;
    }
}

int main() {
    cout << "+====+ TRIGONOMETRY CALCULATOR +====+" << endl;
    cout << "[~] made by @nnimrod704 for Terra [~]" << endl;
    cout << "[+] updated for the 3rd prep week [+]" << endl << endl;
    do {
        selection();
    } while (!exitProgram);
    return 0;
}