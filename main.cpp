#include <bits/stdc++.h>

using namespace std;

bool exitProgram = false;
bool radians = false;

float areaBaseHeight(float base, float height) {
    return 0.5*base*height;
}

float areaHeron(float a, float b, float c) {
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

void settings() {
    cout << "\n\nSETTINGS\n\n";
    
    cout << "Select the unit of measurement for angles:\n";
    cout << "[1] Degrees\n";
    cout << "[2] Radians\n";
    cout << "Enter the corresponding number to your selection: ";
    int option; cin >> option;
    if(option == 2) {
        radians = true;
    }
    else {
        radians = false;
    }
}

void calculateOption101() {
    float a, b, c, angleA, angleB, angleC;
    cout << "TWO SIDES AND THE ANGLE BETWEEN THEM\n\n";
    cout << "Enter the length of the two known sides (sides a and b): ";
    cin >> a >> b;
    cout << "Enter the angle between the two sides (in " << (radians ? "radians" : "degrees") << "): ";
    cin >> angleC;
    while (radians ? (angleC <= 0 || angleC >= 2*M_PI) : (angleC <= 0 || angleC >= 180)) {
        cout << "Invalid angle. Please enter an angle between 0 and " << (radians ? "2PI radians" : "180 degrees") << ": ";
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
    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Side c: " << c << endl;
    cout << "Angle A: " << angleA << endl;
    cout << "Angle B: " << angleB << endl;
    cout << "Angle C: " << angleC << endl;
}

void calculateOption102() {
    float a, b, c, angleA, angleB, angleC;
    cout << "ONE SIDE AND TWO ANGLES\n\n";
    cout << "Enter the length of the known side (side a): ";
    cin >> a;
    cout << "Enter the angle opposite to the known side (angle A, in " << (radians ? "radians" : "degrees") << "): ";
    cin >> angleA;
    while (radians ? (angleA <= 0 || angleA >= 2*M_PI) : (angleA <= 0 || angleA >= 180)) {
        cout << "Invalid angle. Please enter an angle between 0 and " << (radians ? "2PI radians" : "180 degrees") << ": ";
        cin >> angleA;
    }

    cout << "Enter the other known angle (angle B, in " << (radians ? "radians" : "degrees") << "): ";
    cin >> angleB;
    while (radians ? (angleB <= 0 || angleB >= 2*M_PI) : (angleB <= 0 || angleB >= 180)) {
        cout << "Invalid angle. Please enter an angle between 0 and " << (radians ? "2PI radians" : "180 degrees") << ": ";
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

    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Side c: " << c << endl;
    cout << "Angle A: " << angleA << endl;
    cout << "Angle B: " << angleB << endl;
    cout << "Angle C: " << angleC << endl;
}

void calculateOption103() {
    float a, b, c, angleA, angleB, angleC;
    cout << "ALL THREE SIDES\n\n";
    cout << "Enter the lengths of the three sides (sides a, b, and c): ";
    cin >> a >> b >> c;
    
    while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid side lengths. Please enter positive values that satisfy the triangle inequality (a+b>c): ";
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

    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Side c: " << c << endl;
    cout << "Angle A: " << angleA << endl;
    cout << "Angle B: " << angleB << endl;
    cout << "Angle C: " << angleC << endl;
}

void calculateMedian(float a, float b, float c) {
    float medianA, medianB, medianC;
    medianA=0.5*sqrt(2*b*b+2*c*c-a*a);
    medianB=0.5*sqrt(2*a*a+2*c*c-b*b);
    medianC=0.5*sqrt(2*a*a+2*b*b-c*c);
    cout << "Median from vertex A: " << medianA << endl;
    cout << "Median from vertex B: " << medianB << endl;
    cout << "Median from vertex C: " << medianC << endl;
}

void calculateAltitude(float a, float b, float c) {
    float altitudeA, altitudeB, altitudeC;
    float s=(a+b+c)/2;
    altitudeA=2*sqrt(s*(s-a)*(s-b)*(s-c))/a;
    altitudeB=2*sqrt(s*(s-a)*(s-b)*(s-c))/b;
    altitudeC=2*sqrt(s*(s-a)*(s-b)*(s-c))/c;

    cout << "Altitude from vertex A: " << altitudeA << endl;
    cout << "Altitude from vertex B: " << altitudeB << endl;
    cout << "Altitude from vertex C: " << altitudeC << endl;
}

void calculateAngleBisector(float a, float b, float c) {
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
    cout << endl << endl << "+===SOLVE=A=TRIANGLE================+" << endl << "What information do you have about the triangle?" << endl << endl;
    cout << "[1] Two sides and the angle between them" << endl;
    cout << "[2] Two angles and a side opposite to one of them" << endl;
    cout << "[3] All three sides" << endl;
    cout << "+===================================+" << endl;
    cout << "Enter the corresponding number to your selection: "; cin >> option;
    
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
        cout << "No such option exists.\nPlease select a valid option from the menu." << endl;
        calculateMenuSolveTriangle();
    }
}

void calculateMenuArea() {
    int option;
    cout << endl << endl<< "+===AREA=OF=A=TRIANGLE==============+" << endl << "How do you want to calculate the area of the triangle?" << endl << endl;
    cout << "[1] Using three sides (Heron's formula)" << endl;
    cout << "[2] Using the base and height" << endl;
    cout << "+===================================+" << endl;
    cout << "Enter the corresponding number to your selection: "; cin >> option;

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
        cout << "No such option exists.\nPlease select a valid option from the menu." << endl;
        calculateMenuArea();
    }
}

void calculateMenuNotableLines() {
    int option;
    float a, b, c;
    cout << endl << endl << "+===NOTABLE=LINES=OF=A=TRIANGLE=====+" << endl;;
    cout << "NOTE: If you do not yet know all the side lengths,\nyou can use the triangle solver to find them first." << endl << endl; 
    cout << "Enter the lengths of all three sides (sides a, b, and c): ";

    do{
        cin >> a >> b >> c;
    }while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a);

    cout << endl << "Which notable line do you want to calculate?" << endl << endl;
    cout << "[1] Median" << endl;
    cout << "[2] Altitude" << endl;
    cout << "[3] Angle bisector" << endl;
    cout << "+===================================+" << endl;
    cout << "Enter the corresponding number to your selection: "; cin >> option;

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
        cout << "No such option exists.\nPlease select a valid option from the menu." << endl;
        calculateMenuNotableLines();
    }
}

