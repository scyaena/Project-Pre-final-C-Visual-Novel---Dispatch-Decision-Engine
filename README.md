# Project-Pre-final-C-Visual-Novel---Dispatch-Decision-Engine

This C++ application is a basic text-based graphic novel. It follows Dispatch's character Robert and illustrates how player decisions impact the narrative. Global variables are used to hold the player's choices, and each scene is written as its own void function. The closing epilogue and next scenes are impacted by these stored choices.  Only simple C++ concepts—functions, variables, Booleans, conditional expressions, and input/output—are used in this program.

Global Variables

All scene routines can access and update the following variables because they are declared globally:

bool isMerciful
follows Robert's noble journey. If the player chooses to show mercy during the questioning scenario, it comes to pass.

bool isRomantic Tension Active
monitors the activation of the romance route with Blonde Blazer.

Blazer_Impression_Score
monitors the degree to which the public and Blonde Blazer recall Robert's actions.

Because of these factors, decisions made early might have an impact on later scenes and the conclusion.

These variables enable the eFunction Breakdown and Decision Paths, as well as following scenes, to be impacted by earlier decisions.

Function Breakdown and Decision Paths

1. scene_interrogation() – Apartment Interrogation

Goal: presents the story's central moral choice.

Options for Decision-Making:

Catch the offender → Mercy

Let the criminal go → Ruthlessness

Impact on the Story: 
Updates isMerciful.
Later fight scenes' words and actions are influenced by this choice.
Robert's underlying character becomes apparent in this scene.

2. scene_street_fight() – Street Fight

Goal: shows how tactical choices have quick effects.

 Options for Decision-Making:

 Punch with the right hand ⇒ Failure result
 Punch with the left hand ⇒ Successful result

 Impact on the Story: 
doesn't alter global variables
 emphasizes that decisions can have immediate effects
 Instead of long-term branching, this scene emphasizes gameplay logic.

3. scene_bar_flambae() – Superhero Bar Scene

Goal: demonstrates how relationships and reputation are impacted by public activities.

Options for Decision-Making:

Throw water: less memorable but safer
Throw alcohol → Risky, disorderly, and unforgettable

Impact on the Story: 
Blazer_Impression_Score is updated.
Alcohol preference raises the score higher, indicating a more favorable public perception.
Blonde Blazer's memories of Robert in the epilogue are influenced by this scene.

4. scene_billboard() – Billboard Romance Scene

Goal: introduces romantic and emotional decision-making.

Options for Decision-Making:

Kiss Blonde Blazer → The romance starts
Let the moment pass. Tension still exists.

Impact on the Story: 

isRomanticTensionActive is updated.
assesses the possibility of a romantic conclusion.
Vulnerability and emotional intelligence are highlighted in this situation.

5. scene_combat_toxic() – Combat Decision

Goal: reflects Robert's well-known fighting style.

Options for Decision-Making:

Punt Toxic → creative and showy
Stomp Toxic → Effective and brutal

Impact on the Story:

uses isMerciful to change the conversation a little.
demonstrates agreement or disagreement with past moral decisions
The scene here illustrates how decisions made in the past affect narrative in the present.

epilogue_summary()

Goal:
gives a concluding synopsis of the narrative based on collective selections.

Use of Logic:

Whether Robert is remembered as kind or cruel depends on how kind he is.

Blonde Blazer's recall of Robert is determined by Blazer_Impression_Score.

Whether a romance starts depends on isRomanticTensionActive.

Robert's move from front-line hero to dispatcher behind the scenes is completed by this function, which completes the Pivot.

main()

Goal:
regulates the program's flow.

Behavior:

calls the functions of each scene sequentially.

calls epilogue_summary() at the end.

The scenes play in order since the main() function serves as the plot driver.

This program shows how to use fundamental C++ ideas to generate branching narratives.  Global variables serve as memory that stores player choices, and each scene function represents a story node.  Based on user input, the computer generates various story pathways and endings using straightforward if/else logic.

