#include <iostream>
#include <string>

using namespace std;

struct Ticket {
    int ticketId;
    string passengerName;
    string movieTitle;
    int seatNumber;
    int price;
};

Ticket t[100];
int totalTickets = 0;

void bookTicket() {
    cout << "Enter Ticket ID: ";
    cin >> t[totalTickets].ticketId;
    cin.ignore();
    cout << "Enter Passenger Name: ";
    getline(cin, t[totalTickets].passengerName);
    cout << "Enter Movie/Show Title: ";
    getline(cin, t[totalTickets].movieTitle);
    cout << "Enter Seat Number: ";
    cin >> t[totalTickets].seatNumber;
    cout << "Enter Price: ";
    cin >> t[totalTickets].price;
    totalTickets++;
    cout << "Ticket Booked Successfully\n";
}

void displayAll() {
    for (int i = 0; i < totalTickets; i++) {
        cout << t[i].ticketId << " | " << t[i].passengerName << " | " 
             << t[i].movieTitle << " | Seat: " << t[i].seatNumber 
             << " | Price: " << t[i].price << "\n";
    }
}

void checkTicket() {
    int id;
    bool f = false;
    cout << "Enter Ticket ID to check: ";
    cin >> id;
    for (int i = 0; i < totalTickets; i++) {
        if (t[i].ticketId == id) {
            cout << "Found: " << t[i].passengerName << " | Movie: " << t[i].movieTitle 
                 << " | Seat: " << t[i].seatNumber << " | Price: " << t[i].price << "\n";
            f = true;
            break;
        }
    }
    if (!f) cout << "Ticket not found\n";
}

void cancelTicket() {
    int id;
    bool f = false;
    cout << "Enter Ticket ID to cancel: ";
    cin >> id;
    for (int i = 0; i < totalTickets; i++) {
        if (t[i].ticketId == id) {
            for (int j = i; j < totalTickets - 1; j++) {
                t[j] = t[j + 1];
            }
            totalTickets--;
            f = true;
            cout << "Ticket Cancelled\n";
            break;
        }
    }
    if (!f) cout << "Ticket not found\n";
}

int main() {
    int choice;
    do {
        cout << "\n1. Book Ticket\n2. Display All\n3. Check Ticket\n4. Cancel Ticket\n5. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1) bookTicket();
        else if (choice == 2) displayAll();
        else if (choice == 3) checkTicket();
        else if (choice == 4) cancelTicket();
    } while (choice != 5);
    return 0;
}
