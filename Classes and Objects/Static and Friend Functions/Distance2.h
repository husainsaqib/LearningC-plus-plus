class Distance1;
class Distance2
{
    int feet;
    int inch;
    public:
    Distance2();
    void display();
    friend void add(Distance1,Distance2);

};