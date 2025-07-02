#include <iostream>
#include <cmath>
using namespace std;

// Superclase abstracta
class Figura {
protected:
    string nombre;

public:
    void establecerNombre(string n) {
        nombre = n;
    }

    string obtenerNombre() {
        return nombre;
    }

    virtual void establecerDatos() = 0;
    virtual double calcularVolumen() = 0;
};

// Subclase Cubo
class Cubo : public Figura {
private:
    double arista;

public:
    void establecerDatos() override {
        cout << "Introduce la longitud de la arista del cubo: ";
        cin >> arista;
        establecerNombre("Cubo");
    }

    double calcularVolumen() override {
        return pow(arista, 3);
    }
};

// Subclase Cilindro
class Cilindro : public Figura {
private:
    double radio, altura;

public:
    void establecerDatos() override {
        cout << "Introduce el radio del cilindro: ";
        cin >> radio;
        cout << "Introduce la altura del cilindro: ";
        cin >> altura;
        establecerNombre("Cilindro");
    }

    double calcularVolumen() override {
        return M_PI * pow(radio, 2) * altura;
    }
};

// Subclase Cono
class Cono : public Figura {
private:
    double radio, altura;

public:
    void establecerDatos() override {
        cout << "Introduce el radio del cono: ";
        cin >> radio;
        cout << "Introduce la altura del cono: ";
        cin >> altura;
        establecerNombre("Cono");
    }

    double calcularVolumen() override {
        return (M_PI * pow(radio, 2) * altura) / 3.0;
    }
};

// Subclase Esfera
class Esfera : public Figura {
private:
    double radio;

public:
    void establecerDatos() override {
        cout << "Introduce el radio de la esfera: ";
        cin >> radio;
        establecerNombre("Esfera");
    }

    double calcularVolumen() override {
        return (4.0 / 3.0) * M_PI * pow(radio, 3);
    }
};

// Clase controladora
class Controlador {
public:
    void mostrarMenu() {
        int opcion;

        do {
            cout << "\nAREAS FIGURAS GEOMETRICAS:\n";
            cout << "1. CUBO\n";
            cout << "2. CILINDRO\n";
            cout << "3. CONO\n";
            cout << "4. ESFERA\n";
            cout << "5. FIN\n";
            cout << "ESCOGER OPCIÓN: ";
            cin >> opcion;

            switch (opcion) {
                case 1: {
                    Cubo cubo;
                    cubo.establecerDatos();
                    cout << "Figura: " << cubo.obtenerNombre() << endl;
                    cout << "Volumen: " << cubo.calcularVolumen() << endl;
                    break;
                }
                case 2: {
                    Cilindro cilindro;
                    cilindro.establecerDatos();
                    cout << "Figura: " << cilindro.obtenerNombre() << endl;
                    cout << "Volumen: " << cilindro.calcularVolumen() << endl;
                    break;
                }
                case 3: {
                    Cono cono;
                    cono.establecerDatos();
                    cout << "Figura: " << cono.obtenerNombre() << endl;
                    cout << "Volumen: " << cono.calcularVolumen() << endl;
                    break;
                }
                case 4: {
                    Esfera esfera;
                    esfera.establecerDatos();
                    cout << "Figura: " << esfera.obtenerNombre() << endl;
                    cout << "Volumen: " << esfera.calcularVolumen() << endl;
                    break;
                }
                case 5:
                    cout << "Fin del programa.\n";
                    break;
                default:
                    cout << "Opción no válida. Intente de nuevo.\n";
            }
        } while (opcion != 5);
    }
};

// Función principal
int main() {
    Controlador controlador;
    controlador.mostrarMenu();
    return 0;
}
