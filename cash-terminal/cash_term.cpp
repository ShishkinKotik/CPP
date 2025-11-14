/*
если написать огромную цену то будет большой большой трындец 
который можно прервать нажав ctrl + C или выйти из терминала с помощью ctrl + D
*/
#include <iostream>
#include <string>

#define T_RED "\033[38;2;255;0;0m"
#define T_GREEN "\033[38;2;0;255;0m"
#define T_BLUE "\033[38;2;0;0;255m"
#define T_YELLOW "\033[38;2;255;255;0m"
#define T_CYAN "\033[38;2;0;255;255m"
#define T_RESET "\033[0m"
#define T_MAGENTA "\033[0;35m"

using namespace std;

void commands()
{
    string frstln = T_MAGENTA ".___________________." T_RESET;
    string scndln = T_MAGENTA "|                   |" T_RESET;
    string thrdln = T_MAGENTA "|[$$cash Terminal$$]|" T_RESET;
    string frthln = T_MAGENTA "|___________________|" T_RESET;
    cout << frstln << endl;
    cout << scndln << endl;
    cout << thrdln << endl;
    cout << frthln << endl;

    string com;
    while (true)
    {
	    cout << "saller~$: ";
        cin >> com;
        if (com == "sum") {
            uint price;
            uint numberOfbuys;
            cout << "введите количество товаров: " << endl;
            cin >> numberOfbuys;
            if (numberOfbuys == 1) {
                cout << "введите цену первого товара: " << endl;
                cin >> price;

                cout << "итого: [ " << price << "руб]" << endl;
            }

            if (numberOfbuys == 2) {
                uint _price;
                cout << "впешите цену первого товара: " << endl;
                cin >> price;

                cout << "впешите цену второго товара" << endl;
                cin >> _price;

                cout << "итого: [ " << price + _price << " руб]" << endl;
            }

            if (numberOfbuys == 3) {
                uint price_2, price_3;
                cout << "впешите цену первого товара: " << endl;
                cin >> price;

                cout << "впешите цену второго товара: " << endl;
                cin >> price_2;

                cout << "впешите цену третьего товара: " << endl;
                cin >> price_3;

                cout << "итого: [ " <<  price + price_2 + price_3 << "руб]" << endl;
            }

            if (numberOfbuys == 4) {
                uint _price_2, _price_3, price_4;

                cout << "впешите цену первого товара: " << endl;
                cin >> price;

                cout << "впешите цену второго товара: " << endl;
                cin >> _price_2;

                cout << "впешите цену третьего товара: " << endl;
                cin >> _price_3;

                cout << "впешите цену четвёртого товара: " << endl;
                cin >> price_4;

                cout << "итого: [ " << price + _price_2 + _price_3 + price_4 << "руб]" << endl;
            }

            if (numberOfbuys == 5) {
                uint Prise_2, Prise_3, Prise_4, Prise_5;

                cout << "впешите первое число: " << endl;
                cin >> price;

                cout << "" << endl;
                cin >> Prise_2;

                cout << "" << endl;
                cin >> Prise_3;

                cout << "" << endl;
                cin >> Prise_4;

                cout << "" << endl;
                cin >> Prise_5;

                cout << "итого: [ " << price + Prise_2 + Prise_3 + Prise_4 + Prise_5 << " руб]" << endl;
            }
            else {
                cout << "hehe" << endl;
            }
        }
        if (com == "help") {
            cout << "[все команды]" << endl;
            cout << "1.sum - [ввод цен и количество товара и получение коечной суммы]" << endl;
            cout << "2.help - [показывает все команды]" << endl;
            cout << "3.exit - [выход из программы]" << endl;
        }
        if (com == "exit") {
            break;
        }
        else {
            cout << "[end command]" << endl;
        }
    }
}

int main()
{
    commands();
    return 0;
}
