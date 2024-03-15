
#include <cmath>
#include <iostream>

using namespace std;



void exercise_1(string s1, string s2, string s3) {
  //your code here
  cout << "Ingrese tres palabras separadas por espacios: ";
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);


    string min_lex;
    if (s1 < s2 && s1 < s3) {
        min_lex = s1;
    } else if (s2 < s1 && s2 < s3) {
        min_lex = s2;
    } else {
        min_lex = s3;
    }

  
    cout << "La palabra mínima en orden lexicográfico es: " << min_lex << endl;


}


void exercise_2(double A, double B, double C) {
  //your code here
   double discriminante = B * B - 4 * A * C;

    if (discriminante >= 0) {
        double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
        double raiz2 = (-B - sqrt(discriminante)) / (2 * A);

        cout << raiz1 << " " << raiz2 << endl;
    } else {
        cout << "No hay raíces reales" << endl;
    }
}



void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b == 0) {
        cout << "Imposible" << endl;
    } else {
        cout << a / b << endl;
    }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if (n > b) {
        n *= 1.0 - y / 100;
    } else if (n > a) {
        n *= 1.0 - x / 100;
    }

    cout << n << endl;
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if (isupper(character)) {
        cout << "mayúscula" << endl;
    } else if (islower(character)) {
        cout << "minúscula" << endl;
    } else {
        cout << "no alfabético" << endl;
    }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miércoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sábado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Día inválido" << endl;
    }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}