#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
	int id;
	string surname, name;
	int m;
};

bool compare (Student s1, Student s2)
{
	if (s1.m == s2.m)
	{
		return (s1.id < s2.id);
	}

	return (s1.m > s2.m);
}

int main ()
{
	int n;
	cin >> n;

	vector<Student> students;
	for (int i (0); i < n; i++)
	{
		string surname, name;
		int a, b, c;
		cin >> surname >> name >> a >> b >> c;

		students.push_back (Student {i, surname, name, a + b + c});
	}

	sort (students.begin (), students.end (), compare);

	for (Student s : students)
	{
		cout << s.surname << ' ' << s.name << endl;
	}

	return 0;
}