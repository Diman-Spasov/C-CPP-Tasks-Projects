// Напишете програма, която симулира опашка пред магазин : програмата трябва да има опции за:
// ●
// нареждане на човек на опашката (най
// отзад)
// ●
// минаване на човек през касата
// ●
// принтиране на опашката от клиенти

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> customers;
    int option;

    do
    {
        cout << "1. Add customer to line" << endl;
        cout << "2. Pass customer through cash register" << endl;
        cout << "3. Print customer queue" << endl;
        cout << "4. Exit program" << endl;
        cout << "Enter option (1-4): ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            string name;
            cout << "Enter customer name: ";
            cin >> name;
            customers.push(name);
            cout << "Customer " << name << " added to line." << endl;
            break;
        }
        case 2:
        {
            if (customers.empty())
            {
                cout << "No customers in line." << endl;
            }
            else
            {
                string name = customers.front();
                customers.pop();
                cout << "Customer " << name << " has passed through the cash register." << endl;
            }
            break;
        }
        case 3:
        {
            if (customers.empty())
            {
                cout << "No customers in line." << endl;
            }
            else
            {
                cout << "Customer queue: ";
                queue<string> copy(customers);
                while (!copy.empty())
                {
                    cout << copy.front() << " ";
                    copy.pop();
                }
                cout << endl;
            }
            break;
        }
        case 4:
        {
            cout << "Exiting program." << endl;
            break;
        }
        default:
        {
            cout << "Invalid option. Please try again." << endl;
            break;
        }
        }

    } while (option != 4);

    return 0;
}
