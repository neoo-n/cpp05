#include <iostream>
#include "Bureaucrat.hpp"

void	assignement_constructor_test()
{
	try
	{
		std::cout << "--- ASSIGNMENT CONSTRUCTOR TEST ---" << std::endl;
		Bureaucrat	b1("Dan");
		Bureaucrat	b2(45);
		Bureaucrat	btot("Fujii Kaze", 2);

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
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	

}

void	copy_constructor_test()
{
	try
	{
		std::cout << std::endl << "--- COPY CONSTRUCTOR TEST ---" << std::endl;
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
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	
}

void	assignment_operator_test()
{
	try
	{
		std::cout << std::endl << "--- ASSIGNMENT OPERATOR TEST ---" << std::endl;
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
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	

}

void	invalid_arguments_test()
{
	std::cout << std::endl << "--- INVALID ARGUMENTS TEST ---" << std::endl;
	try
	{
		std::cout << std::endl << "** invalid constructors : too low **" << std::endl;
		Bureaucrat	invalid_grade_low(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid constructors : too high **" << std::endl;
		Bureaucrat	invalid_grade_high(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		std::cout << std::endl << "** extremity tests : too low **" << std::endl;
		Bureaucrat	b1("Dan");
		b1.decrement();
	}	
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		std::cout << std::endl << "** extremity tests : too high **" << std::endl;
		Bureaucrat	b3(1);
		b3.increment();
	}	
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
}

int main()
{
	assignement_constructor_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	return 0;
}