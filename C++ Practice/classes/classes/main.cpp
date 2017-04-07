#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student 
{
    private:
        int age;
        string firstname;
        string lastname;
        int standard;
    public:
        void set_standard(int _standard) {standard = _standard;}
        void set_first_name(string _firstname ) {firstname = _firstname;}
        void set_last_name(string _lastname) {lastname = _lastname;}
        void set_age(int _age) {age = _age;}
        int get_standard(void) {return standard;}
        string get_first_name(void ) {return firstname;}
        string get_last_name(void) {return lastname ;}
        int get_age(void) {return age;}
        string to_string(void)
            {
                string tmp;
                stringstream ss("");
                ss <<age<<","<<firstname<<","<<lastname<<","<<standard;
                ss>>tmp;
                return tmp;
            }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

