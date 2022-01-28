// Project Identifier: 1CAEF3A0FEDD0DEC26BA9808C69D4D22A9962768
//  main.cpp
//  Lab-2
//
//  Created by Laasya Chukka on 1/24/22.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <deque>
#include <utility>
#include <iostream>
#include <getopt.h>
#include "xcode_redirect.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    // insert code here...
    xcode_redirect(argc, argv);
    std::deque<char> stack;
    char temp;
    
    //getline(std::cin, input);
    //std::cout << input;
    while (std::cin){
        char c;
        cin >> c;
        //cout << c;
        
        if (c=='(' || c == '[' || c == '{'){
            stack.push_back(c);
        }
        
        else if (c==')' || c == ']' || c == '}'){
            
            if (stack.size() == 0){
                std::cout << "Not balanced" << endl;
                return 0;
                
                
                
            }
            else if (c == ')'){
                temp = stack.back();
                stack.pop_back();
                if (temp == '[' || temp == '{'){
                    std::cout << "Not balanced" << endl;
                    return 0;
                }
            }
            else if (c == ']'){
                temp = stack.back();
                stack.pop_back();
                if (temp == '(' || temp == '{'){
                    std::cout << "Not balanced" << endl;
                    return 0;
                }
            }
            else if (c == '}'){
                temp = stack.back();
                stack.pop_back();
                if (temp == '[' || temp == '('){
                    std::cout << "Not balanced" << endl;
                    return 0;
                }
            }
            
            
        }
        
        
    }
    if (stack.size() == 0){
        std::cout << "Balanced" << endl;
        
    }
    else{
        std::cout << "Not balanced" << endl;
        
    }
    return 0;
}

