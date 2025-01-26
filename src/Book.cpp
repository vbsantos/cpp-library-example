#include "Book.h"

Book::Book(int id, const std::string& title, const std::string& author, const std::string& category)
	: id(id), title(title), author(author), category(category)
{
}

int Book::getId() const {
	return id;
}

std::string Book::getTitle() const {
	return title;
}

std::string Book::getAuthor() const {
	return author;
}

std::string Book::getCategory() const {
	return category;
}
