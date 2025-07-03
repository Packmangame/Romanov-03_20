#include <string>
#include <fstream>
#include <iostream>


using namespace std;
class Car
{
    string name="Audi";
    string nomer="XM908B";
    string vipusk="2025";
    long price=25000000;
public:
    Car(string Name,string Nomer,string Vipusk,long Price)
    {
        name = Name;
        nomer = Nomer;
        vipusk = Vipusk;
        price = Price;
    }

    string WriteOnFile()
    {
        string CarInfo = name + " " + nomer + " " + vipusk + " " + to_string(price);
        fstream file("Cars.txt", ios::app);
        if (!file.is_open())
        {
            return "File is can't open";
           
        }
        file<<CarInfo;
        file.close();
        return "Seccess";
    };
};




int main()
{
    setlocale(LC_ALL, "russ");
    int choice;
    string mark, nomer, vipusk;
    long price;
    while (true)
    {
        std::cout << "Menu\n1.ADD Car\n2.Sorted Car's list\n4.Exit\n";
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Write Car's mark" << std::endl;
            std::cin >> mark;
            std::cout << "Write Car's nomer" << std::endl;
            std::cin >> nomer;
            std::cout << "Write Car's year of manufacture" << std::endl;
            std::cin >> vipusk;
            std::cout << "Write Car's price" << std::endl;
            std::cin >> price;
            Car car(mark, nomer, vipusk, price);
            car.WriteOnFile();
        }
    }
}
