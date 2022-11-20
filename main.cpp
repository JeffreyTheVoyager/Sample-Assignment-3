#include <iostream>

int main() {
    int i = 0;
    do{
        int choice;
        std::cout << "Please enter " << i << " : ";
        std::cin >> choice;

        if(choice == i){
            std::cout << "Hey! You weren't supposed to enter " << i << std::endl;
            break;
        }

        if(i == 10){
            std::cout << "Wow, you're more patient then I am, you win!" << std::endl;
            break;
        }

        i++;
    }while(true);

    return 0;
}
