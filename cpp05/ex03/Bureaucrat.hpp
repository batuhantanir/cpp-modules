#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();

        const std::string   getName() const;
        int                 getGrade() const;
        void                incrementGrade();
        void                decrementGrade();
        void                signForm(Form &form) const;
        void                executeForm(Form const & form) const;

        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };   
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &src);
