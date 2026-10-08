#include <iostream>
using namespace std;

// Function to gather input from the user
void getInput(int *books_read, int num_students) {
    cout << "Enter the number of books read by each student:" << endl;
    for (int i = 0; i < num_students; i++) {
        do{
        cout << "Student " << i + 1 << ": ";
        cin >> books_read[i];
        if (books_read[i] <= 0){
            cout << "The number of books must be greater than zero." << endl;
        }
        }while(books_read[i] <= 0);
}
}

// Function to calculate total number of books read
int calculateTotal(int *books_read, int num_students) {
    int total_books = 0;
    for (int i = 0; i < num_students; i++) {
        total_books += books_read[i];
    }
    return total_books;
}

// Function to calculate average number of books read
double calculateAverage(int total_books, int num_students) {
    return total_books / static_cast<double>(num_students);
}

// Function to deallocate dynamically allocated memory
void deallocateMemory(int *books_read) {
    delete[] books_read;
}

int main() {
    int num_students;
    int *books_read;

    // Ask user for the number of students surveyed
    cout << "How many students were surveyed? ";
    cin >> num_students;

    // Dynamically allocate an array to store the number of books read by each student
    books_read = new int[num_students];

    // Gather input from the user
    getInput(books_read, num_students);

    // Calculate the total number of books read
    int total_books = calculateTotal(books_read, num_students);

    // Calculate the average number of books read
    double average_books = calculateAverage(total_books, num_students);

    // Display the total and average number of books read
    cout << "\nThe total number of books read by the students are " << total_books << endl;
    cout << "\nThe average number of books read by the student are " << average_books << endl;

    // Deallocate dynamically allocated memory
    deallocateMemory(books_read);

    system("pause");
}
