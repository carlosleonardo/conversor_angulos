#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "pt-br.UTF-8");
    std::cout << "Conversor de Ângulos" << std::endl;
    bool sair = false;
    const double PI = 4 * std::atan(1.0);
    do {
        std::cout << "Escolha a conversão desejada:" << std::endl;
        std::cout << "1 - Graus para Radianos" << std::endl;
        std::cout << "2 - Radianos para Graus" << std::endl;
        std::cout << "0 - Sair" << std::endl;
        int escolha;
        std::cin >> escolha;
        if (std::cin.fail()) {
            std::cin.clear(); // Limpa o estado de falha
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta a entrada inválida
            std::cout << "Entrada inválida. Tente novamente." << std::endl;
            continue;
        }
        switch (escolha) {
            case 1: {
                double graus;
                std::cout << "Digite o valor em graus: ";
                std::cin >> graus;
                double radianos = graus * PI / 180.0;
                std::cout << graus << " graus equivalem a " << radianos << " radianos." << std::endl;
                break;
            }
            case 2: {
                double radianos;
                std::cout << "Digite o valor em radianos: ";
                std::cin >> radianos;
                double graus = radianos * 180.0 / PI;
                std::cout << radianos << " radianos equivalem a " << graus << " graus." << std::endl;
                break;
            }
            case 0:
                std::cout << "Encerrando o programa." << std::endl;
                sair = true;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }
    } while (!sair);
    return 0;
}
