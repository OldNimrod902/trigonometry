#include <bits/stdc++.h>

using namespace std;

bool exitProgram = false;
bool radians = false;

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

void calculateMedian() {
    float a, b, c, medianA, medianB, medianC;
    cout << "MEDIAN\n\n";
    cout << "NOTE: If you do not yet know all the side lengths,\nyou can use the triangle solver to find them first.\n\n"; 
    cout << "Enter the lengths of all three sides (sides a, b, and c): ";
    cin >> a >> b >> c;
    medianA=0.5*sqrt(2*b*b+2*c*c-a*a);
    medianB=0.5*sqrt(2*a*a+2*c*c-b*b);
    medianC=0.5*sqrt(2*a*a+2*b*b-c*c);
    cout << "Median from vertex A: " << medianA << endl;
    cout << "Median from vertex B: " << medianB << endl;
    cout << "Median from vertex C: " << medianC << endl;
}

void calculateAltitude() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

void calculateAngleBisector() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

// First submenus from the main menu 

void calculateMenu1() {
    int option;
    cout << "\n\n+====+ SOLVE A TRIANGLE      +====+\n\nWhat information do you have about the triangle?\n\n";
    cout << "[1] Two sides and the angle between them\n";
    cout << "[2] Two angles and a side opposite to one of them\n";
    cout << "[3] All three sides\n";
    cout << "\n+===================================+\n";
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
}

void calculateMenu2() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

void calculateMenu3() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

void calculateMenu4() {
    int option;
    cout << "\n\n+====+ NOTABLE LINES         +====+\n\nWhich notable line do you want to calculate?\n\n";
    cout << "[1] Median\n";
    cout << "[2] Altitude[WIP]\n";
    cout << "[3] Angle bisector[WIP]\n";
    cout << "\n+===================================+\n";
    cout << "Enter the corresponding number to your selection: "; cin >> option;

    if(option == 1) {
        calculateMedian();
    }
    else if(option == 2) {
        calculateAltitude();
    }
    else if(option == 3) {
        calculateAngleBisector();
    }
}

void calculateMenu5() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

void selection() {
    int option;
    cout << "\n\n+====+ TRIGONOMETRY CALCULATOR +====+\n";
    cout << "Angles currently set to ";
    if(radians) cout << "radians";
    else cout << "degrees";
    cout << "\nSelect an option below:\n\n";
    cout << "[1] Solve a triangle";
    cout << "\n+===================================+\n";
    cout << "[2] Calculate the area of a triangle [WIP]\n";
    cout << "[3] Calculate the perimeter of a triangle [WIP]\n";
    cout << "[4] Calculate the notable lines of a triangle [WIP]\n";
    cout << "[5] Calculate the radius of a triangle\'s circumcircle and incircle [WIP]\n";
    cout << "+===================================+\n";
    cout << "[9] Exit [0] Settings\n";
    cout << "+===================================+\n";
    cout << "Enter the corresponding number to your selection: "; cin >> option;
    
    if(option == 9) {
        cout << "Closing the program...";
        exitProgram=true;
    }
    else if (option == 1) {
        calculateMenu1();
    }
    else if (option == 2) {
        calculateMenu2();
    }
    else if (option == 3) {
        calculateMenu3();
    }
    else if (option == 4) {
        calculateMenu4();
    }
    else if (option == 5) {
        calculateMenu5();
    }
    else if (option == 0) {
        settings();
    }
    else {
        cout << "No such option exists. Please select a valid option from the menu." << endl;
    }
}

int main() {
    int option;
    do {
        selection();
    } while (!exitProgram);
    return 0;
}