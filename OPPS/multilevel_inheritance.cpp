
#include <iostream>
#include<string>
using namespace std;

class student
{
protected:
    int roll_no;
    string name;

public:
    void set_roll_no(int);
    void set_name(string);
};
void student :: set_roll_no(int rno)
{
    roll_no = rno;
}
void student :: set_name(string n)
{
    name = n;
}


class marks : public student
{
protected:
    float maths, physics, chemistry;

public:
    void set_marks(float, float, float);
};
void marks :: set_marks(float m,float p,float c)
{
    maths = m;
    physics = p;
    chemistry = c;
}


class result : public marks
{
    public:
    float percentage;
    void display_percentage()
{
    percentage = (maths + physics + chemistry)/3;
    cout << "The percenatage of roll no: " << roll_no
         << ", name: " << name
         << " is: " << percentage << "%" << endl;
}
};


int main()
{
    int rollno,no_of_students;
    string NAME;
    float math_marks,physics_marks,chemistry_marks;
    cout<<"How many no of students are there in th class: "<<endl;
    cin>>no_of_students;
    result res[100];
    for (int i = 0; i < no_of_students; i++)
    {
        cout<<"Enter the roll no"<<endl;
        cin>>rollno;
        res[i].set_roll_no(rollno);
        cout<<"Enter the name of the student"<<endl;
        cin>>NAME;
        res[i].set_name(NAME);
        cout<<"Enter the marks of the student for Math"<<endl;
        cin>>math_marks;
        cout<<"Enter the marks of the student for Physics"<<endl;
        cin>>physics_marks;
        cout<<"Enter the marks of the student for Chemistry"<<endl;
        cin>>chemistry_marks;
        res[1].set_marks(math_marks,physics_marks,chemistry_marks);
    }
    for (int i = 0; i < no_of_students; i++)
    {
        res[i].display_percentage();
    }
    
    
    return 0;
}