// pract2var5(4).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Rectangle {
private:
    double width;
    double height;
public:
    double SetWidth(double wd) {
       this->width=wd;
       return width;
    }
    double SetHeight(double hg) {
        this->height = hg;
        return height;
    }
    double AreaCalculation() {
        double area = 0;
        area = width * height;
        std::cout << "Your area " << area;
        return area;
    }
};

int main()
{
    Rectangle rctg;
    double wd;
    double hg;
    std::cout << "Enter width\n";
    std::cin >> wd;
    rctg.SetWidth(wd);
    std::cout << "Enter height\n";
    std::cin >> hg;
    rctg.SetHeight(hg);
    rctg.AreaCalculation();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
