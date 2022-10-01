#include <iostream>
using namespace std;
class student
{

private:
    char grade , name;
    int i;
    int rollNo , maths , hindi , english;
    int marks;
    int total;
    float per;

    public:
    void setdata()
    {
        cout << "\tEnter name : ";
        cin >> name;
        cout << "\tEnter roll number : ";
        cin >> rollNo;
        cout << "\tEnter maths_marks : ";
        cin >>marks;
        cout << "\tEnter hindi_marks : ";
        cin >>marks;
        cout << "\tEnter english_marks : ";
        cin >>marks;   
    }
    void getdata()
    {
        cout << "\n\tName of student :" << name;
        cout << "\n rollNo :" << rollNo;
        cout << "\n maths :" << maths;
        cout << "\n hindi :" << hindi;
        cout << "\n english :" << english;
         cout << "\n total :" << total;
          cout << "\n per :" << per;
    }
    void calcresult()
    {
        total = maths + hindi + english;
        cout << "\nmaths+hindi+english :" << total;
        per = total / 3;
        cout << "\ntotal/3*100 :" << per;
        if (per > 90)
        {
            grade = 'A';
        }
        else if (per > 75)
        {
            grade = 'B';
        }
        else if (per > 60)
        {
            grade = 'C';
        }
        else if (per > 35)
        {
            grade = 'D';
        }
        else if (per <= 35)
        {
            grade = 'F';
        }
        cout << "\n grade :" << grade;
    }
};
int main()
{
    student obj;
    obj.setdata();
    obj.getdata();
    obj.calcresult();
    return 0;
}
/*#include <iostream>
using namespace std;
class Info
{
    int i, eng, maths, envir, rollno, total;
    float per;
    char grede;

public:
    void setVal()
    {

        cout << " Enter  Rollno :";
        cin >> rollno;
        cout << " Enter  Eng : ";
        cin >> eng;
        cout << " Enter  maths :";
        cin >> maths;
        cout << " Enter  Envir :";
        cin >> envir;
    }
    void getVal()
    {
        cout << "\n Rollno :" << rollno;
        cout << "\n Eng :" << eng;
        cout << "\n Maths :" << maths;
        cout << "\n Envir :" << envir;
    }
    void doSum()
    {
        total = eng + maths + envir;
        cout << "\n Total :" << total;
        per = total / 3;
        cout << "\n Per :" << per;
        if (per > 90)
        {
            grede = 'A';
        }
        else if (per > 75)
        {
            grede = 'B';
        }
        else if (per > 60)
        {
            grede = 'C';
        }
        else if (per > 35)
        {
            grede = 'D';
        }
        else if (per <= 35)
        {
            grede = 'F';
        }
        cout << "\n grade :" << grede;
    }
};
int main()
{
    Info obj1;
    obj1.setVal();
    obj1.getVal();
    obj1.doSum();
}*/