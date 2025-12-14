#include <iostream>
using namespace std;

// GLOBAL VARIABLES
// These variables store important decisions and will be used by different scenes

// follows Robert's choice out of mercy.
bool isMerciful = false;

// determines if the romance path is active.
bool isRomanticTensionActive = false;

// follows Blonde Blazer's recollection of Robert
int Blazer_Impression_Score = 0;

// SCENE 1: APARTMENT INTERROGATION
// Moral decision that affects Robert's personality

void scene_interrogation() {
    int choice;

    cout << "\n--- Apartment Interrogation ---\n";
    cout << "A criminal is hanging from the building.\n";
    cout << "1. Pull him back\n";
    cout << "2. Let him drop\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // If player chooses mercy
    if (choice == 1) {
        cout << "You pull the criminal back to safety.\n";
        cout << "You show restraint and compassion.\n";
        isMerciful = true; // Save merciful path
    }
    // If player chooses brutality
    else {
        cout << "You let go. The criminal falls.\n";
        cout << "Fear spreads across the city.\n";
        isMerciful = false; // Save ruthless path
    }
}

// SCENE 2: STREET FIGHT
// Teaches immediate consequences of choices

void scene_street_fight() {
    int choice;

    cout << "\n--- Street Fight ---\n";
    cout << "An attacker rushes toward you.\n";
    cout << "1. Right hand punch\n";
    cout << "2. Left hand punch\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Wrong tactical decision
    if (choice == 1) {
        cout << "You get countered and hit with a crowbar.\n";
        cout << "You barely manage to escape.\n";
    }
    // Correct tactical decision
    else {
        cout << "Your punch lands cleanly.\n";
        cout << "The attacker is knocked out.\n";
    }
}

// SCENE 3: BAR SCENE WITH FLAMBAE
// Affects public perception and relationships

void scene_bar_flambae() {
    int choice;

    cout << "\n--- Superhero Bar Scene ---\n";
    cout << "Flambae loses control of his flames.\n";
    cout << "1. Throw water\n";
    cout << "2. Throw alcohol\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Safer but less memorable option
    if (choice == 1) {
        cout << "The flames die down painfully.\n";
        Blazer_Impression_Score += 1; // Small impression
    }
    // Dangerous but unforgettable option
    else {
        cout << "The fire explodes into chaos.\n";
        Blazer_Impression_Score += 3; // Strong impression
    }
}

// SCENE 4: BILLBOARD SCENE (ROMANCE ROUTE)
// Determines emotional connection

void scene_billboard() {
    int choice;

    cout << "\n--- Billboard Scene ---\n";
    cout << "You share a quiet moment with Blonde Blazer.\n";
    cout << "1. Kiss her\n";
    cout << "2. Let the moment pass\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Romantic choice
    if (choice == 1) {
        cout << "You kiss her.\n";
        cout << "A deeper connection begins.\n";
        isRomanticTensionActive = true;
    }
    // Reserved choice
    else {
        cout << "You let the moment pass.\n";
        cout << "The tension remains.\n";
        isRomanticTensionActive = false;
    }
}

// SCENE 5: FINAL COMBAT WITH TOXIC
// Uses previous moral decisions
void scene_combat_toxic() {
    int choice;

    cout << "\n--- Final Combat: Toxic ---\n";
    cout << "Toxic is defeated but still dangerous.\n";
    cout << "1. Punt him away\n";
    cout << "2. Stomp him\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Flashy and creative approach
    if (choice == 1) {
        cout << "You punt Toxic away from the fight.\n";

        // Dialogue changes based on mercy
        if (isMerciful) {
            cout << "You avoid unnecessary violence.\n";
        } else {
            cout << "You send a clear warning.\n";
        }
    }
    // Brutal and efficient approach
    else {
        cout << "You stomp Toxic into the ground.\n";

        // Dialogue changes based on mercy
        if (isMerciful) {
            cout << "This clashes with your earlier compassion.\n";
        } else {
            cout << "Your reputation becomes terrifying.\n";
        }
    }
}

// EPILOGUE
// Final summary based on all choices
void epilogue_summary() {
    cout << "\n--- Epilogue ---\n";

    // Moral ending
    if (isMerciful) {
        cout << "Robert becomes a symbol of compassionate leadership.\n";
    } else {
        cout << "Robert is known for ruthless efficiency.\n";
    }

    // Relationship outcome
    if (Blazer_Impression_Score >= 3) {
        cout << "Blonde Blazer remembers your actions clearly.\n";
    } else {
        cout << "Your presence fades quietly into memory.\n";
    }

    // Romance outcome
    if (isRomanticTensionActive) {
        cout << "A romance slowly begins.\n";
    } else {
        cout << "Some feelings remain unspoken.\n";
    }

    cout << "Robert steps back from the spotlight.\n";
    cout << "The Pivot from hero to dispatcher is complete.\n";
}

// MAIN FUNCTION
// Calls all scenes in order
int main() {

    // Start of the visual novel
    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();

    // Show final results
    epilogue_summary();

    return 0;
}

