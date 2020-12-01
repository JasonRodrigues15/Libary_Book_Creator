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
#ifndef a5_library
#define a5_library

#include <iostream>
#include <vector>
#include "a5_book.h"
using namespace std;

//Creates a Library class to create a Library object
class Library {
    //Vector variable that stores book objects
    vector<Book> books;

public:
    //PARAMETRIC CONSTRUCTORS

    //PURPOSE: Default constructor
    Library();

    //PURPOSE: Parametric constructor with a vector in the parameters storing book objects
    Library(vector<Book> books);

    //METHODS

    //PURPOSE: Prints the details of every book in the library
    void print();

    //PURPOSE: Inserts the book into the library using the title, author, and date of publication
    bool insert(string title, string author, string date_of_pub);

    //PURPOSE: Inserts the book into the library using an already initialized book object
    bool insert(Book book);

    //PURPOSE: Removes a book from the library using the title, author, and date of publication
    bool remove(string title, string author, string date_of_pub);

    //PURPOSE: Removes a book from the library using an already initialized book object
    bool remove(Book book);
};

#endif