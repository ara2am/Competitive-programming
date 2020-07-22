#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
	string surname, name, form, birthday;
};

bool compare (Student s1, Student s2)
{
	if (s1.form == s2.form)
	{
		return (s1.surname < s2.surname);
	}

	if (s1.form.length () == s2.form.length ())
	{
		return (s1.form < s2.form);
	}

	return (s1.form.length () < s2.form.length ());
}

int main ()
{
	int n;
	cin >> n;

	vector<Student> students;
	for (int i (0); i < n; i++)
	{
		string surname, name, form, birthday;
		cin >> surname >> name >> form >> birthday;

		students.push_back (Student {surname, name, form, birthday });
	}

	sort (students.begin (), students.end (), compare);

	for (Student s : students)
	{
		cout << s.form << ' ' << s.surname << ' ' << s.name << ' ' << s.birthday << endl;
	}

	return 0;
}