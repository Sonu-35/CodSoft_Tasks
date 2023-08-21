//making simple to-do list using cpp
#include <iostream>
#include <vector>

using namespace std;

struct Task {
    string description;
    bool completed;
};

int main() {
    vector<Task> tasks;
    cout << "Simple To-Do List Manager" << endl;

    while (true) {
        cout << "\nMenu:\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\nEnter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                Task newTask;
                cout << "Enter task description: ";
                cin.ignore();
                getline(cin, newTask.description);
                newTask.completed = false;
                tasks.push_back(newTask);
                cout << "Task added!" << endl;
                break;
            }
            case 2: {
                if (tasks.empty()) {
                    cout << "No tasks to display." << endl;
                } else {
                    cout << "Tasks:\n";
                    for (size_t i = 0; i < tasks.size(); ++i) {
                        cout << (i + 1) << ". " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].description << endl;
                    }
                }
                break;
            }
            case 3: {
                if (tasks.empty()) {
                    cout << "No tasks to delete." << endl;
                } else {
                    cout << "Enter task number to delete: ";
                    int taskNumber;
                    cin >> taskNumber;
                    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                        tasks.erase(tasks.begin() + (taskNumber - 1));
                        cout << "Task deleted." << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}
