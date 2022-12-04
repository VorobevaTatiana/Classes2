
#include <iostream>
#include <string>
#include <windows.h>

class Counter {
private:
   unsigned int count;
public:
    void inc_count(unsigned int count) {
        this->count = count;
        count++;
      
    }
    void dec_count(unsigned int count) {
        this->count = count;
        count--;
    }
    int prt_cout(unsigned int count) {
        this->count = count;
        return count;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    Counter obj = Counter();
    std::string a;
    unsigned int count;
   char s[] = { '+','-','=','x' };
   
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет (Y или N) :";
    std::cin >> a;
    
    if (a != "Да" && a != "да" && a != "Нет" && a != "нет")
    {
        std::cout << "Вводите только да или нет";
        return 1;
    }
    else {
        if (a == "Да" || a == "да") {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> count;
        }
        else count = 1;
        
    }
   do
    {
        std::cout << "введите команду ('+', '-', '=' или 'x'):";
        std::cin >> s;
        if (s=="+") {
            obj.inc_count(count);
         
        }
        else if (s=="-") {
            obj.dec_count(count);
        }
        else if (s=="=") {
            std::cout<<obj.prt_cout(count);
        
        }
    } while (s=="x");
   // return 1;
    

   }

   
        


