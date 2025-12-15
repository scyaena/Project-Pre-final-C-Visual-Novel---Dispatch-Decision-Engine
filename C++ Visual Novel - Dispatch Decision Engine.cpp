#include <iostream>
#include <string>
using namespace std;

bool gameFailed = false;
bool choseMercy = false;
bool romanceActive = false;

int blazerReputation = 0;

bool streetFightSurvived = true;
string toxicResolution = "" ;

//SCENE 1: APARTMENT INTERROGATION
// Moral decision that affects Robert's personality

void sceneApartmentInterrogation(){
    int choice;

    cout << "\n--- Scene 1: Apartment Interrogation ---\n";
    cout << "A criminal is hanging from the building.\n";
    cout << "1. Pull him back\n";
    cout << "2. Let him drop\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // If player chooses mercy
    if (choice == 1) {
        choseMercy = true;
        cout << "You pull the criminal back to safety.\n";
        cout << "You show restraint and compassion.\n";
     } 
    // If player chooses brutality
     else {
        choseMercy = false;
        cout << "You let go. The criminal falls.\n";
        cout << "Fear spreads across the city.\n";
           }
}

// SCENE 2: STREET FIGHT
// Teaches immediate consequences of choices

void sceneStreetF() {
    int choice;

    cout << "\n--- Street Fight ---\n";
    cout << "An attacker rushes toward you.\n";
    cout << "1. Right hand punch\n";
    cout << "2. Left hand punch\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Wrong tactical decision
    if (choice == 1) {
        streetFightSurvived = false;
        gameFailed = true;
        cout << "You get countered and hit with a crowbar.\n";
        cout << "You barely manage to escape.\n";
    }
    // Correct tactical decision
    else {
        streetFightSurvived = true;
        cout << "Your punch lands cleanly.\n";
        cout << "The attacker is knocked out.\n";
    }
}

// SCENE 3: BAR SCENE WITH FLAMBAE
// Affects public perception and relationships

void sceneBarFlambae(){

   if(gameFailed) return;
    int choice;
      
        cout << "\n----Scene 3: SuperHero Bar----\n";
        cout << "Flambae erupts in flame during argument\n";
        cout << "1. Throw water\n";
        cout << "2. Throw alcohol\n";
        cin >> choice;

  if (choice == 1){
     blazerReputation += 1;
     cout << "The flame sputter out. Awkward silence.\n";
   }
else{
    blazerReputation += 3;
    cout << "Whoosh! Flames roar skyward.\n" ;
    cout << "Blonde Blazer definitely noties.\n";
 }
}

//SCCENE 4: BILLBOARD MOMENT

  void sceneBillboardMoment(){
     if(gameFailed) return;

     int choice;

        cout << "\n----Scene 4: BillBoard Moment-----\n";
        cout << "City lights glow beneath you both\n";
        cout << "1. Lean in for a kiss\n";
        cout << "2. Let the moment pass\n";
        cin >> choice;

   if(choice == 1){


     romanceActive = true;
     blazerReputation += 2;

      cout << "A brief, electric kiss";
}
    else{
        romanceActive = false;
         cout << "The moment lingers, unspoken.";
  }
}

//Scene 5

  void sceneFightToxic(){


   if(gameFailed) return;

 int choice;
     cout << "\n-----Scene 5: Fight With Toxic-----\n";
     cout << "Toxic is down. Your move?\n";
     cout << "1. Punt him\n";
     cout << "2. Stomp him\n";
     cin >> choice;

   if(choice == 1){
       toxicResolution = choseMercy;
       cout << "A controlled punt sends him sliding away\n";
       cout << "You launch him like a football\n";
 }
   else{
         toxicResolution = choseMercy;
         cout << "You stop short of permament damage\n";
         cout << "The stomp echoes with finality.\n";
 }


      cout << toxicResolution;
}

//Epilogue

     void epilogue(){
        cout << "\n----Epilogue----\n";

     if(gameFailed){
         cout << "Your story ends early";

   return;
}


   if(choseMercy);
        cout << "Robert walks a path of compassion\n";
        cout << "Robert values results above all\n";

   if(romanceActive);
        cout << "A spark remains with Blonde Blazer\n";
        cout << "The connection fades into possibility\n";

        cout << "Blazer Reputation Score: " << blazerReputation << "\n";

    if(blazerReputation >= 3){
        cout << "She remembers you vividly";
  }
    else if(blazerReputation >= 3){
        cout << "She finds you unpredictable.";
}


    else{
       cout << "You barely register\n";
  }

        cout << "\n---End of Episode 1---\n";
 }

  int main(){
    
    sceneApartmentInterrogation();
    sceneStreetF();
    sceneBarFlambae();
    sceneBillboardMoment();
    sceneFightToxic();
    epilogue();

  return 0;

}
  
