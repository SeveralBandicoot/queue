/*

Queue

11/7/24

@AJ Enrique Arguello 

Objectives: 
    Research Queue. What is a Queue?

    What are some simple examples of a Queue? 

    Write a program and create an integer Queue and load 20, 30, 40 & 50

    Create a Loop that will display the values

    pop the queue and display again and note - which number was removed?

    New Concepts: Managing queues


*/

#include <iostream>
#include <queue>

using namespace std;

void display(queue<int> numbers);
int main() {
    queue<int> numbers; // integer queue initalization
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);

    //numbers.pop();

    display(numbers);

    return 0;
}

void display(queue<int> numbers) {
    while(!numbers.empty()) { // while the numbers queue is not empty
        cout << "\n" << numbers.front(); // print the front 
        numbers.pop(); // pop the front 
    }
}