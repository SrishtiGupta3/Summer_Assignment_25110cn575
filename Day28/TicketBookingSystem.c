#include <stdio.h>
#include <string.h>

#define MAX_SEATS 10

struct Ticket
{
    int seatNo;
    char passengerName[50];
    int booked;      // 0 = Available, 1 = Booked
};

struct Ticket ticket[MAX_SEATS];

// Initialize Seats
void initializeSeats()
{
    int i;
    for(i = 0; i < MAX_SEATS; i++)
    {
        ticket[i].seatNo = i + 1;
        ticket[i].booked = 0;
        strcpy(ticket[i].passengerName, "");
    }
}

// Display Seat Status
void displaySeats()
{
    int i;

    printf("\n--------- Seat Status ---------\n");

    for(i = 0; i < MAX_SEATS; i++)
    {
        printf("Seat %2d : ", ticket[i].seatNo);

        if(ticket[i].booked)
            printf("Booked (%s)\n", ticket[i].passengerName);
        else
            printf("Available\n");
    }
}

// Book Ticket
void bookTicket()
{
    int seat;

    printf("\nEnter Seat Number (1-%d): ", MAX_SEATS);
    scanf("%d", &seat);

    if(seat < 1 || seat > MAX_SEATS)
    {
        printf("\nInvalid Seat Number!\n");
        return;
    }

    if(ticket[seat - 1].booked)
    {
        printf("\nSeat Already Booked!\n");
        return;
    }

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", ticket[seat - 1].passengerName);

    ticket[seat - 1].booked = 1;

    printf("\nTicket Booked Successfully!\n");
}

// Cancel Ticket
void cancelTicket()
{
    int seat;

    printf("\nEnter Seat Number to Cancel: ");
    scanf("%d", &seat);

    if(seat < 1 || seat > MAX_SEATS)
    {
        printf("\nInvalid Seat Number!\n");
        return;
    }

    if(ticket[seat - 1].booked == 0)
    {
        printf("\nSeat is Already Available!\n");
        return;
    }

    ticket[seat - 1].booked = 0;
    strcpy(ticket[seat - 1].passengerName, "");

    printf("\nTicket Cancelled Successfully!\n");
}

// Search Booking
void searchTicket()
{
    int seat;

    printf("\nEnter Seat Number: ");
    scanf("%d", &seat);

    if(seat < 1 || seat > MAX_SEATS)
    {
        printf("\nInvalid Seat Number!\n");
        return;
    }

    if(ticket[seat - 1].booked)
    {
        printf("\nSeat Number : %d\n", ticket[seat - 1].seatNo);
        printf("Passenger   : %s\n", ticket[seat - 1].passengerName);
    }
    else
    {
        printf("\nSeat is Available.\n");
    }
}

int main()
{
    int choice;

    initializeSeats();

    do
    {
        printf("\n========== TICKET BOOKING SYSTEM ==========\n");
        printf("1. Display Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Search Ticket\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displaySeats();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                cancelTicket();
                break;

            case 4:
                searchTicket();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}