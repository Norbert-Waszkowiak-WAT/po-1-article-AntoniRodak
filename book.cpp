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
        : title(""),author(Author()),publicationYear(0){};
        Book(std::string title , Author bookAuthor,int publicationYear,std::vector chapter)
        :title(book.Title),author(bookAuthor),publicationYear(bookpublicationYear){};

       std::string getTitle(){
        return title;
       }
       int getpublicationYear(){
        return publicationYear;
       }
       Author getAuthor(){
        return author;
       }
       std::vector getChapter(){
        return chapter;
       }
       void display(){
        cout<<" book "<<bookTitle<<" by "<<bookAuthor<<" publicated in "<<bookpublicationYear;
       }
}
#endif