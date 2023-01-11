#include <stdio.h>
#include <stdlib.h>

int main(){

       int age, contactNum, numRooms, place, dur;
       int listHotel, amount=0, cash=0, change=0, date1, date2;
       char name[20], month[10];
       char ch, email[30];



   system("CLS");
   printf("\n\t\t\t\t**********\t                            **********");  
   printf("\n\t\t\t\t**********\t**********                  **********");  
   printf("\n\t\t\t\t**********\t**********                  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********");  
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\t\t\t\t__________________________________________________****");
   printf("\n\t\t\t\t|                                                 |***");
   printf("\n\t\t\t\t|                                                 |***");
   printf("\n\t\t\t\t|        H O T E L   R E S E R V A T I O N        |***");
   printf("\n\t\t\t\t|                S Y S T E M                      |***");
   printf("\n\t\t\t\t|                                                 |***");
   printf("\n\t\t\t\t|_________________________________________________|***");
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\t\t\t\t**********\t**********\t**********  **********"); 
   printf("\n\n\t\t\t\tPress any key to continue..");
   getch();

 do{   
    //guest information
do{
system("CLS");
    printf("\n\t\t\t\t_______________________________________________________________________________");
        printf("\n\t\t\t\t|                                Guest Information                             |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
    
    printf("\n\n\t\t\t\tEnter your name: ");
    scanf("%s");
    fgets(name, sizeof(name), stdin);
    printf("\n\t\t\t\tEnter your age: ");
    scanf("%d", &age);
    printf("\n\t\t\t\tEnter your Email Address: ");
    scanf("%s", &email);
    printf("\n\n\t\t\t\tPress any key to continue..");
    getch();
    system("CLS");
   printf("\n\t\t\t\t|--------------------------------------------------------------|");
    printf("\n\t\t\t\t|        Please check if the information is correct            |");
    printf("\n\t\t\t\t|                                                              |");
    printf("\n\t\t\t\t                   Full Name: %s                              ", name);
    printf("\n\t\t\t\t|                   Age: %d                                     |", age);
    printf("\n\t\t\t\t|                   Email Address: %s                           |", email);
    printf("\n\t\t\t\t|--------------------------------------------------------------|");
    printf ("\n\n\t\t\t\tDo you want to change your information  Y/N: ");
    scanf (" %c", &ch);
}while (ch == 'y' || ch == 'Y');
    printf("\n\n\t\t\t\tEnter to see the list of place.....");
getch();

 //Place
do{
    system("CLS");   
    printf("\n\t\t\t\t__________________________________________________________________________________________________________________________");
        printf("\n\t\t\t\t|          Welcome! to our HOTEL RESERVATION SYSTEM we would like to present our list of place you want to stay.          |");
        printf("\n\t\t\t\t|                                      Please input the according number!                                                 |");
        printf("\n\t\t\t\t|                                                                                                                         |");
        printf("\n\t\t\t\t|                                       [1] Panglao                                                                       |");
        printf("\n\t\t\t\t|                                       [2] Davao City                                                                    |");
        printf("\n\t\t\t\t|                                       [3] Boracay                                                                       |");
        printf("\n\t\t\t\t|                                       [4] Cebu City                                                                     |");
        printf("\n\t\t\t\t|                                                                                                                         |");
        printf("\n\t\t\t\t|                                                                                                                         |");
        printf("\n\t\t\t\t|_________________________________________________________________________________________________________________________|");
    
    printf("\n\n\t\t\t\tEnter a number: ");
    scanf("%d", &place);
    
    if (place == 1){
        do{
        system("CLS"); 
        printf("\n\t\t\t\t_______________________________________________________________________________");
        printf("\n\t\t\t\t|                                Panglao                                       |");
        printf("\n\t\t\t\t|                    Hotels and Resort in Panglao Island                       |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        printf("\n\t\t\t\t|                                                                              |");
        printf("\n\t\t\t\t|                     1. Cliffside Resort        | P6,257                      |");
        printf("\n\t\t\t\t|                     2. Linaw Beach Resort      | P4,709                      |");
        printf("\n\t\t\t\t|                     3. Bohol Beach CLub        | P4,705                      |");
        printf("\n\t\t\t\t|                     4. Bird of Paradise Bohol  | P6,412                      |");
        printf("\n\t\t\t\t|                     5. Hennan Resort Bohol     | P8,889                      |");
        printf("\n\t\t\t\t|                     6. Panglao Homes           | P2,601                      |");
        printf("\n\t\t\t\t|                     7. Modala Beach Resort     | P8,044                      |");
        printf("\n\t\t\t\t|                     8. BE Grand Resort         | P9,255                      |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");

        printf("\n\n\t\t\t\tChoose a place to book: ");
        scanf("%d", &listHotel);

        switch (listHotel)
        {
        case 1:
           printf("\n\t\t\t\tNumber of rooms you want to book:");
            scanf("%d", &numRooms);
            amount=numRooms*6257;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Cliffside Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
		getch();
            break;
        
        case 2: 
     printf("\n\t\t\t\tNumber of rooms you want to book:");
            scanf("%d", &numRooms);
            amount=numRooms * 4709;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Linaw Beach Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        case 3: 
       printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms * 4705;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Bohol Beach CLub");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        case 4: 
           printf("\n\t\t\t\tNumber of rooms you want to book:");
            scanf("%d", &numRooms);
            amount= numRooms * 6412;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Bird of Paradise Bohol");
            printf("\n\n\t\t\t\tPress any keys to continue..");
            getch();
               break;
        
        case 5: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 2601;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Hennan Resort Bohol");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        case 6: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 8889;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Panglao Homes");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 7: 
           printf("\n\t\t\t\tNumber of rooms you want to book:");
            scanf("%d", &numRooms);
            amount=numRooms * 8444;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Modala Beach Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 8: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms * 9255;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at BE Grand Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        default:
            printf("\n\t\t\t\tNot available. Please refer from the option (1-8 only)");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
            break;
        }
        

}while(listHotel<1 || listHotel>8);

    } else if (place == 2){

        //list of Places in Davao City
        
        do{
         system("CLS");
         printf("\n\t\t\t\t_______________________________________________________________________________");
        printf("\n\t\t\t\t|                               Davao City                                     |");
        printf("\n\t\t\t\t|                        Hotels and Resort in Davao City                       |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        printf("\n\t\t\t\t|                                                                              |");
        printf("\n\t\t\t\t|                     1. Acacia Hotel Davao      | P3,325                      |");
        printf("\n\t\t\t\t|                     2. Dusit Thani Residence   | P5,368                      |");
        printf("\n\t\t\t\t|                     3. Seda Abreeza            | P2,913                      |");
        printf("\n\t\t\t\t|                     4. Red Planet Davao        | P2,228                      |");
        printf("\n\t\t\t\t|                     5. Park Inn                | P3,399                      |");
        printf("\n\t\t\t\t|                     6. Water front             | P2,509                      |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");

        printf("\n\n\t\t\t\tChoose a place to book: ");
        scanf("%d", &listHotel);

        switch (listHotel)
        {
        case 1: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 3325;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Acacia Hotel Davao");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 2: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms * 5368;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Dusit Thani Residence");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 3: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms * 2913;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Seda Abreeza");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        case 4: 
           printf("\n\t\t\t\tNumber of rooms you want to book: \n ");
            scanf("%d", &numRooms);
            amount=numRooms*2228;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Red Planet Davao");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        case 5: 
           printf("\n\t\t\t\tNumber of rooms you want to book: \n ");
            scanf("%d", &numRooms);
            amount= numRooms * 3399;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Park Inn");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 6: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 2509;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Water front");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        default:
        printf("\n\t\t\t\tNot available. Please refer from the option (1-6 only)");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
            break;
        }
    }while(listHotel<1 || listHotel>6 );



    }else if (place == 3){
        //list of Places in Boracay
        do{
         system("CLS");
        printf("Boracay");
       printf("\n\t\t\t\t_______________________________________________________________________________");
        printf("\n\t\t\t\t|                                    Boracay                                   |");
        printf("\n\t\t\t\t|                          Hotels and Resort in Boracay                        |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        printf("\n\t\t\t\t|                                                                              |");
        printf("\n\t\t\t\t|                     1. Estacio Uno Lifestyle         | P3,882                |");
        printf("\n\t\t\t\t|                     2. Hennan Cyrstal Sands Resort   | P11,160               |");
        printf("\n\t\t\t\t|                     3. Astoria Current               | P4,913                |");
        printf("\n\t\t\t\t|                     4. Hennan Lagoon Resort          | P8,228                |");
        printf("\n\t\t\t\t|                     5. Movenpick Resort              | P12,000               |");
        printf("\n\t\t\t\t|                     6. Coast                         | P9,158                |");
        printf("\n\t\t\t\t|                     7. Feliz Hotel Boracay           | P3,972                |");
        printf("\n\t\t\t\t|                     8. Savoy Hotel                   | P3,055                |");
        printf("\n\t\t\t\t|                     9. Belmont Hotel Boracay         | P2,740                |");
        printf("\n\t\t\t\t|                     10.Crimson Resort                | P23,172               |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        
        printf("\n\n\t\t\t\t[11] Back to list of place");

        printf("\n\n\t\t\t\tChoose a place to book: ");
        scanf("%d", &listHotel);

        switch (listHotel)
        {
        case 1: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 3882;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\nEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Estacio Uno Lifestyle");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        case 2: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms* 11160;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\nEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Hennan Cyrstal Sands Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 3: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 4913;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Astoria Current");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 4: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 8228;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Hennan Lagoon Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 5: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms*12000;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Movenpick Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 6: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 9518;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Coast");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 7: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 3927;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Feliz Hotel Boracay");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 8: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount=numRooms * 3055;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Savoy Hotel");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 9: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 2740;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Belmont Hotel Boracay");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 10: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 23172;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\nEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Crimson Resort");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;
        
        default:
        printf("\n\t\t\t\tNot available. Please refer from the option (1-10 only)");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
            break;
        }
     }while(listHotel<1 || listHotel>10);

    }else if (place == 4){
        //list of Places in Cebu City
        do{
         
         system("CLS");
       printf("\n\t\t\t\t_______________________________________________________________________________");
        printf("\n\t\t\t\t|                                    Cebu City                                 |");
        printf("\n\t\t\t\t|                          Hotels and Resort in Cebu City                      |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        printf("\n\t\t\t\t|                                                                              |");
        printf("\n\t\t\t\t|                     1. Mezo Hotel                   | P1,857                 |");
        printf("\n\t\t\t\t|                     2. Quest Hotel                  | P2,592                 |");
        printf("\n\t\t\t\t|                     3. Harolds Erotel               | P2,879                 |");
        printf("\n\t\t\t\t|                     4. Seda Central Bloc Cebu       | P4,888                 |");
        printf("\n\t\t\t\t|                     5. Seda Ayala                   | P5,780                 |");
        printf("\n\t\t\t\t|______________________________________________________________________________|");
        

        printf("\n\n\t\t\t\tChoose a place to book: ");
        scanf("%d", &listHotel);

        switch (listHotel)
        {
        case 1: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 1857;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Mezo Hotel");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 2: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 2592;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Quest Hotel");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 3: 
           printf("\n\t\t\t\tNumber of rooms you want to book:");
            scanf("%d", &numRooms);
            amount=numRooms*2879;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Harolds Erotel");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 4: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 4888;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change=cash-amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Seda Central Bloc Cebu");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        case 5: 
           printf("\n\t\t\t\tNumber of rooms you want to book: ");
            scanf("%d", &numRooms);
            amount= numRooms * 5780;
            printf("\n\t\t\t\tYour total payment: %d", amount);
            printf("\n\t\t\t\tEnter your cash:");
            scanf("%d", &cash);
            change= cash - amount;
            printf("\n\t\t\t\tHere is your change: %d", change);
            printf("\n\t\t\t\tYou have succesfully booked a room at Seda Ayala ");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
               break;

        default:
        printf("\n\t\t\t\tNot available. Please refer from the option (1-5 only)");
            printf("\n\n\t\t\t\tPress any key to continue..");
            getch();
            break;
        }
    }while(listHotel<1 || listHotel>5);
    

    }else{
       printf("\n\t\t\t\tNot available. Please refer from the option (1-4 only)");
       getch();
    }

 }while(place<1 || place>4);
   
    

    //check in
     do{
   system("CLS"); 
    printf("\nEnter month: ");
    scanf("%s", month);
    printf("\nEnter date:");
    scanf("%d", &date1);
    printf("\n\n\t\t\t\tPress any key to continue..");
    getch();
    //check out
   
   system("CLS"); 
    printf("\nCheck in: %s %d 2023", month, date1 );
    printf("\nCheck-out date: ");
    scanf("%d", &date2);
    dur = date2 - date1;
    printf("\nDuration: %d nights", dur);
    printf("\n\n\t\t\t\tPress any key to continue..");
    getch();


    //confirmation

   
system("CLS");
   printf ("\nProceed (Y/N): ");
    scanf (" %c", &ch);
    }while (ch == 'n' || ch == 'N');
    getch(); 

    
    //receipt
