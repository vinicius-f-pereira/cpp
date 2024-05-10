#ifndef FORM_HPP
#define FORM_HPP
#include <string>

class Bureaucrat; // Forward declaration

class AForm {
private:
  AForm();

  const std::string _name;
  bool _signed;
  const int _gradeToSign;
  const int _gradeToExecute;

public:
  AForm(const std::string &name, int gradeToSign, int gradeToExecute);
  ~AForm();
  AForm(AForm const &rhs);
  AForm &operator=(AForm const &rhs);

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  std::string getName() const;
  bool getSignature() const;
  int getSignGrade() const;
  int getExecuteGrade() const;

  bool beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &os, AForm const &rhs);

#endif // !FORM_HPP
