#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
	string surname, name;
	int m;
};

bool compare (Student s1, Student s2)
{
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

		students.push_back (Student {surname, name, a + b + c});
	}

	stable_sort (students.begin (), students.end (), compare);

	for (Student s : students)
	{
		if (s.m == students[0].m)
		{
			cout << s.surname << ' ' << s.name << endl;
		} else
		{
			break;
		}
	}

	return 0;
}