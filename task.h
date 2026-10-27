#ifndef TASK_H
#define TASK_H
#include <iostream>

class Task {
private:
  int id;
  std::string description;

public:
  // constructor
  Task(); // default
  Task(std::string description);

  // set
  void set_id(int new_id);
  void set_description(std::string new_description);

  // get
  int get_id() const;
  std::string get_description() const;

  // methods
  void print_info() const;
};

#endif
