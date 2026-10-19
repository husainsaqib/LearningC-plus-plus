class Distance2;
class Distance1
{
   int meter;
   int cm;
   public:
     Distance1();
     void display();
     friend void add(Distance1,Distance2);
};