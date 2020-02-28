class NumDays
{
private:
	int hours;
	double days;
public:
	NumDays(int);
	void setDays(double);
	void setHours(int);
	int getHours();
	double getDays();
	NumDays operator+(NumDays);
	NumDays operator-(NumDays);
	void operator++();
	void operator++(int);
	void operator--();
	void operator--(int);

};