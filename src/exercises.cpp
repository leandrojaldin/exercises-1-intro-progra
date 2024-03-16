
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  //your code here
    if (s1 < s2 && s1 < s3) {
    cout << s1;
    } else if (s2 < s1 && s2 < s3) {
    cout << s2;
    } else {
    cout << s3;
    }
}


void exercise_2(double A, double B, double C) {
    double D = B * B - 4 * A * C ;
    if (D > 0 && A != 0)
    {
         double d_sqrt = sqrt (D);
         double x1 = (-B + d_sqrt)  / (2*A);
         double x2 = (-B - d_sqrt) /  (2*A); 
         cout<<x1<<" "<<x2<<endl;
    }
    else if (D==0 && A != 0)
    {
    double d_sqrt = sqrt (D);
    double x1 = (-B + d_sqrt) / (2*A);
    cout<<x1<<endl;
    }
    else if(A==0 && B!=0)
    {
          cout<< (-1*(C))/B <<endl; 
    }
    else if (A!=0 && B==0 )
    {
        cout<< sqrt (C/A) << endl; 
    }
    else
    {
          cout<<"";
    }

}



void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  if (b == 0)
        cout << "Impossible" << endl;
    else
        cout << a / b << endl;
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
   if (r < 0) {
        cout << "Error: Radio no puede ser negativo" << endl;
    } else {
        double area = 4 * M_PI * r * r;
        cout << area << endl;
    }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
      if (seconds < 0) {
        cout << "Error: Los segundos no pueden ser negativos" << endl;
    } else {
        int hours = seconds / 3600;
        int minutes = (seconds % 3600) / 60;
        int remaining_seconds = seconds % 60;
        cout << hours << ":" << minutes << ":" << remaining_seconds << endl;
    }

}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
   if (a < 0 || b < 0) {
        return 0;
    }

    int sum = a + b;
    int sum_digits = log10(sum) + 1;

    return sum * sum_digits;
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