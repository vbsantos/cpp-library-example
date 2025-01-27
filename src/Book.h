#pragma once
#include "BookStatus.h"
#include <string>

class Book {
private:
	int id;
	std::string title;
	std::string author;
	std::string category;

	BookStatus status;

public:
	// Constructor
	Book(int id, const std::string& title, const std::string& author, const std::string& category);

	// Getters
	int getId() const;
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getCategory() const;
	BookStatus getStatus() const;
	std::string getStatusText() const;

	// Setters
	void setStatus(BookStatus newStatus);
};
