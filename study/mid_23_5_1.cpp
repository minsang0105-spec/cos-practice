# include <iostream>
#define BUFLEN 16
using namespace std;

int main(){

    int arr[BUFLEN];
    char str[12] = {'h','e','l','l','o',',','w','o','r','l','d',0};
    int *p;
    char *q;
    int i;

    for (i=0; i<BUFLEN; i++){
        arr[i] = BUFLEN - i;
    }
        

    p = arr + 2;

    cout << " arr[10] = " << arr[10] << endl;
    cout << "*(arr+8) = " << *(arr+8) << endl;
    cout << "*p = " << *p << endl;

    q = str + 3;
    cout << "q = " << q << endl;

    q[2] = 0;
    cout << "str = " << str << endl;


    return 0;
}