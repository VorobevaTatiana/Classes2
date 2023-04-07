
#include <iostream>
#include <string>
#include <windows.h>

class Counter {
private:
   unsigned int count;
public:
   
  Counter(int count_): count(count_) {
      if (count_ < 0)
          std::cout << "Неправильное число \n";
    }

    void inc_count() {
       
        count++;
      
    }
    void dec_count() {

        count--;
    }
    int prt_cout() {
        
        return count; 
      
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    
     int c;
 
   
  std::string a;
    
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет:";
    std::cin >> a;
    
    if (a != "Да" && a != "да" && a != "Нет" && a != "нет")
    {
        std::cout << "Вводите только да или нет";
        return 1;
    }
    else {
        if (a == "Да" || a == "да") {
            std::cout << "Введите начальное значение счётчика:";
            std::cin >> c;
        }
        else c= 1;
        
    }
    Counter count(c);
  
    while (true) {
        char s;
        std::cout << "введите команду ('+', '-', '=' или 'x'):";
        std::cin >> s;

        switch (s)
        { case '+':
            count.inc_count();
            break;

        case '-':
            count.dec_count();
            break;

        case '=':
          std::cout<< "Показания счетчика:" << count.prt_cout() << "\n";
            break;

        case 'x':
            return 0;

        default:
            std::cout << "Неправильный символ!";
        }
    }
    return 0;
   }

   
        


