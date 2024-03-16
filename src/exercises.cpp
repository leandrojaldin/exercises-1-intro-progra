
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
  const int tarifa_baja = 1; // Tarifa por hora en el rango de 00:00 a 07:00 y de 17:00 a 24:00
    const int tarifa_alta = 2; // Tarifa por hora en el rango de 07:00 a 17:00
    
    int horas_baja = 0, horas_alta = 0;

    // Si las horas de inicio o fin están fuera del rango de 0 a 24, mostrar un mensaje de error y salir
    if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!" << endl;
        return;
    }

    // Calcular el número de horas en el rango de 00:00 a 07:00 y de 17:00 a 24:00
    if (debut >= 0 && debut < 7)
        horas_baja += min(7, fin) - debut;
    if (fin > 17 && fin <= 24)
        horas_baja += fin - 17;

    // Calcular el número de horas en el rango de 07:00 a 17:00
    if (debut >= 7 && fin <= 17)
        horas_alta += fin - debut;
    else if (debut < 17 && fin > 7)
        horas_alta += min(17, fin) - 7;

    // Calcular el costo total del alquiler
    int costo_total = horas_baja * tarifa_baja + horas_alta * tarifa_alta;

    // Si las horas de inicio son iguales a las horas de fin, mostrar un mensaje de error
    if (debut == fin) {
        cout << "¡Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
        return;
    }

    // Si las horas de inicio son mayores que las horas de fin, mostrar un mensaje de error
    if (debut > fin) {
        cout << "¡Que extraño, el inicio del alquiler es después del final..." << endl;
        return;
    }
}
