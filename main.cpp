#include "main.h"
using namespace std;

class Name_value
{
    public:
        string Name;
        int value;
};

int main ()
{
    vector<Name_value> values;
    Name_value entered;

    cout << "Please enter the first name:";
    cin >> entered.Name;

    cout << "Please enter the first value:";
    cin >> entered.value;

    while (entered.Name != "NoName" && entered.value != 0)
    {
        for(int i = 0; i < values.size(); i++)
        {
            if (entered.Name == values[i].Name)
            {
                break;
            }
            else
            {
                values.push_back(entered);
            }
        }

    cout << "Please enter the next name:";
    cin >> entered.Name;

    cout << "Please enter the next value:";
    cin >> entered.value;
    }

    for (int i = 0; i < values.size(); i++)
    {
        cout <<"For Loop Ran";
        cout << values[i].Name << ":";
    }

}