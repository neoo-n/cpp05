#include <iostream>
#include "Bureaucrat.hpp"

void	assignement_constructor_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 2);
	Form		f1;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "** Incrementing grades **" << std::endl;
	b1.increment();
	b2.increment();
	btot.increment();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "** Decrementing grades **" << std::endl;
	b1.decrement();
	b2.decrement();
	btot.decrement();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "** Form sign **" << std::endl;


}

void	copy_constructor_test()
{
	Bureaucrat	b1("Dan", 45);
	Bureaucrat	b2(b1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::endl << "** Changing grade of b1 **" << std::endl;
	b1.decrement();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::endl << "** Changing grade of b2 **" << std::endl;
	b2.increment();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

}

void	assignment_operator_test()
{
	Bureaucrat	b1("Dan", 50);
	Bureaucrat	b2(46);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::endl << "** Assignment operator **" << std::endl;
	b2 = b1;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::endl << "** Changing grade of b1 **" << std::endl;
	b1.increment();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << std::endl << "** Changing grade of b2 **" << std::endl;
	b2.decrement();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
}

void	invalid_arguments_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(46);
	Bureaucrat	b3(1);

	std::cout << std::endl << "** constructors invalid **" << std::endl;
	Bureaucrat	invalid_grade_low(151);
	Bureaucrat	invalid_grade_high(0);

	std::cout << std::endl << "** extreme tests **" << std::endl;
	b1.decrement();
	std::cout << b1 << std::endl;
	b3.increment();
	std::cout << b3 << std::endl;
}

int main()
{
	assignement_constructor_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	return 0;
}