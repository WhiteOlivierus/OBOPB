#include "includes/TragicLibrary.h"

TragicLibrary::~TragicLibrary()
{
    delete book;
}

Book *TragicLibrary::BorrowBook()
{
    if (book != nullptr)
    {
        Book *bookToBorrow = book;
        book = nullptr;

        std::cout << bookToBorrow->GetName() << " has been borrowed." << std::endl;
        return bookToBorrow;
    }
    else
    {
        std::cout << "No book to borrow." << std::endl;
        return NULL;
    }
}

void TragicLibrary::ReturnBook(Book *book)
{
    TragicLibrary::book = book;
}