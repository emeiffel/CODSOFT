#include<iostream>
#include<string>
using namespace std;

// Maximum number of tasks
const int MAX_TASKS = 100;

// Define a structure for tasks 
struct Task
{
    string description;
    bool isDone;
};

int main()
{
    Task tasks[MAX_TASKS]; // Array to store tasks
    // Keep track of the number of tasks
    int numTask = 0;
    cout<<"\t\tWELCOME TO TO-DO LIST APPLICATION";

    while (true)
    {
        cout << "\n\nTO-DO List Application" << endl;
        cout << "1. ADD Task" << endl;
        cout << "2. List Task" << endl;
        cout << "3. Mark Task" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            // ADD Task
            if (numTask < MAX_TASKS)
            {
                cout << "Enter Task Description: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, tasks[numTask].description);
                tasks[numTask].isDone = false;
                numTask++;
                cout << "Task added" << endl;
            }
            else
            {
                cout << "Task List is Full. Cannot add more Tasks" << endl;
            }
        }
        else if (choice == 2)
        {
            // List tasks
            cout << "Tasks: " << endl;
            for (int i = 0; i < numTask; i++)
            {
                cout << (i + 1) << ".";
                if (tasks[i].isDone)
                {
                    cout << "[X]";
                }
                else
                {
                    cout << "[]";
                }
                cout << tasks[i].description << endl;
            }
        }
        else if (choice == 3)
        {
            // Mark Task as done
            cout << "Enter the Task Number to mark as done: ";
            int taskNumber;
            cin >> taskNumber;
            if (taskNumber > 0 && taskNumber <= numTask)
            {
                tasks[taskNumber - 1].isDone = true;
                cout << "Task marked as done." << endl;
            }
            else
            {
                cout << "Invalid Task Number" << endl;
            }
        }
        else if (choice == 4)
        {
            // Quit Application
            cout << "GoodBye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice. Please try again." << endl;
        }
    }

    return 0;
}

