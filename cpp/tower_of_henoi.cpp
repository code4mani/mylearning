#include <iostream>
using namespace std;

// tower of henoi recusion
typedef char PEG;
void tower_of_henoi(const size_t n, const PEG source, const PEG dest, const PEG inter) {
    if(n == 1) {
        cout << "move from " << source << " to " << dest << "\n";
        return;
    }

    tower_of_henoi(n-1, source, inter, dest);
    cout << "move from " << source << " to " << dest << "\n";
    tower_of_henoi(n-1, inter, dest, source);

}
int main() {
    tower_of_henoi(3, 'A', 'C', 'B');

    return 0;
}
