#include "Book.h"

Book::Book(int id, const std::string& title, const std::string& author, const std::string& category)
	: id(id), title(title), author(author), category(category), status(BookStatus::Available)
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

BookStatus Book::getStatus() const {
	return status;
}

std::string Book::getStatusText() const {
	switch (status) {
		case BookStatus::Available:
			return "Available";
		case BookStatus::CheckedOut:
			return "CheckedOut";
		case BookStatus::Reserved:
			return "Reserved";
		case BookStatus::Lost:
			return "Lost";
		default:
			return "Unknown";
	}
}

void Book::setStatus(BookStatus newStatus) {
	status = newStatus;
}
