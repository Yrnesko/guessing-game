#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <locale>   
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int userGuess;

    cout << "Игра 'Угадай число'!\n";
    cout << "Я загадал число от 1 до 100. Попробуй угадать его!\n";


    while (true) {
        cout << "Введите ваше предположение: ";
        cin >> userGuess;


        if (!cin) {
            cout << "Пожалуйста, введите корректное число!\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        if (userGuess > secretNumber) {
            cout << "Слишком большое число! Попробуйте еще раз.\n";
        }
        else if (userGuess < secretNumber) {
            cout << "Слишком маленькое число! Попробуйте еще раз.\n";
        }
        else {
            cout << "Поздравляем! Вы угадали число!\n";
            break;
        }
    }

    return 0;
}
