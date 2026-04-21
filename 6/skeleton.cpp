#include <iostream>
using namespace std;

int run()
{
    __asm__(
        "mov $100, %rax"
    );

    return;
}

int main()
{
    cout << "The skeleton code for the assembly language" << endl;
    printf("return value: %d\n", run());

    return 0;
}