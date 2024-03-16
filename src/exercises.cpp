
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
    if (isupper(character))
        cout << "upper-case alphabet" << endl;
    else if (islower(character))
        cout << "lower-case alphabet" << endl;
    else
        cout << "not an alphabet" << endl;
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch (number) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "sunday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }
}

void exercise_7(double r) {
   //codehere
    if (r>=0)
  {
    cout<< 4*3.14* r*r<<endl;
  }
  else 
  {
    cout << "Error: Radius cannot be negative."<<endl;
  }
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  
}

string exercise_9 (string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
 }

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
     if (a < 0 || b < 0)
        return 0;
    int sum = a + b;
    int digit_count = (sum == 0) ? 1 : (int)log10(abs(sum)) + 1;
    return sum * digit_count;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
     if (number == 11235813){
        return "Se encontro Fibonacci";
    }else
    {
        return "Esto no es de Fibonacci";
    }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
    if ((color1 == "?" || numb1 == -1) ||
        (color2 == "?" || numb2 == -1) ||
        (color3 == "?" || numb3 == -1) ||
        (color4 == "?" || numb4 == -1)) {
        cout << "Invalid input." << endl;
        return;
    }

    bool house1_match = (color1 == color4 || numb1 == numb4);
    bool house2_match = (color2 == color4 || numb2 == numb4);
    bool house3_match = (color3 == color4 || numb3 == numb4);

    if (house1_match) cout << "1" << endl;
    if (house2_match) cout << "2" << endl;
    if (house3_match) cout << "3" << endl;
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
   if (inicio < 0 || inicio > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return;
    }

    if (inicio == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return;
    }

    if (fin < inicio) {
        cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }

    int costo_total = 0;
    int horas_tarifa1 = 0, horas_tarifa2 = 0;

    if (inicio < 7 || (inicio >= 17 && inicio < 24)) {
        horas_tarifa1 = min(7, fin) - max(inicio, 0);
        costo_total += horas_tarifa1 * 1;
    }
    if (inicio < 17 && fin > 7) {
        horas_tarifa2 = min(17, fin) - max(7, inicio);
        costo_total += horas_tarifa2 * 2;
    }

    cout << "Has alquilado una bicicleta por" << endl;
    if (inicio < 7 || (inicio >= 17 && inicio < 24)) {
        cout << horas_tarifa1 << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    }
    if (inicio < 17 && fin > 7) {
        cout << horas_tarifa2 << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    }
    cout << "El monto total a pagar es de " << costo_total << " boliviano(s)." << endl;
}
