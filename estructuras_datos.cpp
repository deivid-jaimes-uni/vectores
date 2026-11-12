#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// 1. Arreglo unidimensional (vector)
void trabajarVector() {
    int cantidad;
    cout << "\n--- ARREGLO UNIDIMENSIONAL ---\n";
    cout << "Cuantos numeros desea ingresar? ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que cero.\n";
        return;
    }

    vector<int> numeros(cantidad);
    for (int i = 0; i < cantidad; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Elementos del vector: ";
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;
}

// 2. Arreglo bidimensional (matriz)
void trabajarMatriz() {
    const int FILAS = 2;
    const int COLUMNAS = 2;
    int matriz[FILAS][COLUMNAS];

    cout << "\n--- ARREGLO BIDIMENSIONAL ---\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << "Ingrese el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz ingresada:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

// 3. Funcion para calcular el area de un rectangulo
float calcularArea(float base, float altura) {
    return base * altura;
}

void ejemploFuncion() {
    float base;
    float altura;

    cout << "\n--- CALCULAR AREA ---\n";
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    cout << "El area del rectangulo es: "
         << calcularArea(base, altura) << endl;
}

// 4. Registro (struct)
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

void trabajarRegistro() {
    Estudiante estudiante;

    cout << "\n--- REGISTRO DE UN ESTUDIANTE ---\n";
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin >> ws, estudiante.nombre);

    cout << "Ingrese la edad: ";
    cin >> estudiante.edad;

    cout << "Ingrese el promedio: ";
    cin >> estudiante.promedio;

    cout << "\nDatos del estudiante:\n";
    cout << "Nombre: " << estudiante.nombre << endl;
    cout << "Edad: " << estudiante.edad << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
}

// 5. Combinacion de vectores, funciones y registros
void registrarEstudiantes() {
    const int CANTIDAD = 3;
    Estudiante estudiantes[CANTIDAD];
    float sumaPromedios = 0;

    cout << "\n--- COMBINACION DE ESTRUCTURAS ---\n";

    for (int i = 0; i < CANTIDAD; ++i) {
        cout << "\nEstudiante " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin >> ws, estudiantes[i].nombre);

        cout << "Edad: ";
        cin >> estudiantes[i].edad;

        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;

        sumaPromedios += estudiantes[i].promedio;
    }

    cout << "\nListado de estudiantes:\n";
    for (int i = 0; i < CANTIDAD; ++i) {
        cout << "\nNombre: " << estudiantes[i].nombre
             << "\nEdad: " << estudiantes[i].edad
             << "\nPromedio: " << estudiantes[i].promedio << endl;
    }

    cout << "\nPromedio general del grupo: "
         << sumaPromedios / CANTIDAD << endl;
}

int main() {
    int opcion;

    do {
        cout << "\n========== MENU DE ESTRUCTURAS DE DATOS ==========\n";
        cout << "1. Arreglo unidimensional (vector)\n";
        cout << "2. Arreglo bidimensional (matriz)\n";
        cout << "3. Funcion para calcular area\n";
        cout << "4. Registro de un estudiante (struct)\n";
        cout << "5. Combinar arreglos, funciones y registros\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";

        if (!(cin >> opcion)) {
            cout << "Entrada no valida.\n";
            return 1;
        }

        switch (opcion) {
            case 1:
                trabajarVector();
                break;
            case 2:
                trabajarMatriz();
                break;
            case 3:
                ejemploFuncion();
                break;
            case 4:
                trabajarRegistro();
                break;
            case 5:
                registrarEstudiantes();
                break;
            case 0:
                cout << "\nPrograma finalizado.\n";
                break;
            default:
                cout << "\nOpcion no valida. Intente nuevamente.\n";
        }
    } while (opcion != 0);

    return 0;
}
