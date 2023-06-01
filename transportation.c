/*AIM :- Develop a C-application to store details of the passenger(s)
interms of [leaving from,Destination,no of km journey,Date of travelling,number of travellers 
whether they are Adults or Childres].
Traveller can select the mode of transport based on the below criteria:-

c1:- Bus
c2:- Train
c3:- Cab

After selection of mode of transport,then it starts searching
whether no.of seats are available or not.[Dynamically we gave availability of seats for suppose
in cab(5),buses(20),train(25)].
If seats are available then it asks to pay for booking otherwise it asks to select 
another mode of transport.If in case number of travellers are exceeded (25) 
then it exit the program by printing "Sorry No mode of transport is available".After booking then
Payment should be select from the below criteria:-

c1:- cash
c2:- online

If passenger chooses online mode of payment then it shows to select mode 
of online payment(like Card or UPI).Avail a dicount for different type of bank cards
based on below criteria:-

c1:- SBI card,Avail discount of 5%
c2:- Canara card,Avail discount of 10%
c3:- HDFC card,Avail discount of 15%
c4:- Other cards,print meaning full message "Sorry,we cant avail discount for this bank card".

Print Details of traveller along with Total Amount,Total Discount Offered,Actual bill to be paid after discount applied.
After completition of payment,print 
"Successfully,your tickets are booked"
"Hope you will enjoy the ride."
"Happy Journey."
Print that "Do you want to book one more time?".
If he press 'y' or 'Y' then the program will run again from the
first onwards Otherwise program will Terminate.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Booking 1

#include"transport.h"

FILE *tic;
int main() 
{
    char choice;
    do{
        book_tickets();
        printf("Do you want to book one more time? (y/n):");
        fprintf(tic,"\nDo you want to book one more time? (y/n):");
        scanf(" %c",&choice);
        fprintf(tic," %c",choice);
    }while(choice=='y' || choice=='Y');
    printf("Thank you for Booking. Have a nice day!\n");
    fprintf(tic,"\nThank you for Booking. Have a nice day!\n");
    fclose(tic);
}/*
---------Welcome to our SVCD Transportation (booking system)---------
Enter the details of passenger(s):
May I know from where to where you want to travel:
From: WARANGAL
To: HYDERABAD
Enter number of kilometers you want to journey: 150
Date of travelling{dd/mm/yyyy}: 01/06/2023
Number of adults: 20
Number of children: 4

Select mode of transport:
1. Bus
2. Train
3. Cab
Enter your choice: 3
Sorry, the number of seats available is only 5.

Select mode of transport:
1. Bus
2. Train
3. Cab
Enter your choice: 1
Sorry, the number of seats available is only 20.

Select mode of transport:
1. Bus
2. Train
3. Cab
Enter your choice: 2
Seats booked successfully!

Select mode of payment:
1. Cash
2. Online
Enter your choice: 2

Select mode of online payment:
1. Card
2. UPI
Enter your choice: 1
Enter the name of your bank card: HDFC
---------Ticket Details---------
From: WARANGAL
To: HYDERABAD
Number of kilometers: 150
Date of travel: 01/06/2023
Number of adults: 20
Number of children: 4
Mode of transport selected: Train
Total amount: 33000.00
Discount applied: 4950.00
Actual bill to be pay after discount applied: 28050.00
Successfully, your tickets are booked.
Hope you will enjoy the ride.
Happy journey!
-----------------------------
Do you want to book one more time? (y/n):y
---------Welcome to our SVCD Transportation (booking system)---------
Enter the details of passenger(s):
May I know from where to where you want to travel:
From: HYDERABAD
To: JAGITHYAL
Enter number of kilometers you want to journey: 40
Date of travelling{dd/mm/yyyy}: 02/06/2023
Number of adults: 5
Number of children: 2

Select mode of transport:
1. Bus
2. Train
3. Cab
Enter your choice: 3
Sorry, the number of seats available is only 5.

Select mode of transport:
1. Bus
2. Train
3. Cab
Enter your choice: 1
Seats booked successfully!

Select mode of payment:
1. Cash
2. Online
Enter your choice: 3
Invalid choice. Please select an appropriate choice.

Select mode of payment:
1. Cash
2. Online
Enter your choice: 2

Select mode of online payment:
1. Card
2. UPI
Enter your choice:
1
Enter the name of your bank card: CANARA
---------Ticket Details---------
From: HYDERABAD
To: JAGITHYAL
Number of kilometers: 40
Date of travel: 02/06/2023
Number of adults: 5
Number of children: 2
Mode of transport selected: Bus
Total amount: 4800.00
Discount applied: 480.00
Actual bill to be pay after discount applied: 4320.00
Successfully, your tickets are booked.
Hope you will enjoy the ride.
Happy journey!
-----------------------------
Do you want to book one more time? (y/n):Y
---------Welcome to our SVCD Transportation (booking system)---------
Enter the details of passenger(s):
May I know from where to where you want to travel:
From: VJW
To: GUNTUR
Enter number of kilometers you want to journey: 60
Date of travelling{dd/mm/yyyy}: 03/06/2023
Number of adults: 20
Number of children: 6

Sorry No mode of transport available*/
