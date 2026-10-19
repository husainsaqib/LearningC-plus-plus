#include"Marks.cpp"
int main()
{   Student s[3];
    for(int i=0;i<3;i++)
    {
        s[i].getDetails();
        char m=s[i].calculateGrade();
        s[i].display();
        std::cout<<"Grade: "<<m<<endl;
    }
}