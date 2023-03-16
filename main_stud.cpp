#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    Student(string n, string s, int no){
        name = n;
        surname = s;
        album_no = no;
    }
    void set_name(string n, string s){
        name = n;
        surname = s;
    }
    void set_album_no(int n){
        album_no = n;
    }
    void add_grade(int g){
        if(g >= 2.0 && g <= 5.0)
            grades.push_back(g);
        else
            cout << "Invalid grade!" << endl;
    }
    string f_name(){
        return name + " " + surname;
    }
    string student_sum(){
        cout << name << " " << surname << " " << album_no << endl;
        for(int i = 0; i < grades.size(); i++)
            cout << grades[i] << " ";
        return "\n";
    }
    float m_grade(){
        return accumulate(grades.begin(), grades.end(), 0.0) / grades.size();
    }
    string passed(){
        if(count(grades.begin(), grades.end(), 2.0) > 1)
            cout << "Failed :(";
        else
            cout << "Passed!";
        return "\n";
    }
private:
    string name;
    string surname;
    int album_no;
    vector<float> grades;
};

int main(){
    Student s1("Jan", "Kowalski", 112332);
    for(int i = 2; i < 5; i++)
        s1.add_grade(i);
    cout << s1.student_sum();
    cout << s1.m_grade() << endl;
    cout << s1.passed();
    return 0;
}