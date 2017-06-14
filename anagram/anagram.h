#include <string>
#include <vector>
namespace anagram
{
	class anagram
	{
	public:
		std::string word;
		anagram(std::string w) : word(w) {};
		std::vector<std::string> matches(std::vector<std::string> v);
	};
}