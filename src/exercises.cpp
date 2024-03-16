
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
  // TODO: YOUR CODE HERe
}

string exercise_9 (string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
     if (a < 0 || b < 0){
          return 0;
     }
    int sum = a + b;
    int digit_count = (sum == 0) ? 1 : (int)log10(abs(sum)) + 1;
    return sum * digit_count;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  int fib_prev = 0;
    int fib_curr = 1;

    if (number == 0 || number == 1) {
        return "Se encontro Fibonacci";
    }

    while (fib_curr <= number) {
        if (fib_curr == number) {
            return "Se encontro Fibonacci";
        }
        
        int next = fib_prev + fib_curr;
        fib_prev = fib_curr;
        fib_curr = next;
    }

  return "Esto no es de Fibonacci";
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
  // Verificar si las horas están dentro del rango de 0 a 24
    if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        cout << "Las horas deben estar entre 0 y 24!\n";
        return;
    }
    
    // Verificar si la hora de inicio es igual a la hora de finalización
    if (debut == fin) {
        cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!\n";
        return;
    }
    
    // Verificar si la hora de inicio es posterior a la hora de finalización
    if (debut > fin) {
        cout << "Que extraño, el inicio del alquiler es después del final...\n";
        return;
    }
    
    // Calcular el costo del alquiler
    int costo = 0;
    for (int hora = debut; hora < fin; ++hora) {
        if ((hora >= 0 && hora < 7) || (hora >= 17 && hora <= 24)) {
            costo += 1; // Tarifa de 1 bs/hora
        } else {
            costo += 2; // Tarifa de 2 bs/hora
        }
    }
    
    // Mostrar el costo del alquiler
    cout << "Haz alquilado una bicicleta por\n" << (fin - debut) << " hora(s) ";
    cout << "con el tarifario de " << ((costo == (fin - debut)) ? "1" : "2") << " boliviano(s)\n";
    cout << "El monto total a pagar es de " << costo << " boliviano(s).\n";
}

