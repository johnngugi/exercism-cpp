namespace space_age
{
    class space_age
    {
        double time;
        double eath_year = 31557600;
    public:
        space_age(double n)
        {
            time = n;
        }

        double seconds() const
        {
            return time;
        }

        double on_earth() const
        {
            return (time/eath_year);
        }

        double on_mercury() const
        {
            return (on_earth()/0.2408467);
        }

        double on_venus() const
        {
            return (on_earth()/0.61519726);
        }

        double on_mars() const
        {
            return (on_earth()/1.8808158);
        }

        double on_jupiter() const
        {
            return (on_earth()/11.862615);
        }

        double on_saturn() const
        {
            return (on_earth()/29.447498);
        }

        double on_uranus() const
        {
            return (on_earth()/84.016846);
        }

        double on_neptune() const
        {
            return (on_earth()/164.79132);
        }
    };   
}