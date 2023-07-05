// C++ Kodu
/*****************************This is a code for changing the letters that repeat on the code*****************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "TURKISH");
    char t_buffer[20];
    char r_buffer[20] = "_";

    cout << "Transmited Buffer= ";
    cin >> t_buffer;
    cout << "Transmited Length= " << strlen(t_buffer) << endl;

    for (int i = 0; i < strlen(t_buffer); i++)
    {
        bool repeat = false;
        for (int j = 0; j < strlen(t_buffer); j++)
        {
            if (i != j && t_buffer[i] == t_buffer[j])
            {
                repeat = true;
                break;
            }
        }

        if (repeat) // parameter to pass to the main array with the repeating part condition (to be transmitted over the other array
        {
            r_buffer[strlen(r_buffer)] = t_buffer[i];
        }
    }

    cout << "Returned Buffer= " << r_buffer << endl;

    return 0;
}

// C Kodu

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "TURKISH");
    char t_buffer[20];
    char r_buffer[20] = "_";

    printf("Transmited Buffer= ");
    scanf("%s", t_buffer);
    printf("Transmited Length= %zu\n", strlen(t_buffer));

    for (int i = 0; i < strlen(t_buffer); i++)
    {
        bool repeat = false;
        for (int j = 0; j < strlen(t_buffer); j++)
        {
            if (i != j && t_buffer[i] == t_buffer[j])
            {
                repeat = true;
                break;
            }
        }

        if (repeat) // parameter to pass to the main array with the repeating part condition (to be transmitted over the other array
        {
            r_buffer[strlen(r_buffer)] = t_buffer[i];
        }
    }

    printf("Returned Buffer= %s\n", r_buffer);

    return 0;
}
