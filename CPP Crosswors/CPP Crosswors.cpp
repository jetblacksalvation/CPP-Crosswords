// CPP Crosswors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "parse.h"


std::vector<std::string> chars;

char crosswords[9][9];//the given input was 9 by 9 
int main()
{
    parse_words(chars, "crosswords.txt");
    std::cout << "Hello Crosswords!\n";


    
    int index = 0;
    for (int x = 0; x < chars.size(); x++) {
       //x is less than 81
        if (x % 9 == 0 and x !=0) {
            index++;
        }

        crosswords[x%9][index] = chars[x][0];//copies values, will turn chars into erase 
        
       
  
    }
    chars.clear();//clearing all values
    for (int x = 0; x < 9; x++) {
        for (int f = 0; f < 9; f++) {
            if (crosswords[f][x] == NULL) {//f =0 - x =8 is null
                std::cout << "error - values is null, crossowrds index 1 = " << f << " cross words index 2 = " << x << " is also null\n";
                exit(NULL);
            }
            
        }
    }
    std::vector<std::string> words;
    parse_words(words, "words.txt");

    //end crosswords null chck 
    //start pushing words to words 
}