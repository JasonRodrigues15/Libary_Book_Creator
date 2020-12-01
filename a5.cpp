// Student Name : Jason Rodrigues and Brian Widjaja
// Syde 121 Assignment 5
// Filename: a5.cpp, a5_book.cpp, a5_book.h, a5_library.h, a5_library.cpp
//
// I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//Project: Book and Library Sorter
//Creates a book class and library class that allows you to store and remove books from a library
//Due : 2020-11-20

/*
* Tests 
* -Tested a default input for constructor
* -Tested a constructor that only had a title
* -Tested a constructor that only had a title and an author
* -Tested a constructor that has a title, author, and date of publication
* -Tested a book with no title, no author, and no date of publication
* -Tested a book with a title, no author, and no date of publication
* -Tested a book with a title, an author, and no date of publication
* -Tested a book with a title, an author, and a date of publication
* -Tested a book with duplicate title, author, and date of publication
* -Tested a book with separately inputted title, aurthor and date of publication within the insertion
* -Tested the duplication of a book with separately inputted title, author and date of publication within the insertion
* -Tested the removal of an inserted book
* -Tested the removal of a book by manually inserting the title, author and date of publication
* -Tested the removal of an inserted book that had already been removed
* -Tested the removal of a book by manually inserting the title, author and date of publication that had already been removed
* -Tested the removal of a book that did not exist
*/

#include <iostream>
#include <assert.h>
#include "a5_book.h"
#include "a5_library.h"

using namespace std;

//PURPOSE: prints books and their details using the print method
void test_print_book() {
	//Default constructor
	Book book1;
	//Constructor with a title
	Book book2("Diary Of A Wimpy Kid");
	//Constructor with title and author
	Book book3("Zoobreak", "Gordon Korman");
	//Constructor with title, author, and date of publication
	Book book4("Harry Potter and The Goblet of Fire", "J.K. Rowling", "July 2000");
	Book book5("Harry Potter and The Goblet of Fire", "J.K. Rowling", "July 2000");

	//Print individual books:
	book1.print();
	book2.print();
	book3.print();
	book4.print();
}

//PURPOSE: tests whether books can get inserted into the library using the insert method (different parameters)
void test_book_insertion() {
	Library library1;

	//Initialize book objects using different constructors
	//Default constructor
	Book book1;
	//Constructor with a title
	Book book2("Diary Of A Wimpy Kid");
	//Constructor with title and author
	Book book3("Zoobreak", "Gordon Korman");
	//Constructor with title, author, and date of publication
	Book book4("Harry Potter and The Goblet of Fire", "J.K. Rowling", "July 2000");
	Book book5("Harry Potter and The Goblet of Fire", "J.K. Rowling", "July 2000");

	//Insert initialized book object with default constructor
	assert(library1.insert(book1));

	//Insert initialized book object with only a title
	assert(library1.insert(book2));

	//Insert initialized book object with title and author
	assert(library1.insert(book3));

	//Insert initialized book object with title, author, and date of publication
	assert(library1.insert(book4));

	//Insert initialized book object with same details as book 4 (will return false)
	//assert(library1.insert(book5));

	//Insert book using title, author, and date of publication
	assert(library1.insert("Bones Issue 54", "Jeff Smith", "n/a"));

	//Insert book using same title, author, and date of publication as the previous book (will return false) 
	//assert(library1.insert("Bones Issue 54", "Jeff Smith", "n/a"));

	//Prints the book objects in the library
	library1.print();
}

//PURPOSE: tests whether books can get removed from the library using the remove method (different parameters)
void test_book_removal() {
	Library library1;

	//Initialize book objects using different constructors
	Book book6;
	Book book7("Diary Of A Wimpy Kid");
	Book book8("Zoobreak", "Gordon Korman");
	Book book9("Harry Potter and The Goblet of Fire", "J.K. Rowling", "July 2000");
	Book book11("Amulet", "Kazu Kibuishi");

	//Insert same books from method above (test_book_insertion)
	library1.insert(book6);
	library1.insert(book7);
	library1.insert(book8);
	library1.insert(book9);
	library1.insert("Bones Issue 54", "Jeff Smith", "n/a");

	//Remove initialized book object
	assert(library1.remove(book6));

	//Removes book 7 using title, author, and date of publication
	assert(library1.remove("Diary Of A Wimpy Kid", "n/a", "n/a"));

	//Removes book 7 again using title, author, and date of publication (will return false as the book no longer exists)
	//assert(library1.remove("Diary Of A Wimpy Kid", "n/a", "n/a"));

	//Removes book 11 which doesn't exist within the library (will return false)
	//assert(library1.remove(book11));

	//Prints the book objects in the library
	library1.print();
}

//PURPOSE: Runs the two test cases (inserting and removing books)
int main() {
	cout << "Printing individual books: " << endl;
	test_print_book();
	cout << "Inserting books into the library: " << endl;
	test_book_insertion();
	cout << "After removing books from the library: " << endl;
	test_book_removal();
}
