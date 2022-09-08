// #include "Array.hpp"
#include "Array.tpp"

// using std::string;
// using std::cout;
// using std::endl;

// int	main(void)
// {
// 	Array<int> arr;
// 	Array<int> arr1(5);

// 	cout << "arr size : " << arr.size() << endl;
// 	// arr[2];
// 	cout << "arr1 size : " << arr1.size() << endl;
// 	// cout << arr1[2] << endl;

// 	Array<string>	strarr(2);
// 	strarr[0] = "apple";
// 	strarr[1] = "bottom";
// 	cout << "\nstrarr contents:\n";
// 	cout << strarr[0] << endl;
// 	cout << strarr[1] << endl;

// 	cout << "\nstrarr1 contents:\n";
// 	Array<string> strarr1(strarr);
// 	cout << strarr1[0] << endl;
// 	cout << strarr1[1] << endl;

// 	return (0);
// }

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}