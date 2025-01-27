#include "Library.h"
#include <iostream>

void Library::addBook(int id, const std::string& title, const std::string& author, const std::string& category)
{
	// Create a unique_ptr<Book>
	auto newBook = std::make_unique<Book>(id, title, author, category);

	// Store a raw pointer form quick lookup
	Book* rawPtr = newBook.get();

	// Push into the vector (Library "owns" this Books)
	books.push_back(std::move(newBook));

	// Update categoryMap
	categoryMap[category].push_back(id);
	
	// Update bookLookup
	bookLookup[id] = rawPtr;
}

Book* Library::getBookById(int id) const {
	auto it = bookLookup.find(id);
	if (it != bookLookup.end()) {
		return it->second;
	}
	return nullptr;
}

void Library::printBooksInCategory(const std::string& category) const {
	auto catIt = categoryMap.find(category);
	if (catIt == categoryMap.end()) {
		std::cout << "No books found in category: " << category << "\n";
		return;
	}

	// catIt->second is a vector of book ids
	for (int bookId : catIt->second) {
		const Book* b = getBookById(bookId);
		if (b) {
			std::cout << "[" << b->getId() << "] "
				<< b->getTitle() << " by "
				<< b->getAuthor() << " - "
				<< b->getStatusText()
				<< "\n";
		}
	}
}

void Library::printAllBooks() const {
	std::cout << "All books in the library:\n";
	for (const auto& bookPtr : books) {
		// bootPtr is a unique_ptr<Book>
		const Book* b = bookPtr.get();
		std::cout << "[" << b->getId() << "] "
			<< b->getTitle() << " by "
			<< b->getAuthor()
			<< " (Category: " << b->getCategory()
			<< " - Status: " << b->getStatusText()
			<< ")\n";
	}
}
