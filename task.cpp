#include "task.h"

// constructor
Task::Task() {}; // default
Task::Task(int id, std::string description) {
  this->id = id;
  this->description = description;
}

// set
void Task::set_id(int new_id) { id = new_id; }
void Task::set_description(std::string new_description) {
  description = new_description;
}

// get
int Task::get_id() { return id; }
std::string Task::get_description() { return description; }

void Task::print_info() {
  std::cout << "ID: " << id << std::endl;
  std::cout << "Description: " << description << std::endl;
}
