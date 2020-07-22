#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student
{
	string surname, name;
	int m;
};

int main ()
{
	int n;
	cin >> n;

	vector<Student> students;
	int m1 (0), m2 (0), m3 (0);
	for (int i (0); i < n; i++)
	{
		string surname, name;
		int a, b, c;
		cin >> surname >> name >> a >> b >> c;

		int mark (a + b + c);
		students.push_back (Student {surname, name, mark});

		if (mark > m1)
		{
			m3 = m2;
			m2 = m1;
			m1 = mark;
		} else if (mark > m2)
		{
			m3 = m2;
			m2 = mark;
		} else if (mark > m3)
		{
			m3 = mark;
		}
	}

	for (Student s : students)
	{
		if (s.m >= m3)
		{
			cout << s.surname << ' ' << s.name << endl;
		}
	}

	return 0;
}