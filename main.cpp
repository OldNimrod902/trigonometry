#include <bits/stdc++.h>

using namespace std;

bool fromSettings = false;

void settings() {
    cout << "\n\nSettings menu is under construction.\nCurrently, the program only supports angles given in degrees.\n\n";
    fromSettings = true;
}

void calculateOption101() {
    float a, b, c, angleA, angleB, angleC;
    cout << "TWO SIDES AND THE ANGLE BETWEEN THEM\n\n";
    cout << "Enter the length of the two known sides (sides a and b): ";
    cin >> a >> b;
    cout << "Enter the angle between the two sides (in degrees): ";
    cin >> angleC;
    while (angleC <= 0 || angleC >= 180) {
        cout << "Invalid angle. Please enter an angle between 0 and 180 degrees: ";
        cin >> angleC;
    }
    c=sqrt(a*a + b*b - 2*a*b*cos(angleC*M_PI/180));
    angleA=acos((b*b + c*c - a*a)/(2*b*c))*180/M_PI;
    angleB=180-angleA-angleC;
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
    cout << "Enter the two known angles (in degrees): ";
    cin >> angleA >> angleB;
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

    angleA=acos((b*b + c*c - a*a)/(2*b*c))*180/M_PI;
    angleB=acos((a*a +c*c -b*b)/(2*a*c))*180/M_PI;
    angleC=180-angleA-angleB;

    cout << "Side a: " << a << endl;
    cout << "Side b: " << b << endl;
    cout << "Side c: " << c << endl;
    cout << "Angle A: " << angleA << endl;
    cout << "Angle B: " << angleB << endl;
    cout << "Angle C: " << angleC << endl;
}

// First submenus from the main menu 

void calculateMenu1() {
    int option;
    cout << "\n\n+====+ SOLVE A TRIANGLE      +====+\n\nWhat information do you have about the triangle?\n\n";
    cout << "[1] Two sides and the angle between them\n";
    cout << "[2] Two angles and one side\n";
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
    cout << "Not yet implemented. Select another option below;" << endl;
}

void calculateMenu5() {
    cout << "Not yet implemented. Select another option below;" << endl;
}

void selection() {
    int option;
    cout << "\n\n+====+ TRIGONOMETRY CALCULATOR +====+\n\nSelect an option below:\n\n";
    cout << "[1] Solve a triangle";
    cout << "\n+===================================+\n";
    cout << "[2] Calculate the area of a triangle\n";
    cout << "[3] Calculate the perimeter of a triangle\n";
    cout << "[4] Calculate the notable lines of a triangle\n";
    cout << "[5] Calculate the radius of a triangle\'s circumcircle and incircle\n";
    cout << "\n+===================================+\n";
    cout << "[9] Exit [0] Settings";
    cout << "\n+===================================+\n";
    cout << "Enter the corresponding number to your selection: "; cin >> option;
    
    if(option == 9) {
        cout << "Closing the program...";
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

}

int main() {
    int option;
    do {
        selection();
    } while (fromSettings);
    return 0;
}