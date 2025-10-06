#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	assignement_constructor_test()
{
	try
	{
		Bureaucrat	b("Fujii Kaze", 1);
		Form		f1("Cat habitation");
		Form		f2(50);
		Form		f3("bruhhhhther", 150);
		std::cout << "--- ASSIGNMENT CONSTRUCTOR TEST ---" << std::endl;
		std::cout << b << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	std::cout << std::endl << "** Form sign **" << std::endl;
	try
	{
		Bureaucrat	b("Fujii Kaze", 1);
		Form		f1("Cat habitation");
		Form		f2(50);
		Form		f3("bruhhhhther", 150);
		std::cout << "1)" << std::endl;
		b.signForm(f1);
		b.signForm(f2);
		b.signForm(f3);

		std::cout << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
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
		Form		f1("Cat food", 50);
		Form		f2(f1);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		
		std::cout << std::endl << "** Form sign **" << std::endl;
		b1.signForm(f1);
		b2.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		std::cout << std::endl;
		b1.signForm(f2);
		b2.signForm(f2);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
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
		Form		f1("Cat food", 50);
		Form		f2(38);

		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

		std::cout << std::endl << "** Assignment operator **" << std::endl;
		b2 = b1;
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		f2 = f1;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;

		std::cout << std::endl << "** Signing **" << std::endl;
		b1.signForm(f1);
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		f2 = f1;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
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
		std::cout << "** invalid constructors : too low **" << std::endl;
		Form		f_grade_low(151);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		std::cout << std::endl << "** invalid constructors : too high **" << std::endl;
		Form		f_grade_high(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	try
	{
		std::cout << std::endl << "** invalid signing : too low **" << std::endl;
		Bureaucrat	b1("Dan", 45);
		Form		f1("Cat food", 40);

		b1.signForm(f1);
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