
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
   if (seconds < 0) {
        cout << "Error: Input seconds cannot be negative." << endl;
        return;
    }

    int hours = seconds / 3600;
    int remaining_seconds = seconds % 3600;
    int minutes = remaining_seconds / 60;
    int remaining_seconds_final = remaining_seconds % 60;

    // Output the result in the format HH:MM:SS
    if (hours < 10)
        cout << "0" << hours << ":";
    else
        cout << hours << ":";
    
    if (minutes < 10)
        cout << "0" << minutes << ":";
    else
        cout << minutes << ":";

    if (remaining_seconds_final < 10)
        cout << "0" << remaining_seconds_final << endl;
    else
        cout << remaining_seconds_final << endl;
}

string exercise_9 (string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return"";
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
     bool match1 = (color1 == color4 || color4 == "?") && (numb1 == numb4 || numb4 == -1);
     bool match2 = (color2 == color4 || color4 == "?") && (numb2 == numb4 || numb4 == -1);
     bool match3 = (color3 == color4 || color4 == "?") && (numb3 == numb4 || numb4 == -1);
    
    // Mostrar los números de las casas que coinciden con el testimonio
     if (match1) cout << "1" << endl;
     if (match2) cout << "2" << endl;
     if (match3) cout << "3" << endl;
  }

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  cin>> age;
  cin >> years_of_experience;
  if (age>=18 && years_of_experience>=5)
  {
    return"Senior project manager";
  } 
  else if (age>=18 && years_of_experience>=3)
  {
    return"Project manager";
  } 
  else if (age>=18)
  {
    return"Project coordinator";
  } 
  else
  {
    return"Not eligible";
  } 
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
       if (number_of_docs < 0) {
        return "No se encontraron documentos";
    } else if (number_of_docs == 0) {
        return "No se encontraron documentos";
    } else if (number_of_docs == 1) {
        return "Se encontro un documento";
    } else {
        return to_string(number_of_docs) + " documentos encontrados";
    } 
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
    cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << endl;
    cout << "Permutamos: a => b, b => c, c => a" << endl;
    
    int temp = a;
    a = c;
    c = b;
    b = temp;

    cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;

}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}



