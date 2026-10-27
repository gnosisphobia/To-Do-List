#ifndef TASK_DAO_H
#define TASK_DAO_H

#include "task.h"
#include <iostream>
#include <vector>

class TaskDAO : public Task {
private:
  std::vector<Task> task_list;
  int next_id;

public:
  void create_task(std::string description);
  void read_task();
  bool update_task(int id, std::string new_description);
  void delete_task(int id);
};

#endif
