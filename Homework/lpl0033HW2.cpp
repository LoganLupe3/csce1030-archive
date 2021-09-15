#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
using namespace std;

int main(){
  cout << "+-----------------------------------------------+" << endl;
  cout << "|\tComputer Science and Engineering\t|" << endl;
  cout << "|\tCSCE 1030 - Computer Science I\t\t|" << endl;
  cout << "| Logan Lupeamanu lpl0033 lpl0033@my.unt.edu\t|" << endl;
  cout << "+-----------------------------------------------+" << endl;

  srand(time(NULL));

  /* Time setup */
  time_t rawtime;
  string time_str;
  rawtime = time(&rawtime);
  time_str = ctime(&rawtime);
  string hour_str = time_str.substr(11, 2);
  int hour = stoi(hour_str);


  /* Message based on the time of day */
  string message;
  if(hour < 12 && hour >= 0){
    message = "morning";
  }else if(hour >= 12 && hour < 18){ //ctime returns 24 hour time
    message = "afternoon";
  }else{
    message = "evening";
  }

  /* Random numbers for weather */
  int temperature = rand() % 96 + 10;
  int weather = rand() % 4 + 1;
  string weather_str;
  switch(weather){
    case 1:
      weather_str = "sunny";
      break;
    case 2:
      weather_str = "rainy";
      break;
    case 3:
      weather_str = "windy";
      break;
    case 4:
      weather_str = "cloudy";
      break;
  }

  /* Menu initialization and menu variable initialization */
  enum Menu {GREETING=1, WEATHER, GAME, EXIT};
  Menu menu;
  int choice;
  bool repeat = true;
  string name;
  cout << "Please enter your full name: ";
  getline(cin, name);
  cout << endl;
  int count = 1;
  int guess;
  int target = rand() % 10 + 1;
  bool guessed = false;

  do {
    cout <<"\n+******************* M E N U ******************+"
         <<"\n| Personal Concierge App: Choose a Service     |"
         <<"\n| 1. Display Personal Greeting                 |"
         <<"\n| 2. Display Today's Weather Forecast          |"
         <<"\n| 3. Play a Guessing Game                      |"
         <<"\n| 4. Exit                                      |"
         <<"\n+**********************************************+"
         <<"\n----> ";
    cin >> choice;

    menu = static_cast<Menu>(choice);

    switch (menu) {
      case GREETING:
        cout << time_str << endl;
        cout << "\nGood " << message << " " << name << ". I hope you're having a nice day!" << endl;
        break;
      case WEATHER:
        cout << "\nToday's forcast high of " << temperature << " degrees and " << weather_str << endl;
        break;
      case GAME:
        do{
          if(count > 3){
            cout << "You've run out of guesses! You lose!" << endl;
            guessed = false;
            break;
          }
          cout << "\nYou have 3 chances to guess my number from 1 to 10!" << endl;
          cout << "Guess #" << count << ": "; cin >> guess;
          if(guess == target){
            cout << "Correct in " << count << "! Nice job!" << endl;
            guessed = true;
          }else{
            if(guess < target){
              cout << "Your guess (" << guess << ") is too low! Guess a higher number." << endl;
              guessed = false;
              count++;
            }else{
              cout << "Your guess (" << guess << ") is too high! Guess a lower number." << endl;
              guessed = false;
              count++;
            }
          }
        }while(!guessed);
        break;
      case EXIT:
        cout << "Thank you for using the Personal Concierge App." << endl;
        repeat = false;
        break;
      default:
        cout << "Wrong choice. Try again." << endl;
    }


  } while(repeat);




  return 0;
}
