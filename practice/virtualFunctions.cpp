#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    virtual void getdata() = 0; // Pure virtual function
    virtual void putdata() = 0; // Pure virtual function
    virtual ~Person() {}        // Virtual destructor

    void setName(string n)
    {
        name = n;
    }
    string getName() const
    {
        return name;
    }
    void setAge(int a)
    {
        age = a;
    }
    int getAge() const
    {
        return age;
    }
};

class Professor : public Person
{
private:
    int publications_no;
    int cur_id = 0;

public:
    string n;
    int a;
    int p_no;
    int cid;
    void setPno(int p_no)
    {
        publications_no = p_no;
    }
    int getPno() const
    {
        return publications_no;
    }
    virtual int getCurId()
    {
        return cur_id;
    }
    virtual void setCurId(int cid)
    {
        cur_id = cid + 1;
    }

    virtual void getdata() override
    {
        cin >> n;
        cin >> a;
        cin >> p_no;
        setName(n);
        setAge(a);
        setPno(p_no);
        setCurId(cid);
    }
    virtual void putdata() override
    {
        cout << getName();
        cout << getAge();
        cout << getPno();
        cout << getCurId() << endl;
    };
};

class Student : public Person
{
private:
    int marks[6];
    int cur_id = 0;

public:
    string n;
    int a;
    int m[6];
    int cid;

    void setmarks(int m[6])
    {
        for (int i = 0; i < 6; i++)
        {
            marks[i] = m[i];
        }
        // marks = m;
    }
    int getmarks() const
    {
        // return marks[6];
          int size = sizeof(marks) / sizeof(marks[0]);
                      int sum{};

        for (int i = 0; i < 6; i++)
        {
            sum =+ marks[i];

        }
        return sum;
    }
    virtual int getCurId()
    {
        return cur_id;
    }
    virtual void setCurId(int cid)
    {
        cur_id = cid + 1;
    }

    virtual void getdata() override 
    {
        cin >> n;
        cin >> a;
        // cin >> m;
        // int size = sizeof(m) / sizeof(m[0]);
        for (int i = 0; i < 6; i++)
        {
            cin >> m[i];
        }

        setName(n);
        setAge(a);
        setmarks(m);
        setCurId(cid);
    }
    virtual void putdata() override 
    {
        // int[] mark = getmarks();
        // int sum{0};

        // int size = sizeof(mark) / sizeof(mark[0]);
        // for (int i = 0; i < 6; i++)
        // {
        //     sum = +mark[i];
        // }
        cout << getName();
        cout << getAge();
        cout << getmarks();
        cout << getCurId() << endl;
    }
};
int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
    // Person *per[n];
    vector<Person *> per; // Use vector to manage dynamic memory

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per.push_back(new Professor);
        }
        else if(val == 2)
        {
            per.push_back(new Student);
        }
        // else
        // {
        //     cout << "Invalid input for person type!" << endl;
        //     i--;      // Decrement to retry this iteration
        //     continue; // Skip the rest of this iteration
        // }

        per[i]->getdata(); // Get the data from the user.
    }

    // for (int i = 0; i < n; i++)
    //     per[i]->putdata(); // Print the required output for each object.

    for (Person* p : per) {
        p->putdata(); // Print the required output for each object.
        delete p; // Free allocated memory
    }

    return 0;
}
