// Student Name : Jason Rodrigues and Brian Widjaja
// Syde 121 Assignment 5
// Filename: a5.cpp, a5_book.cpp, a5_book.h, a5_library.h, a5_library.cpp
//
// I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//Project: Book and Library Sorter
//Creates a book class and library class that allows you to store and remove books from a library
//Due : 2020-11-20

#include <iostream>
#include <vector>
#include "a5_library.h"

using namespace std;

//CONSTRUCTORS (using implicit setters)
Library::Library() {
}

Library::Library(vector<Book> new_books) : books(new_books) {
}

//METHODS

//Prints out all the books in the library
//>Uses the print method from the Book class
void Library::print() {
	for (int i = 0; i < books.size(); i++) {
		cout << "Book " << (i + 1) << ": " << endl;
		books[i].print();
	}
}

//OUTPUT: True if the insertion succeeds and false if the insertion fails
bool Library::insert(string title, string author, string date_of_pub) {
	//Initialize a boolean value that checks whether the insertion happens
	bool insert = true;

	//Initializes a book object that stores the title, author, and date of publication
	Book book(title, author, date_of_pub);

	//Iterates through the vector of books and checks if there is a book with the same values as another book
	for (int i = 0; i < books.size() && insert; i++) {
		if (book.get_title() == books[i].get_title() && book.get_author() == books[i].get_author() && book.get_date_of_pub() == books[i].get_date_of_pub()) {
			insert = false;
		}
	}

	//Inserts the book object into the library object in the last position in the vector if the book doesn't share
	//the same values as another book in the library using push back
	if (insert) {
		books.push_back(book);
	}

	//Returns boolean variable
	return insert;
}

//OUTPUT: True if the insertion succeeds and false if the insertion fails
bool Library::insert(Book book) {
	//Initialize a boolean value that checks whether the insertion happens
	bool insert = true;

	//Iterates through the vector of books and checks if there is a book with the same values as another book
	for (int i = 0; i < books.size() && insert; i++) {
		if (book.get_title() == books[i].get_title() && book.get_author() == books[i].get_author() && book.get_date_of_pub() == books[i].get_date_of_pub()) {
			insert = false;
		}
	}

	//Inserts the book object into the library object in the last position in the vector if the book doesn't share
	//the same values as another book in the library using push back
	if (insert) {
		books.push_back(book);
	}

	//Returns boolean variable
	return insert;
}

//OUTPUT: True if the removal succeeds and false if the removal fails
bool Library::remove(string title, string author, string date_of_pub) {
	//Initialize a boolean value that checks whether the removal happens
	bool remove = false;

	//Iterates through the vector of books and checks if there is a book with the same details as the details provided in the parameters
	for (int i = 0; i < books.size() && !remove; i++) {
		if (title == books[i].get_title() && author == books[i].get_author() && date_of_pub == books[i].get_date_of_pub()) {
			//Removes the book object at the specified element if there exists a book withe same details in the 
			//library using the erase method
			books.erase(books.begin() + i);
			remove = true;
		}
	}

	//Returns boolean variable
	return remove;
}

//OUTPUT: True if the removal succeeds and false if the removal fails
bool Library::remove(Book book) {
	//Initialize a boolean value that checks whether the removal happens
	bool remove = false;

	//Iterates through the vector of books and checks if there is a book with the same details as the details provided in the parameters
	for (int i = 0; i < books.size() && !remove; i++) {
		if (book.get_title() == books[i].get_title() && book.get_author() == books[i].get_author() && book.get_date_of_pub() == books[i].get_date_of_pub()) {
			//Removes the book object at the specified element if there exists a book withe same details in the 
			//library using the erase method
			books.erase(books.begin() + i);
			remove = true;
		}
	}

	//Returns boolean variable
	return remove;
}
