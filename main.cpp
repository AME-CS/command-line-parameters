/*
 * This is a simple program that displays the number of command line parameters and the string length of each command line parameter in C++.
 * Note the header structure and files.
 * The only thing included here is main.h
 * main.h contains all other directives 
 */
/* 
 * File:   main.cpp
 * Author: Ahmed Eid
 */

#include "main.h"

int main(int argc, char** argv) {
    std::cout << "My Command line analyzer.." << std::endl;
    std::cout << "The number of command line parameters are: " << argc << std::endl;

    if(argc > 0){
        std::cout << "The length of the name of the program is: " << string_length(argv[0]) << std::endl;
    }
    for(int i=1 ; i< argc; i++){
        std::cout << "The length of the parameter " << i << " is " << string_length(argv[i]) << std::endl;
    }   	
    return 0;
}
    
