#include <iostream>

using namespace std;

// Função para calcular a tensão de saída do divisor de tensão
double calcularDivisorTensao(double Vin, double R1, double R2) {
    return Vin * (R2 / (R1 + R2));
}

int main() {
    double Vin, R1, R2;
    
    cout << "Digite a tensão de entrada (Volts): ";
    cin >> Vin;
    
    cout << "Digite o valor de R1 (ohms): ";
    cin >> R1;
    
    cout << "Digite o valor de R2 (ohms): ";
    cin >> R2;
    
    if (R1 <= 0 || R2 <= 0) {
        cout << "Os valores dos resistores devem ser positivos." << endl;
        return 1;
    }
    
    double Vout = calcularDivisorTensao(Vin, R1, R2);
    cout << "A tensão de saída é: " << Vout << " Volts" << endl;
    
    return 0;
}
