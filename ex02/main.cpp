#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

void	assignement_constructor_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 1);
	AForm		f1("Cat habitation");
	AForm		f2(50);
	AForm		ftot("bruhhhhther", 150);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << ftot << std::endl;

	std::cout << std::endl << "** AForm sign **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.signAForm(f1);
	b2.signAForm(f1);
	btot.signAForm(f1);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.signAForm(f2);
	b2.signAForm(f2);
	btot.signAForm(f2);

	std::cout << std::endl << "tot)" << std::endl;
	b1.signAForm(ftot);
	b2.signAForm(ftot);
	btot.signAForm(ftot);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << ftot << std::endl;
}

void	copy_constructor_test()
{
	Bureaucrat	b1("Dan", 45);
	Bureaucrat	b2(b1);
	AForm		f1("Cat food", 50);
	AForm		f2(f1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	std::cout << std::endl << "** AForm sign **" << std::endl;
	b1.signAForm(f1);
	b2.signAForm(f1);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	std::cout << std::endl;
	b1.signAForm(f2);
	b2.signAForm(f2);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

}

void	assignment_operator_test()
{
	Bureaucrat	b1("Dan", 50);
	Bureaucrat	b2(46);
	AForm		f1("Cat food", 50);
	AForm		f2(38);

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
	b1.signAForm(f1);
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	f2 = f1;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
}

void	invalid_arguments_test()
{
	std::cout << "** invalid constructors **" << std::endl;
	Bureaucrat	invalid_grade_low(151);
	Bureaucrat	invalid_grade_high(0);
	AForm		f_grade_low(151);
	AForm		f_grade_high(0);
}

int main()
{
	assignement_constructor_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	return 0;
}