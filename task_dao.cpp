#include "task_dao.h"
#include "task.h"

void TaskDAO::create_task(std::string description) {
  Task new_task(description);
  task_list.push_back(new_task);
  std::cout << "New Task Created!\n";
}

void TaskDAO::read_task() {
  if (!task_list.empty()) {
    std::cout << "============ TASK LIST ============\n";
    for (const auto &task : task_list) {
      task.print_info();
    }
    std::cout << "===================================\n";
  } else {
    std::cout << "The list is empty.\n";
    return;
  }
}

bool TaskDAO::update_task(int id, std::string new_description) {
  for (auto &task : task_list) {
    if (id == task.get_id()) {
      task.set_description(new_description);
      std::cout << "Task updated successfully\n";
      return true;
    }
  }
  std::cout << "Invalid ID.\n";
  return false;
}
