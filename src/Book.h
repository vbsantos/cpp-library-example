#pragma once
#include <string>

class Book {
private:
	int id;
	std::string title;
	std::string author;
	std::string category;

public:
	// Constructor
	Book(int id, const std::string& title, const std::string& author, const std::string& category);

	//Getters
	int getId() const;
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getCategory() const;
};
