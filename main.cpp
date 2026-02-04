#include <cmath>
#include <iostream>

void tratar_erro(const std::string &mensagem) {
    std::cin.clear(); // Limpa o estado de erro
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Descarta a entrada inválida
    std::cout << mensagem << std::endl;
}

void converter_graus_radianos(const double PI) {
    double graus;

    bool sucesso = false;
    while (!sucesso) {
        std::cout << "Digite o valor em graus: ";
        std::cin >> graus;
        if (std::cin.fail()) {
            tratar_erro("Entrada inválida.");
            continue;
        }
        const double radianos = graus * (PI / 180.0);
        std::cout << graus << " graus é igual a " << radianos << " radianos." << std::endl;
        sucesso = true;
    }
}

void converter_radianos_graus(const double PI) {
    double radianos;
    bool sucesso = false;
    while (!sucesso) {
        std::cout << "Digite o valor em radianos: ";
        std::cin >> radianos;
        if (std::cin.fail()) {
            tratar_erro("Entrada inválida.");
            continue;
        }
        const double graus = radianos * (180.0 / PI);
        std::cout << radianos << " radianos é igual a " << graus << " graus." << std::endl;
        sucesso = true;
    }
}

int main() {
    setlocale(LC_ALL, ".UTF-8");
    std::cout << "Conversor de Ângulos!" << std::endl;
    const double PI = 4 * std::atan(1);
    bool sair = false;
    do {
        std::cout << " M E N U " << std::endl;
        std::cout << "1 - Converter Graus para Radianos" << std::endl;
        std::cout << "2 - Converter Radianos para Graus" << std::endl;
        std::cout << "3 - Sair" << std::endl;
        std::cout << "Escolha uma opção (1 a 3): ";
        int opcao;
        std::cin >> opcao;
        if (std::cin.fail()) {
            tratar_erro("Entrada inválida.");
            continue; // Pede a opção novamente
        }
        switch (opcao) {
            case 1: {
                converter_graus_radianos(PI);
                break;
            }
            case 2: {
                converter_radianos_graus(PI);
                break;
            }
            case 3:
                std::cout << "Saindo do programa. Até mais!" << std::endl;
                sair = true;
                break;
            default:
                std::cout << "Opção inválida! Por favor, escolha uma opção válida." << std::endl;
        }
    } while (!sair);
    return 0;
}
