#include "includes/Book.cpp"
#include <iostream>

class TragicLibrary
{
private:
    Book *book = new Book("Remy alone in the word.");

public:
    ~TragicLibrary();

    Book *BorrowBook();
    void ReturnBook(Book *book);
};
