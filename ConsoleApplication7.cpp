#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

void fakeLoading() {
    cout << "System Diagnostic in Progress...\n";
    for (int i = 0; i < 5; ++i) {
        cout << ".";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "\nERROR: System Overheated!\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Initiating Cooldown Protocol...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Just kidding! Your system is fine. :)\n";
}

int main() {
    fakeLoading();
    return 0;
}

