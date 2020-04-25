//
//  main.cpp
//  etch-a-sketch
//
//  Created by Cole Zich on 4/25/20.
//  Copyright © 2020 Cole Zich. All rights reserved.
//

#include <iostream>

int main() {
    const char up = 65;
    const char down = 66;
    const char left = 68;
    const char right = 67;
    char keyPressed;
    
    std::cout << "Press Key (up, down, left, right)\n";
    std::cout << "_________________________________\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|                               |\n";
    std::cout << "|_______________________________|\n";
    
    for (int i = 0; i < 500; i++) {
        std::cin >> keyPressed;
        
        if (i == 499) {
            std::cout << "_________________________________\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|                               |\n";
            std::cout << "|_______________________________|\n";
        } else if (up == keyPressed) {
            std::cout << ".";
        }
        
        
    }
}