void calculateMenuRadius() {
    float a, b, c;
    cout << endl << endl << "+===RADIUS=CALCULATOR===============+" << endl << endl;

    cout << "NOTE: If you do not yet know all the side lengths,\nyou can use the triangle solver to find them first.\n\n"; 
    cout << "Enter the lengths of all three sides (sides a, b, and c): ";
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

void selection() {
    int option;
    cout << endl <<"+===MAIN=MENU=======================+" << endl;
    cout << "Angles currently set to "; if(radians) cout << "radians"; else cout << "degrees"; cout << endl;
    cout << "Select an option below:" << endl << endl;
    cout << "[1] Solve a triangle" << endl;
    cout << "+===================================+" << endl;
    cout << "[2] Calculate the area of a triangle" << endl;
    cout << "[3] Calculate the notable lines of a triangle" << endl;
    cout << "[4] Calculate the radius of a triangle\'s circumcircle and incircle" << endl;
    cout << "+===================================+" << endl;
    cout << "[9] Exit [0] Settings" << endl;
    cout << "+===================================+" << endl;
    cout << "Enter the corresponding number to your selection: "; cin >> option;
    
    if(option == 9) {
        cout << "Closing the program...";
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
    else if (option == 0) {
        settings();
    }
    else {
        cout << "No such option exists.\nPlease select a valid option from the menu." << endl;
    }
}

int main() {
    cout << "+====+ TRIGONOMETRY CALCULATOR +====+" << endl;
    cout << "+=+ made by @nnimrod704 for Terra +=+" << endl << endl;
    do {
        selection();
    } while (!exitProgram);
    return 0;
}