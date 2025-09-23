#include <iostream>
#include "Bureaucrat.hpp"

void	assignement_constructor_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze", 2);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "Incrementing grades" << std::endl;
	b1.increment();
	b2.increment();
	btot.increment();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "Decrementing grades" << std::endl;
	b1.decrement();
	b2.decrement();
	btot.decrement();
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;

	std::cout << std::endl << "extreme tests" << std::endl;
	btot.increment();
	std::cout << btot << std::endl;
	btot.increment();
	std::cout << btot << std::endl;

	b1.decrement();
	std::cout << b1 << std::endl;
	b1.decrement();
	std::cout << b1 << std::endl;
}

void	copy_constructor_test()
{
	Bureaucrat	b1("Dan", 45);
	Bureaucrat	b2(b1);

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;

	std::cout << "Changing grade of b2" << std::endl;
}

// void	assignment_operator_test()
// {
// }

// void	invalid_arguments_test()
// {
// }

int main()
{
	assignement_constructor_test();
	// copy_constructor_test();
	// assignment_operator_test();
	// invalid_arguments_test();
	return 0;
}