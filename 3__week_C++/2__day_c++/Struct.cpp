#include <iostream>

struct student
{
private:
    int age;

    union something
    {
        struct Id
        {
            int age;
        } ID;

        struct car
        {
            int year;
        } car;
    }something;

public:


    int get_age() 
    {
        return age;
    }

    void set_age(int new_age)
    {
        age = new_age;
    }

	int get_ID_age
	{
		return something.ID.age;
	}

	void set_ID_age(int new_ID_AGE)
	{
		something.ID.age = new_ID_AGE;
	}

    int get_car_year() 
    {
        return something.car.year;
    }

    void set_car_year(int new_year)
    {
        something.car.year = new_year;
    }
};

int main()
{
  student s;
  s.set_age(20);
  std::cout << "Age: " << s.get_age() << std::endl;

  s.set_car_year(2020);
  std::cout << "Car Year: " << s.get_car_year() << std::endl;

}

