#include "task_dao.h"
#include <iostream>
#include <string>

int main() {
  int user_choice;
  TaskDAO dao;

  std::cout << "============ Welcome to the ToDo List! ============\n";
  do {
    std::cout << "====== Choose an option ======\n";
    std::cout << "1. Create task\n";
    std::cout << "2. Read tasks\n";
    std::cout << "3. Update tasks\n";
    std::cout << "4. Delete task\n";
    std::cout << "5. Exit\n";
    std::cin >> user_choice;
    std::cin.ignore(10000, '\n');

    switch (user_choice) {
    case 1: {
      std::string description;

      std::cout << "Task description: ";
      std::getline(std::cin, description);
      std::cout << '\n';

      dao.create_task(description);
      break;
    }

    case 2:
      dao.read_task();
      break;

    case 3: {
      int search_id;
      std::string new_description;

      std::cout << "Enter the task ID: ";
      std::cin >> search_id;
      std::cin.ignore(10000, '\n');

      std::cout << "Enter the new description: ";
      std::getline(std::cin, new_description);
      std::cout << "\n";

      dao.update_task(search_id, new_description);
      break;
    }
    case 4: {
      int search_id;

      std::cout << "Enter the task ID: ";
      std::cin >> search_id;
      std::cin.ignore(10000, '\n');

      dao.delete_task(search_id);
      break;
    }
    case 5:
      std::cout << "Exiting the program.\n";
      break;
    }
  } while (user_choice != 5);
}
