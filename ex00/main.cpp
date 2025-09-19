#include <iostream>
#include "Bureaucrat.hpp"

void	assignement_constructor_test()
{
	Bureaucrat	b1("Dan");
	Bureaucrat	b2(45);
	Bureaucrat	btot("Fujii Kaze");

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << btot << std::endl;
}

// void	copy_constructor_test()
// {
	


// }

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