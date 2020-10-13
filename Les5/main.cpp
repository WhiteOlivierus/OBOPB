#include "includes/TragicLibrary.cpp"

int main(int argc, char const *argv[])
{
    TragicLibrary *library = new TragicLibrary();

    Book *borrowedBook = library->BorrowBook();

    Book *tryBorrowBook = library->BorrowBook();

    library->ReturnBook(borrowedBook);

    tryBorrowBook = library->BorrowBook();

    library->ReturnBook(borrowedBook);

    delete library;

    return 0;
}
