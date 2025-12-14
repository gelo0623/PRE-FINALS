Visual Novel - Dispatch Decision Engine C++ Documentation + Explanation  
By: Mark Angelo C. Panis, Benedict Ronald D. Eborde, Romeo Alejandro P. Valenciano


Project Goal: 
	Design and create the functional structure for a simple, text-based visual novel (VN) featuring the character Robert from Dispatch. 
  The program must incorporate at least five distinct decision points, where user input (a choice) determines the flow of the story and updates character relationship variables using C++ functions and Boolean logic.



Global Variables: 

bool isMerciful 
bool isRomanticTensionActive 
bool isRobertInjured

int Robert_Mercy_Rating 
int Blazer_Impression_Score


 
Variables Explanation: 

bool isMerciful // This variable tracks Robert's path after the interrogation in his apartment. 

boolRomanticTensionActive // This variable is the one in-charge of determining the romantic tension is alive/active between Robert and Blonde Blazer. 

bool isRobertInjured // This variable is the one who determines whether Robert is injured in the fight scene.  

int Blazer_Impression_Score // This variable is a measures the score of how strong or how good does Blonde Blazer remembers Robert based on Robert's behavior. 
If the value gets higher or is higher, it means the impact of the impression is a lot more memorable and significant.   

int Robert_Mercy_Rating  // This integer measures Robert's action that is compassionate. 
This is used mainly in the interrogation scene, and the higher it gets, it indicates that the percentage of empathy of Robert is higher. 




Decision Paths (GLOBAL VARIABLES): 


bool isMerciful // If ever the player decides to save the goon or take a less brutal path/approach, boolisMerciful becomes true. 
However, if the player takes the more brutal path, which means let the goon fall or act violent, the boolisMerciful becomes false. 

bool RomanticTensionActive // bool RomanticTension can become true if Robert kisses Blonde Blazer. However, if he lets the moment pass instead, the variable becomes false. 

bool isRobertInjured // In the fight scene, if the player happens to throw the wrong punch, the variable becomes true. 
But if the player decides to throw the correct punch, the variable will become true. 

int Blazer_Impression_Score // Score increases slowly/slighly if the player chooses to do safer choices (EX: using water on Flambae). 
Score increases faster if the player decides to choose riskier actions (EX: throwing alcohol or initiating a kiss). The higher the impression score, 
the more it strengthens the emotional impact at the ending/epilogue. 

int Robert_Mercy_Rating // The rating gets higher if the player chooses to save the goon. If the player chooses brutal choices, the rating does not increase. 






Functions: 


typewrite(string text, int speed) 
// Function of the code: Prints text one character at a time with a delay. Visual wise, it simulates the visual effect of a typewriter. Effect on the gameplay variables? 0/None
// Decision path: NO decision path, it's only effect is how the dialogues appear. 



main() 

// Function of the code and Decision Path: The code acts as the control program/ control hub and menu. 
main() allows players to choose their desired individual scenes or they can choose the full playthrough. 


theIntro() 

// Function of the code: This code is the introduction of the novel where it highlights Robert's background and his relationship with his father. 

// Decision Path: There is an option there: "1. I didn't know him well | 2. I love my dad | 3. He's gone", the player can choose between those 3 options and that option is how Robert feels about his father. 
For each option, the dialogue tone changes but not the state of the game. 

![Choice 1](CHOICE%201.png)





scene_interogation() 

// Function of the code: This code handles both the interogation scene and the hanging goon scene. The code updates more variables depending on the action of the player. 
This influences Robert's ethical direction. 

// Decision Path:  If the goon is pulled up, the variable "bool isMerciful" becomes true which increases the integer/rating "int Robert_Mercy_Rating". 
If goon is not pulled up and the player lets him drop instead, "bool isMerciful" becomes false. 

![Choice 2](CHOICE%202.png)

scene_street_fight() 

// Function of the code: The code simulates the street fight scene encounter which includes dialogue and combat. The is where the variable "bool isRobertInjured" is determined. 

// Decision path: While in combat, if the player punches left, the character succeeds, if the player punches right, injury will occur (This is where isRobertInjured comes in to play).
The dialogue choices also shape the personality but does not affect any variables. 

![Choice 3](CHOICE%203.png)


scene_bar_flambae() 

// Function of the code: The function of this code is it manages the bar (Superhero bar) confrontation with flambae. This affects the impression score of Blonde Blazer. 

// Decision Path: If the player uses water, the impression score will increase slightly, If the player however uses alcohol it would significantly increase the score more. 

![Choice 4](CHOICE%204.png)


scene_billboard() 

// Function of the code: The function of this is code is it develops the intimacy of Robert and Blonde Blazer. It is the one that controls the romantic progress of the two and also the impression scoring. 

// Decision Path: If the player decides to let Robert kiss Blonde Blazer, it activates romance and also increases the impression score. 
If the moment was passed however, the romantic tension will be inactive. 


![Choice 5](CHOICE%205.png)

scene_combat_toxic() 

// Function of the code: This code's function is to present Robert in a confrontation with the Killer(Shroud/Toxic) who killed his father. 
It emphasizes Robert's personality through the dialogues and the combat tone. The player decisions here do not change the variables but it allows the expression of the character style that was established. 

// Decision Path: This final action reflects the temperament of Robert, it also sumarizes the intentions of the player. 

![Choice 6](CHOICE%206.png)


epilogue_summary() 

// Function of the code and Decision Path: Summarizes all the player's decisions in order to generate an ending. It reflects the romance, morality, reputation, and injury. 
It also acts as the ending of the story.


OVERALL PLAYTHROUGH FLOWCHART
![Choice 7](CHOICE%207.png)




