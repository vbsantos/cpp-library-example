#include "src/Library.h"
#include <iostream>

int main() {
  Library lib;

  lib.addBook(0, "Introduction to Algorithms", "Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein", "Programming");
  lib.addBook(1, "Effective Modern C++", "Scott Meyers", "Programming");
  lib.addBook(2, "Clean Code", "Robert C. Martin", "Programming");
  lib.addBook(3, "The Pragmatic Programmer", "Andrew Hunt and David Thomas", "Programming");
  lib.addBook(4, "Code Complete", "Steve McConnell", "Programming");
  lib.addBook(5, "Design Patterns", "Erich Gamma et al.", "Programming");
  lib.addBook(6, "The Eye of the World", "Robert Jordan", "Fantasy");
  lib.addBook(7, "The Great Hunt", "Robert Jordan", "Fantasy");
  lib.addBook(8, "The Dragon Reborn", "Robert Jordan", "Fantasy");
  lib.addBook(9, "The Shadow Rising", "Robert Jordan", "Fantasy");
  lib.addBook(10, "The Fires of Heaven", "Robert Jordan", "Fantasy");
  lib.addBook(11, "Lord of Chaos", "Robert Jordan", "Fantasy");
  lib.addBook(12, "A Crown of Swords", "Robert Jordan", "Fantasy");
  lib.addBook(13, "The Path of Daggers", "Robert Jordan", "Fantasy");
  lib.addBook(14, "Winter's Heart", "Robert Jordan", "Fantasy");
  lib.addBook(15, "Crossroads of Twilight", "Robert Jordan", "Fantasy");
  lib.addBook(16, "Knife of Dreams", "Robert Jordan", "Fantasy");
  lib.addBook(17, "The Gathering Storm", "Robert Jordan & Brandon Sanderson", "Fantasy");
  lib.addBook(18, "Towers of Midnight", "Robert Jordan & Brandon Sanderson", "Fantasy");
  lib.addBook(19, "A Memory of Light", "Robert Jordan & Brandon Sanderson", "Fantasy");

  // Print all books
  lib.printAllBooks();

  // Lookup by ID
  int searchId1 = 2;
  Book* foundBook1 = lib.getBookById(searchId1);
  if (foundBook1) {
    std::cout << "\n";
    if (foundBook1->getStatus() == BookStatus::Available) {
      foundBook1->setStatus(BookStatus::Reserved);
      std::cout << "Book '" << foundBook1->getTitle() << "' is now reserved.\n";
    }
    else {
      std::cout << "Book '" << foundBook1->getTitle() << "' is not available.\n";
    }
  }

  // Checkout Book
  int searchId2 = 3;
  Book* foundBook2 = lib.getBookById(searchId2);
  if (foundBook2) {
    std::cout << "\n";
    if (foundBook2->getStatus() == BookStatus::Available) {
      foundBook2->setStatus(BookStatus::CheckedOut);
      std::cout << "Book '" << foundBook2->getTitle() << "' is now checked out.\n";
    }
    else {
      std::cout << "Book '" << foundBook2->getTitle() << "' is not available.\n";
    }
  }

  // Print books by category
  std::cout << "\nBooks in 'Programming' category:\n";
  lib.printBooksInCategory("Programming");

  // wait for user to press a key
	std::cin.get();

  return 0;
}
