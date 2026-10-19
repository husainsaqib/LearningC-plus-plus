class Library
{
    private:
        int bookID;
        char title[20];
        char author[20];
        bool availability;
    public:
    void get();
    void issueBook();
    void returnBook();
    void display();

    

};