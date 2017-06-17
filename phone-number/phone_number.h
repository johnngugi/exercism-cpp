#include <string>

class phone_number
{
	std::string final;
public:
	phone_number(const std::string);
	std::string number() const;
	std::string check_valid(std::string) const;
	std::string area_code() const;
	operator std::string() const;
};