system("CLS");
    
   printf("\n\t\t\t\t_____________________________________________________________________________________"); 
    printf("\n\t\t\t\t|                         HOTEL RESERVATION SYSTEM                                  |");
    printf("\n\n\t\t\t                          Name: %s                                               ", name);
    printf("\n\t\t\t\t                              Age: %d                                               ", age);
    printf("\n\t\t\t\t                              Email Address: %s                                     ", email);
    printf("\n\t\t\t\t                              Arrival: %s %d 2023                                   ", month, date1);
    printf("\n\t\t\t\t                              Departure: %s %d 2023                                 ", month, date2);
    printf("\n\t\t\t\t                              Pax: %d                                               ", numRooms);
    printf("\n\t\t\t\t|                             Page no. :1                                           |");
    printf("\n\t\t\t\t|                             Folio no. :22                                         |");
    printf("\n\t\t\t\t|___________________________________________________________________________________|");
    printf("\n\t\t\t\t|     DATE         |    DESCRIPTION       |        AMOUNT       |       CHANGE      |");
    printf("\n\t\t\t\t|  %s %d 2023          cash FO                       %d                   %d        ", month, date1, amount, change);
    printf("\n\t\t\t\t|__________________|______________________|_____________________|___________________|");
    getch();


    //repeat

   

      printf("\n\n\t\t\t\tDo you want to book again? (Y/N):");
      scanf (" %c", &ch);


    }while (ch == 'y' || ch == 'Y');
    {


      

      system("CLS"); 

   printf("\n\t\t\t\t_______________________________________________________________________________");   
   printf("\n\t\t\t\t                     Thank you for booking with us!");
   printf("\n\t\t\t\t                        Contact us for inquries\n\n\t\t\t\t\t\t                 @+639190769105\n\t\t\t\t\t\t                  @hotelreserv.ph");
	printf("\t\t\t\t\t\t\t\t\n\n\n\n\n\n \t\t\t\t\t                Developed by: FRETCHEL GERARMAN\n\t\t\t\t\t            ---------------------------------\n\n\n");
   printf("\n\t\t\t\t_______________________________________________________________________________");
   getch();
    }
    

// end of program   

    



    
}