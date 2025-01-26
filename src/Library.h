#pragma once
#include "Book.h"
#include <memory>
#include <vector>
#include <map>
#include <unordered_map>

class Library {
private:
	std::vector<std::unique_ptr<Book>> books;
	std::map<std::string, std::vector<int>> categoryMap;
	std::unordered_map<int, Book*> bookLookup;

public:
	void addBook(int id, const std::string& title, const std::string& author, const std::string& category);
	Book* getBookById(int id) const;
	void printBooksInCategory(const std::string& category) const;
	void printAllBooks() const;
};
