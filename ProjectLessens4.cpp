#include <iostream>

int main()
{   
    std::cout << "Work item 1" << std::endl;
    int a, b;
    std::cout << "enter 2 integers a and b" << std::endl;
    std::cin >> a; 
    std::cin >> b;
    if ((a + b) < 10)
    {
        std::cout << "false" << std::endl;
    }
    else if((a + b)>20)
    {
        std::cout << "false" << std::endl;
    }
    else
    {
        std::cout << "true" << std::endl;
    }


    std::cout << "Work item 2" << std::endl;
    
    const int z = 10, x = -10;
    if (z == 10 and x == 10)
    {
        std::cout << "true" << std::endl;
    }
    else if (z + x == 10)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    
    
    std::cout << "Work item 3" << std::endl;
    int i = 1;
    while (i < 50) // вывод списка чисел с помощью while
    {
        std::cout << i << " ";
        i= i+2;
    }
    std::cout << std::endl ;
    i = 1; 
    do { // вывод списка чисел с помощью do while
        std::cout << i << " ";
        i=i+2;
    } while (i < 50);
    std::cout << std::endl;


    std::cout << "Work item 4" << std::endl;
    int proA;
    std::cout << "Eter integer"<< std::endl;
    std::cin >> proA;
    int schetA;
    if (proA = 0 || proA = 1);
    {
        std::cout << "Simple integer" << std::endl;
    }
    else 
    {
        for (schetA = 2; schetA < (proA - 1); schetA++);
    }
        {
        if (schetA % proA == 0)
            std::cout << "Simple integer" << std::endl;
        else
            std::cout << "Not Simple integer" << std::endl;
    
    }

    return 0;
}