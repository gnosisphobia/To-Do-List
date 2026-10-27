#ifndef TASK_H
#define TASK_H
#include <iostream>

class Task {
private:
  std::string id;
  std::string description;

public:
  // constructor
  Task(); // default
  Task(std::string id, std::string description);

  // set
  void set_id(std::string new_id);
  void set_description(std::string new_description);

  // get
  std::string get_id();
  std::string get_description();

  // methods
  void print_info();
};

#endif
