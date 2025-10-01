#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void	assignement_constructor_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 1);
	ShrubberyCreationForm	s1;
	RobotomyRequestForm		r1;
	PresidentialPardonForm	p1;

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;
	std::cout << s1 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << p1 << std::endl;

	std::cout << std::endl << "** Form sign **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.signAForm(s1);
	b2.signAForm(s1);
	btot.signAForm(s1);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.signAForm(r1);
	b2.signAForm(r1);
	btot.signAForm(r1);

	std::cout << std::endl << "tot)" << std::endl;
	b1.signAForm(p1);
	b2.signAForm(p1);
	btot.signAForm(p1);

	std::cout << s1 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << p1 << std::endl;

	std::cout << std::endl << "** Execution form **" << std::endl;
	std::cout << "1)" << std::endl;
	b1.execute(s1);
	b2.signAForm(s1);
	btot.signAForm(s1);
	
	std::cout << std::endl << "2)" << std::endl;
	b1.signAForm(r1);
	b2.signAForm(r1);
	btot.signAForm(r1);

	std::cout << std::endl << "tot)" << std::endl;
	b1.signAForm(p1);
	b2.signAForm(p1);
	btot.signAForm(p1);


}

void	copy_constructor_test()
{
	Bureaucrat	b1("Dan", 45);
	Bureaucrat	b2(b1);
	Bureaucrat	b3(1);
	ShrubberyCreationForm	s1;
	ShrubberyCreationForm	s2(s1);
	RobotomyRequestForm		r1;
	RobotomyRequestForm		r2(r1);
	PresidentialPardonForm	p1;
	PresidentialPardonForm	p2(p1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << s1 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << p2 << std::endl;

	std::cout << std::endl << "** Form sign **" << std::endl;
	std::cout << std::endl << "1)" << std::endl;
	b1.signAForm(s1);
	b2.signAForm(s1);
	b3.signAForm(s1);
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << std::endl;
	b1.signAForm(s2);
	b2.signAForm(s2);
	b3.signAForm(s2);
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;

	std::cout << std::endl << "2)" << std::endl;
	b1.signAForm(r1);
	b2.signAForm(r1);
	b3.signAForm(r1);
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << std::endl;
	b1.signAForm(r2);
	b2.signAForm(r2);
	b3.signAForm(r2);
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;

	std::cout << std::endl << "3)" << std::endl;
	b1.signAForm(p1);
	b2.signAForm(p1);
	b3.signAForm(p1);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << std::endl;
	b1.signAForm(p2);
	b2.signAForm(p2);
	b3.signAForm(p2);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
}

void	assignment_operator_test()
{
	Bureaucrat	b1("Dan", 50);
	Bureaucrat	b2(46);
	Bureaucrat	b3(1);
	ShrubberyCreationForm	s1;
	ShrubberyCreationForm	s2(s1);
	RobotomyRequestForm		r1;
	RobotomyRequestForm		r2(r1);
	PresidentialPardonForm	p1;
	PresidentialPardonForm	p2(p1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << s1 << std::endl;
	std::cout << r1 << std::endl;
	std::cout << p1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << r2 << std::endl;
	std::cout << p2 << std::endl;

	std::cout << std::endl << "** Assignment operator **" << std::endl;
	b2 = b1;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	s2 = s1;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	r2 = r1;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	p2 = p1;
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;

	std::cout << std::endl << "** Signing **" << std::endl;
	b1.signAForm(s1);
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	s2 = s1;
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	b1.signAForm(r1);
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	r2 = r1;
	std::cout << r1 << std::endl;
	std::cout << r2 << std::endl;
	b1.signAForm(p1);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	p2 = p1;
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
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
	//copy_constructor_test();
	//assignment_operator_test();
	//invalid_arguments_test();
	return 0;
}