// Напишете програма, която симулира “циркулярен буфер”. (
// https://en.wikipedia.org/wiki/Circular_buffer
// Използвайте deque от char.
// В началото, потребителя въвежда размера на буфера, след което в цикъл въвежда низове(до въвеждане нa EOF или празен
// стринг), които се добавят в буфера (водейки до премахването на други от другата страна на контейнера, при пълен буфер),
// като след всяко въвеждане и обновяване на буфера, той се принтира.

#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main()
{
    int bufferSize;
    cout << "Enter the size of the buffer: ";
    cin >> bufferSize;

    deque<char> buffer;
    buffer.resize(bufferSize);

    cout << "Enter strings to add to the buffer (press Ctrl+D or enter an empty string to stop):\n";
    string input;
    while (getline(cin, input))
    {
        if (input.empty())
        {
            break;
        }

        for (char c : input)
        {
            buffer.push_back(c);

            if (buffer.size() > bufferSize)
            {
                buffer.pop_front();
            }
        }

        for (char c : buffer)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
