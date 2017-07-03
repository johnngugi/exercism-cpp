#include <boost/date_time/gregorian/gregorian.hpp>
#include <vector>

namespace meetup
{
    class scheduler;
}

using namespace boost::gregorian;
using namespace std;

class meetup::scheduler
{
    typedef months_of_year month;
    vector<date> days_of_month[7];
    date teenths[7];
public:

    scheduler(month nMonth, int nYear)
    {
        date m(nYear, nMonth, 1);

        for (day_iterator d(m); (*d).month() == nMonth; ++d)
        {
            days_of_month[(*d).day_of_week()].push_back((*d));

            if (13 <= (*d).day() && 19 >= (*d).day())
            {
                teenths[(int)(*d).day_of_week()] = (*d);
            }
        }
    }

    date monteenth() const { return teenths[Monday]; }
    date tuesteenth() const { return teenths[Tuesday]; }
    date wednesteenth() const { return teenths[Wednesday]; }
    date thursteenth() const { return teenths[Thursday]; }
    date friteenth() const { return teenths[Friday]; }
    date saturteenth() const { return teenths[Saturday]; }
    date sunteenth() const { return teenths[Sunday]; }
    date first_monday() const { return days_of_month[Monday][0]; };
    date first_tuesday() const { return days_of_month[Tuesday][0]; }
    date first_wednesday() const { return days_of_month[Wednesday][0]; }
    date first_thursday() const { return days_of_month[Thursday][0]; }
    date first_friday() const { return days_of_month[Friday][0]; }
    date first_saturday() const { return days_of_month[Saturday][0]; }
    date first_sunday() const { return days_of_month[Sunday][0]; }
    date second_monday() const { return days_of_month[Monday][1]; }
    date second_tuesday() const { return days_of_month[Tuesday][1]; }
    date second_wednesday() const { return days_of_month[Wednesday][1]; }
    date second_thursday() const { return days_of_month[Thursday][1]; }
    date second_friday() const { return days_of_month[Friday][1]; }
    date second_saturday() const { return days_of_month[Saturday][1]; }
    date second_sunday() const { return days_of_month[Sunday][1]; }
    date third_monday() const { return days_of_month[Monday][2]; }
    date third_tuesday() const { return days_of_month[Tuesday][2]; }
    date third_wednesday() const { return days_of_month[Wednesday][2]; }
    date third_thursday() const { return days_of_month[Thursday][2]; }
    date third_friday() const {return days_of_month[Friday][2]; }
    date third_saturday() const { return days_of_month[Saturday][2]; }
    date third_sunday() const { return days_of_month[Sunday][2]; }
    date fourth_monday() const { return days_of_month[Monday][3]; }
    date fourth_tuesday() const { return days_of_month[Tuesday][3]; }
    date fourth_wednesday() const { return days_of_month[Wednesday][3]; }
    date fourth_thursday() const { return days_of_month[Thursday][3]; }
    date fourth_friday() const { return days_of_month[Friday][3]; }
    date fourth_saturday() const { return days_of_month[Saturday][3]; }
    date fourth_sunday() const { return days_of_month[Sunday][3]; }
    date last_monday() const { return days_of_month[Monday].back(); }
    date last_tuesday() const { return days_of_month[Tuesday].back(); }
    date last_wednesday() const { return days_of_month[Wednesday].back(); }
    date last_thursday() const { return days_of_month[Thursday].back(); }
    date last_friday() const { return days_of_month[Friday].back(); }
    date last_saturday() const { return days_of_month[Saturday].back(); }
    date last_sunday() const { return days_of_month[Sunday].back(); }
};
