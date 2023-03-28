#include <iostream>
#include <cstdlib>

int randomdigit();

int main() {
    
    srand(time(NULL));

    for (int i = 0; i < 10; i++) //This iterates the randomly generated phone numbers 10 times.
    {
      std::cout << "Phone number: " << randomdigit() << randomdigit() << randomdigit() <<
        "-" << randomdigit() << randomdigit() << randomdigit() << "-" << randomdigit() << randomdigit() << randomdigit() << randomdigit();
        
        /*This is where you organize the randomly generated numbers. You place it 3 times in a row before you use - to make it like a cell phone number. */
        
        std::cout << "\n";
        
    }
    return 0;
}

int randomdigit()
{
    return rand() % 10; 
    /* This determines the size of the randomly generated numbers. Numbers go up to 9 when you set 
    modulus to 10. */ 
}