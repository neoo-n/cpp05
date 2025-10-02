
#include "../incl/ShrubberyCreationForm.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

ShrubberyCreationForm::ShrubberyCreationForm()
: AForm("shrubbery", 145, 137), _target("default")
{
    std::cout << BLUE << "Default ShrubberyCreationForm constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
: AForm(cpy.getName(), cpy.getGradeSign(), cpy.getGradeExecute()), _target(cpy._target)
{
    std::cout << BLUE << "Copy ShrubberyCreationForm constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
: AForm("shrubbery", 145, 137), _target(target)
{
    std::cout << BLUE << "Name ShrubberyCreationForm constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << YELLOW << "Destructor ShrubberyCreationForm called" << WHITE << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
	{
		this->_target = obj._target;
		this->setSigned(obj.getSigned());
	}
	return (*this);
	std::cout << PINK << "Assignment ShrubberyCreationForm called" << WHITE << std::endl;
}

// ------------------------------- METHODS -------------------------------------
void	ShrubberyCreationForm::execution() const
{
	std::ofstream	shrubbery;
	std::string		filename;

	filename = this->_target + "_shrubbery";
	shrubbery.open(filename.c_str(), std::ios::app);

	if (shrubbery.is_open())
	{
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⠟⠻⢶⣀⣠⣽⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣠⡀⠀⠀⠀⢿⣅⠀⠀⠀⠀⠉⠉⠹⣧⠀⠀⣀⣀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⠟⠉⠉⠛⣷⡤⠴⢾⣁⡀⠀⠀⠀⠀⠀⠀⠹⡧⠛⠉⠛⠛⢷⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣧⠀⠀⠀⠀⠀⠉⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⣀⣀⣀⡀⠀⠀⠈⢻⣆⣤⣀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢶⡟⢹⣧⣀⡄⢀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⢀⣠⡴⠟⠈⠉⠙⠷⠶⣶⣆⠀⣠⣽⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣠⣤⣤⠶⣶⡟⢁⣼⠁⠉⠓⠚⠉⣿⣀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⢀⣾⠛⠁⠀⠀⠀⠀⠀⠀⠀⠈⠛⠚⠁⠀⠀⠀⠀⠀⠀⣀⠀⠀⢀⡼⠋⠀⠀⠁⠀⠀⠀⠙⠉⠀⠀⠀⠀⠀⠀⢀⡽⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⢾⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⢸⣳⣼⣿⢠⣰⡟⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⢴⣖⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⢀⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠋⠿⢾⡆⠀⢳⣿⠈⡷⢯⠳⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⢸⣿⡀⠀⢀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣾⠿⡄⢀⠎⢘⠛⡿⢧⣤⣤⣦⠄⠀⣤⡄⠀⠀⠀⠀⢠⣤⢤⡤⣞⡥⣶⣄⣀⠀⠀" << std::endl;
		shrubbery << "⠀⠸⣷⣤⣾⣷⣀⣀⣿⣷⣠⣴⣤⡀⠀⠐⠒⠋⠀⠈⠳⣷⢤⡀⡎⢸⠁⠀⠈⡇⡍⠀⢠⣷⣷⣂⡤⠄⠀⠈⠛⠳⠷⠟⠀⠀⠀⠘⠋⣿" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠈⠛⢿⣯⡉⠉⣠⠏⠀⠐⣶⠆⠀⢀⣠⣤⡌⢲⠙⠃⣾⠀⠀⡼⣰⠓⢊⣡⠷⢯⡑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿" << std::endl;
		shrubbery << "⠀⠀⠀⠀⢀⣀⣠⡼⠉⠙⠷⠃⠀⠀⡴⢡⠔⠚⠉⠀⠘⣿⡠⠖⢻⢮⠀⠀⠀⠀⣾⣩⣀⣄⣀⡱⠘⠓⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸" << std::endl;
		shrubbery << "⠀⠀⠀⠰⡿⠍⠁⠀⠀⠀⠀⠀⠀⠈⠴⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⢛⡆⢸⢨⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡴⠉" << std::endl;
		shrubbery << "⠀⠀⠀⠀⣧⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⢀⣠⠞⠁⠃⢸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢴⣶⢞⠛⠛⠃⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠈⠙⠛⣷⣠⠀⠀⠀⢀⣷⣀⠀⠀⠀⠀⢠⣤⠾⠚⠛⣧⠀⠀⢀⡼⢦⣴⠛⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢛⡿⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠈⠿⠷⠶⠾⠻⡭⠟⠀⠀⠀⠀⢠⣉⣷⠀⠀⡏⠀⠀⣞⠀⠀⠀⠸⣏⡀⠀⠀⠀⠀⠀⠀⡶⠶⠶⠒⠾⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⠴⠶⠴⠴⠷⠾⠉⠁⠀⢠⡇⠀⠀⢸⠀⠀⠀⠀⠈⠙⠛⣦⣠⠤⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠋⠀⠀⠀⠳⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
		shrubbery.close();
		std::cout << filename << " is ready" << std::endl;
	}
	else
		throw FileNotOpen();
}

const char*	ShrubberyCreationForm::FileNotOpen::what() const throw()
{
	return "File not open.";
}