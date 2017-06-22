#include <string>

namespace robot_name
{
	class robot
	{
		std::string final_name;
	public:
		robot();
		std::string name() const;
		void reset();
		std::string gen_letters();
		std::string gen_numbers();
		std::string make_name();
	};
}