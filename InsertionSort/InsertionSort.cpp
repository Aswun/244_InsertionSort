#include <iostream>
using namespace std;

int arr[40];
int n;

void input()
{
    while (true)
    {
        cout << "masukan banyaknya element pada array : " << endl;
        cin >> n;
        if (n <= 40)
            break;
        else
        {
            cout << "array dapat mempunyai maksimal 40 element" << endl;

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "masukan element array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << "; ";
        cin >> arr[i];
    }
}

void insertionSort()
{
    int i, j, n, temp;
    int arr[40];

    for (i = 1; i <= n - 1; i++)  //step 1
    {
        temp = arr[i];  //step 2

        j = i - 1;  //step 3

        while (j >= 0 && arr[j] > temp)  //step 4
        {
            arr[j + 1] = arr[j];  //step 4a
            j--;  //step 4b
        }

        arr[j + 1] = temp;  //step 5
    }
}

void display()
{
    cout << endl;
    cout << "============================" << endl;
    cout << "element array telah tersusun" << endl;
    cout << "============================" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl; // output setiap element pada garis baru
    }
    cout << "jumlah pass = " << n - 1 << endl; // menampilkan total
    cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}
