// Filename: a5.cpp, a5_book.cpp, a5_book.h, a5_library.h, a5_library.cpp
//
//Project: Book and Library Sorter
//Creates a book class and library class that allows you to store and remove books from a library
//Date : 2020-11-20

#include <iostream>
#include "a5_book.h"

using namespace std;

//CONSTRUCTORS (using implicit setters)
Book::Book() : title("n/a"), author("n/a"), date_of_pub("n/a") {
}

Book::Book(string new_title) : title(new_title), author("n/a"), date_of_pub("n/a") {
}

Book::Book(string new_title, string new_author) : title(new_title), author(new_author), date_of_pub("n/a") {
}

Book::Book(string new_title, string new_author, string new_date_of_pub) : title(new_title), author(new_author), date_of_pub(new_date_of_pub) {
}

//METHODS

//Returns the book's title
string Book::get_title() {
    return title;
}
//Returns the book's author
string Book::get_author() {
    return author;
}
//Returns the book's date of publication
string Book::get_date_of_pub() {
    return date_of_pub;
}

//Prints out the book's title, author and date of publication
//if the value isn't provided --> cout << "n/a" 
void Book::print() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Date of publication: " << date_of_pub << endl;
    cout << endl;
}