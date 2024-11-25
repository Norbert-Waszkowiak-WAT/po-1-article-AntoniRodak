#include <iostream>
#include <string>
#include "author.cpp"
#include "chapter.cpp"
#include <vector>

class Book{
    private:
        std::string title;
        int publicationYear;
        Author author;
        std::vector chapter;
    public:
        Book()
        : title(""),

}