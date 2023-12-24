#include <iostream>
#include <unistd.h>

    std::string timer_start;
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

void display_timer(){
    
    std::cout << "Hours - Minutes - Seconds\n";
    std::cout << hours << " - " << minutes << " - " << seconds << "\n";

}

void timer(){


    while (1)
    {
        sleep(1);
        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
            if (minutes == 60){   
                minutes = 0;
                hours++;
            }
            
        }
    display_timer();

    if ((hours == 99) && (seconds == 59)){
        break;
    }
    }

}



int main(){
  
    std::cout << "Start timer? Y/N \n";
    std::cin >> timer_start;

    if (timer_start == "Y"){
        std::cout << "Timer started \n";
        
        timer();
    } 
    
    return 0;
}