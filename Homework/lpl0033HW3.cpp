#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
using namespace std;

const int MAX_LENGTH = 15;

int getCurrentHours_OR_Month(bool check){ //done
  time_t rawtime;
  string time_str;
  rawtime = time(&rawtime);
  time_str = ctime(&rawtime);
  string month_str = time_str.substr(4,3);
  string hour_str = time_str.substr(11, 2);
  int hour = stoi(hour_str);

  /* convert string month to int month by checking if month_string == month_name[i]
     where month_name[] is an array with the month name abreviations put into order,
     thus i will be the index of the month in the 2D array for temperatures 
  */

  int month;
  string month_name[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  for(int i = 0; i < 12; i++){
    if(month_str == month_name[i]){
      month = i;
      break;
    }
  }

  if(check){
      return hour;
  }else{
      return month;
  }
}

void fixName(string& name){ //done
    name.at(0) = toupper(name.at(0));
    for(int i = 1; i < name.length(); i++){
        name.at(i) = tolower(name.at(i));
        if(name.at(i) == ' '){
            name.at(i+1) = toupper(name.at(i+1));
            i++;
        }
    }
}

void setTemp(int array2D[12][MAX_LENGTH], int& n){ //done
  srand(time(NULL));
  n = 0;
  while(n < 1 || n > 15){
    cout << "How many days does the temperature need to be generated for (1-15)? "; cin >> n;
  }
  for(int r = 0; r < 12; r++){
    for(int c = 0; c < n; c++){
      switch(r){
        case 0:
          array2D[r][c] = rand() % 20 + 37;
          break;
        case 1:
          array2D[r][c] = rand() % 21 + 41;
          break;
        case 2:
          array2D[r][c] = rand() % 21 + 49;
          break;
        case 3:
          array2D[r][c] = rand() % 21 + 56;
          break;
        case 4:
          array2D[r][c] = rand() % 20 + 65;
          break;
        case 5:
          array2D[r][c] = rand() % 20 + 73;
          break;
        case 6:
        case 7:
          array2D[r][c] = rand() % 20 + 77;
          break;
        case 8:
          array2D[r][c] = rand() % 21 + 69;
          break;
        case 9:
          array2D[r][c] = rand() % 22 + 58;
          break;
        case 10:
          array2D[r][c] = rand() % 21 + 47;
          break;
        case 11:
          array2D[r][c] = rand() % 20 + 39;
          break;
      }
    }
  }
}

void dispWeather(){ //issue with getting the average temperature without printing out the entire 2D array ?
  int tempArr[12][MAX_LENGTH];
  int todayTemp, month, col, sum;
  double averageTemp;
  cout << "What is today's temperature? "; cin >> todayTemp;
  setTemp(tempArr, col);
  cout << endl << "2D array of random temperatures (each row correlates to a month, 0 = jan, 11 = dec): " << endl;
  for(int r = 0; r < 12; r++){
    for(int c = 0; c < col; c++){
      cout << tempArr[r][c] << "\t";
    }
    cout << endl;
  }
  month = getCurrentHours_OR_Month(false);
  cout << "col = " << col << endl;
  for(int i = 0; i < col; i++){
    sum += tempArr[month][i];
  }
  averageTemp = static_cast<double>(sum)/col;
  cout << "Average temperature: " << averageTemp << endl;

  if((todayTemp - averageTemp) > 5){
    cout << "It is hotter than usual" << endl;
  }else if((averageTemp - todayTemp) > 5){
    cout << "it is colder than usual" << endl;
  }else{
    cout << "The temperature is normal for this time of year" << endl;
  }
}

void dispGreeting(string name){
  int hour = getCurrentHours_OR_Month(true);
  fixName(name);
  if(hour > 0 && hour < 12){
    cout << "Good morning, " << name << "." << endl;
  }else if(hour >= 12 && hour < 18){
    cout << "Good afternoon, " << name << "." << endl;
  }else{
    cout << "Good evening, " << name << "." << endl;
  }
}

void playGame(){ //done
  srand(time(NULL));
  int target = rand() % 20 + 1;
  int count = 0, guess;
  int guesses[5];
  bool guessed = false;
  cout << "A random number 1-20 has been generated, try and guess it!" << endl;
  do{
    cout << "Guess " << count + 1 << ": "; cin >> guess;
    for(int i = 0; i < 5; i++){
      if(guess == guesses[i]){
        guessed = true;
      }
    }
    if(guessed){
      cout << "Number guessed already, try again" << endl;
      break;
    }else{
      guesses[count] = guess;
      if(guess == target){
        cout << "You got it! You took " << count+1 << " tries" << endl;
        break;
      }else if(guess > target){
        cout << "Your guess (" << guess << ") is larger than the target" << endl;
      }else{
        cout << "Your guess (" << guess << ") is smaller than the target" << endl;
      }
      count++;
    }
  }while(count < 5);
}

int main(){
  cout << "+-----------------------------------------------+" << endl;
  cout << "|\tComputer Science and Engineering\t|" << endl;
  cout << "|\tCSCE 1030 - Computer Science I\t\t|" << endl;
  cout << "| Logan Lupeamanu lpl0033 lpl0033@my.unt.edu\t|" << endl;
  cout << "+-----------------------------------------------+" << endl;

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
         <<"\n| 2. Display Today's Weather Status            |"
         <<"\n| 3. Play a Guessing Game                      |"
         <<"\n| 4. Exit                                      |"
         <<"\n+**********************************************+"
         <<"\n----> ";
    cin >> choice;

    menu = static_cast<Menu>(choice);

    switch (menu) {
      case GREETING:
        dispGreeting(name);
        break;
      case WEATHER:
        dispWeather();
        break;
      case GAME:
        playGame();
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