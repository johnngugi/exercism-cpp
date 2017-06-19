#include "grade_school.h"
#include <algorithm>
using namespace std;
using namespace grade_school;

map<int, vector<string> > school::roster()
{
	return grades;
}

void school::add(string n, int no)
{
	grades[no].push_back(n);
	sort(grades[no].begin(), grades[no].end());
}

vector<string> school::grade(int n)
{
	return grades[n];
}
