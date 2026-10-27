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
  }
}
