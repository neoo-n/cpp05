#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

void	assignement_constructor_test()
{
	std::cout << "--- ASSIGNMENT CONSTRUCTOR TEST ---" << std::endl;
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 1);
	Form		f1("Cat habitation");
	Form		f2(50);
	Form		ftot("bruhhhhther", 150);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << ftot << std::endl;

	std::cout << std::endl << "** Form sign **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.signForm(f1);
	b2.signForm(f1);
	btot.signForm(f1);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.signForm(f2);
	b2.signForm(f2);
	btot.signForm(f2);

	std::cout << std::endl << "tot)" << std::endl;
	b1.signForm(ftot);
	b2.signForm(ftot);
	btot.signForm(ftot);

	std::cout << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << ftot << std::endl;
}

void	copy_constructor_test()
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

void	assignment_operator_test()
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

void	invalid_arguments_test()
{
	std::cout << std::endl << "--- INVALID ARGUMENTS TEST ---" << std::endl;
	std::cout << "** invalid constructors **" << std::endl;
	Bureaucrat	invalid_grade_low(151);
	Bureaucrat	invalid_grade_high(0);
	Form		f_grade_low(151);
	Form		f_grade_high(0);
}

int main()
{
	assignement_constructor_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	return 0;
}