// Student Name : Jason Rodrigues and Brian Widjaja
// Syde 121 Assignment 5
// Filename: a5.cpp, a5_book.cpp, a5_book.h, a5_library.h, a5_library.cpp
//
// I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//Project: Book and Library Sorter
//Creates a book class and library class that allows you to store and remove books from a library
//Due : 2020-11-20

#pragma once
#ifndef a5_book
#define a5_book

#include <iostream>
using namespace std;

//Creates a Book class to create Book objects
class Book {
    //Variables for the book class that store the title, author, and date of publication
    string title, author, date_of_pub;
public:
    //PARAMETRIC CONSTRUCTORS

    //PURPOSE: Default constructor
    Book();

    //PURPOSE: Parametric constructor with only the title variable
    Book(string title);

    //PURPOSE: Parametric constructor with the title and author variables
    Book(string title, string author);

    //PURPOSE: Parametric constructor with the title, author, and date of publication variables
    Book(string title, string author, string date_of_pub);

    //METHODS

    //PURPOSE: Get methods that access the respected variables 
    string get_title();
    string get_author();
    string get_date_of_pub();

    //PURPOSE: Prints the title, author and date of publication of the book (if it exists)
    void print();
};
#endif