#include <string>
#include <vector>
#include <map>

namespace grade_school
{
	class school
	{
		std::map<int, std::vector<std::string> > grades;
	public:
		std::map<int, std::vector<std::string> > roster();
		void add(std::string, int);
		std::vector<std::string> grade(int);
	};
}