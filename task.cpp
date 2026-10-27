#include "task.h"

// constructor
Task::Task() {}; // default
Task::Task(std::string id, std::string description) {
  this->id = id;
  this->description = description;
}

// set
void Task::set_id(std::string new_id) { id = new_id; }
void Task::set_description(std::string new_description) {
  description = new_description;
}

// get
std::string Task::get_id() { return id; }
std::string Task::get_description() { return description; }

void Task::print_info() {
  std::cout << "ID: " << id << std::endl;
  std::cout << "Description: " << description << std::endl;
}
