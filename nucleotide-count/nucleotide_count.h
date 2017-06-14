#include <map>
#include <string>

namespace dna
{
	class counter
	{
	private:
		std::string strand;
		std::map<char, int> nucleotide_count;
	public:
		bool not_exists(char);
		bool check_valid_char(char) const;
		counter(std::string);
		int count(char) const;
		std::map<char, int> nucleotide_counts() const;
	};
}