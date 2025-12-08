#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

bool isMerciful = false;
int Blazer_Impression_Score = 0;
bool isRomanticTensionActive = false;


// Phase 1 ==========
void theIntro();
void scene_interogation();

// Phase 2 ==========
void scene_street_fight();

// phase n3
void scene_bar_flambae();


// Rates
int Robert_Mercy_Rating = 0;
bool isRobertInjured = false;




int main() {
	cout << "=====Dispatch Decision Engine=====" << endl;
	cout << "By: Mark Angelo C. Panis" << endl;
	cout << "Enjoy" << endl;
	
	theIntro();
	scene_interogation();
	scene_street_fight();
	scene_bar_flambae();

	return 0;
}



// I found this out on the internet muwhehehe imma spam this
void typewrite(string text, int speed = 50000) {
	for (char c : text) {
		cout << c << flush;

		usleep(speed);
	}
}
// for slow typewriting effect
void theIntro() {
	int choice;


	cout <<  "\n==========THE INTRO==========" << endl;
	typewrite("\nRobert: Obviously, I love him. He's my dad.");
	typewrite("\nSoothing Goon: Hmm...");
	typewrite("\nRobert: What does that hmm mean? just say what you wanna say?");
	typewrite("\nSoothing Goon: It's just, when you add obviously it feels a little less obvious.");
	typewrite("\nSo, I'll ask again... How do you really feel about your father?");
	typewrite("\nIt's as if, maybe, it's a little more complicated than you feel comfortable admittig");
	typewrite("\nWhich is completely understandable\n");
	cout << "1. Didn't know him well.";
	cout << "\n2. I love my dad.";
	cout << "\n3. He's gone.";
	cout <<  "\nChoice: ";
	cin >> choice;

	if (choice == 1) {
		typewrite("\nRobert: Didn't really know  him well... he wasn't around much");
		typewrite("\nSoothing Goon: Well, you're gonna see him even less now, cause he's dead.");

	}
	else if (choice == 2) {
		typewrite("\nRobert: Look, I love my dad, alright? I love my dad. That's the truth");
		typewrite("\nSoothing Goon: Loved");
		typewrite("\nRobert: That's what i said");
		typewrite("\nSooting Goon: You said love");
		typewrite("\nYour dad's dead, so you don't love him, you loved him.");
	}

	else if (choice == 3) {
		typewrite("\nRobert: Look, He's gone.");
		typewrite("\nSoothing Goon: That's a bit of an understatement");
		typewrite("\nRobert: How so?");
		typewrite("\nSoothing Goon: Well, he's more than gone, cause he's fuckin' dead.");
		typewrite("\nThat's the most gone you can be.");
	}
	else {
		cout << "Invalid Choice";
	}
	typewrite("\nRobert: Just so, sensitive");
	typewrite("\nListen, if i didn't love him, we wouldn't be here, right?");
	typewrite("\nSoothing Goon: We don't have to get into it");
	typewrite("\nRobert: Nope. We're in it now");
	typewrite("\nWhy would i be trying to find the man who killed him if i didn't love him?");
	typewrite("\nWhy would i be doing any of this--");
	typewrite("\nShit. My nose is bleeding. Thought i was getting emotionally snotty");
	typewrite("\nSoothing Goon: No, it's probably from when i kicked you in the face");
	typewrite("\nRobert: Yeah. Thanks for reminding me. So here's what's gonna happen.");
	typewrite("\nI'm going too hang you off the side of this building");
	typewrite("\nand you're gonna tell me where shroud is,");
	typewrite("\nor I'm going to drop you to your death");
	typewrite("\nSoothing Goon: Come on, I thought we were having a breakthrough.");
	typewrite("\nRobert: Hey, we did. ");
	typewrite("\nYa know, for being a real piece of shit, you're pretty easy to talk to.");
	typewrite("\nBut the only breakthrough I need right now, is the location of Shroud");
	typewrite("\nSoothing Goon: I'm not telling you shit you fuckin' loser");
	typewrite("\nRobert: See. This is more like, how i thought this would go...");
	typewrite("\nSoothing Goon: I hope Shroud kills you just like he killed your father");
	typewrite("\nI hope he fuckin' spanks your litle daddy issue bitchass to death");
	typewrite("\nYou hear me? Ugh!");
	typewrite("\nAre we Outside?");
	typewrite("\nRobert: Windy up here tonight.");
	typewrite("\nSoothing Goon: Why're we outside?");
	typewrite("\nRobert: No telling where you land");
	typewrite("\nSoothig Goon: It smells like outside smells!");
	typewrite("\nfuckfuckfuck-- wait! Wait! Wait! Wait!");
	typewrite("\nRobert: Hey! Hey! I have neighbors");
	typewrite("\nUse your inside voice and just  tell me where Shroud is?");
	typewrite("\nSoothing Gooon: Okay, okay, uh, uh--Steel--Steel Mill. Llewelyn steel works okay? fuck.");
	typewrite("\nRobert: You sure about that?");
    typewrite("\nSoothing Goon: Yes! Please, that's all i know!");
    typewrite("\nRobert: Stop Screaming, goddamnit!");
    typewrite("\nSoothing Goon: HELP! HEEEL-mmmphh");
    typewrite("\nRobert: Hey, Hey i will pull you up if you quiet the fuck down.");
    typewrite("\nMMMMMPPHHH! MMMRRAAA-HEEEEL-mmmmphhh. MMMPHHHH!!\n");

}


void scene_interogation() {
	int choice;

	cout << "\n=====Scene 1: The Moral Crossroads: Apartment Interrogation=====" << endl;
	typewrite("\nThe goon hangs from the side of the building");
	typewrite("\nThe goon desperately ask for help and keeps on screaming");
	cout << "\nWhat will Robert do to the hanging  goon?\n";
	cout << "1. Pull him back" <<  endl;
	cout << "2. Letting him drop" << endl;
	cout << "\nEnter choice: ";
	cin >> choice;

	if (choice == 1) {
	    typewrite("\nHonestly, It was nice talking to someone about this stuff.");
	    typewrite("\nI guess what i'm saying is...I'm really glad i kidnapped you tonight.");
		isMerciful = true;
		Robert_Mercy_Rating += 5;
		typewrite("You pulled him up.\n+Compassionate reputatuion");
	}

	else {
	    typewrite("\nRobert: Sir, if you want something to scream about, I'll give you something to scream about");
	    typewrite("\nSoothing Goon: Whooaaoaoaoononono--Eaaaeaaaaghh--");
	    typewrite("\nYou piece of shit!");
	    typewrite("\nRobert: Hey, I ruined a perfectly good mattress to make sure you didn't die, okay?");
	    typewrite("\nYou're welcome!");
		isMerciful = false;
		typewrite("\nYou let him fall.\n +Intimidation factor");
	}

	cout << "\n=================================================================\n" << endl;
}


void scene_street_fight() {
    int choice;
    
    cout << "\n=============Scene 2: Street Fight=============" << endl;
    cout << "\nThieves Fight Punch vs Left vs right hand punch" << endl;
    cout << "\n===============================================" << endl;
    typewrite("\nNews Anchor: Up Next, is Mecha Man a Mecha quitter?");
    typewrite("\nPerson: Yeah, I mean, it seems like it'd be better if he died than be a mecha coward, you know");
    typewrite("\nWhat kind of example is he setting?");
    typewrite("\nNews Anchor: Stay tuned to find out.");
    cout << "\n*Thieves shatters the glass and stealing*" << endl;
    cout << "\n1. Put it down and leave";
    cout << "\n2. That's pretty disrespectful";
    cout << "\n3. I was watching that.";
    cout << "\nWhat will Mecha Man do?: ";
    cin >> choice;
    
    if (choice == 1) {
        typewrite("\nHey. Assholes. Yeah. just put the tv's back and you can leave");
        typewrite("\nI won't say anything to the cops and this doesn't need to escalate");
    }
    
    else if (choice == 2) {
        typewrite("\nMecha Man: Hey, assholes. Yeah. All you assholes. Pretty disrespectful for you to be doing that in front of me");
    }
    
    else if (choice == 3) {
        typewrite("\nHey. Assholes. Yeah, All you assholes. I was fucking watching that");
    }
    
    else {
        cout << "Invalid Input";
    }
    typewrite("\nRed Mask: Hey! who're you callin' assholes, asshole?!");
    typewrite("\nOrange Mask: I'll handle this idiot. Keep loading. We're out of here in thirty");
    typewrite("\n...and who tf are you? Yeah you. Go go fuckin' hobo ranger. Who tf are you?");
    cout << "\n1. Someone with nothing to lose.";
    cout << "\n2. I'm Mecha Man.";
    cout << "\n3. Honestly, not sure anymore";
    cout << "\nChoice: ";
    cin >> choice;
    
    if (choice == 1){
        typewrite("\nMecha man: Right now, I'm someone with nothing to lose..");
        typewrite("\nWhich is probably bad news for you.");
        typewrite("\nOrange mask: Well, what nothing you have, you're about to lose again");
    }
    else if (choice == 2){
        typewrite("\nMecha man: I'm Mecha man.");
        typewrite("\nGreen Mask: You're not Mecha man. That's Mecha man.");
        typewrite("\nMecha man: I'm Mecha man, dipshit, okay? That's my suit");
        typewrite("\nOrange mask: Well, you're gonna be wishin' you had it right now");
    }
    else if (choice == 3){
        typewrite("\nHonestly...I'm not sure anymore");
        typewrite("\nOrange mask: Right. Well, that feels heavy. But i dont know you so i dont give a fuck");
    }
    else{
        cout << "Invalid Input";
        
    }
    
    typewrite("\nMecha man: Whatever the case, I'm enough to deal with a pack of fuckin' skittles idiot like you");
    typewrite("\nOrange mask: goddamnit... Look, you're hurt, you're not thinkin' straight");
    typewrite("\nYou don't wanna fight someone who knows which hand every punch is coming from--");
    
    cout << "\n1. Punch with Left";
    cout << "\n2. Punch with Right";
    cout << "\nchoice: ";
    cin >> choice;
    
    
    if (choice == 1){
        typewrite("\n*You've successfully knocked out the attacker*");
        cout << "\n+Tactical Efficiency" << endl;
        cout << "\n!SUCCESS!" << endl;
    }
    else if (choice == 2){
        typewrite("\n*You got countered and struck by a crowbar*");
        cout << "\nGame Over. WOMP WOMP" << endl;
        isRobertInjured = true;
    }
    else {
        cout << "Invalid choice";
    }
    
    cout << "\nDon't worry, You've been save by Blonde Blazer(by a girl)" << endl;
    cout << "===================================================\n" << endl;
}

void scene_bar_flambae(){
    int choice;
    
    cout << "\n===============Scene 3: The Superhero Bar Scene===============" << endl;
    cout << "\n*Blonde blazer got spit by alcohol by Mecha Man and will bre right back*" << endl;
    cout << "================================================================" << endl;
    typewrite("\nMecha man: What're you doing?");
    typewrite("\nPerson: Hey! Bitch!..... Hey! I'm talkin' to you bitch!");
    typewrite("\nMecha Man: Alright, just so you know, I only turned around cause someone yelled, not because I'm a bitch or anything");
    typewrite("\nFlambae: Don't you watch the news? This is a superhero bar");
    typewrite("\nMecha man: Oh, wow, are you a superhero? That's so cool. Is this your power?");
    typewrite("\nyou're like, tell people obvious shit guy?");
    typewrite("\nFlambae: You're really gonna act like you don't remember me?");
    typewrite("\nMecha man: Wait, it's coming back to me... hold on, yeah, it's coming back to me..");
    cout << "\n1. Dr. Don't Do Shit";
    cout << "\n2. Mr. Wet Ponytail";
    cout << "\n3. Sunglasses at Night Guy";
    cout << "\nchoice: ";
    cin >>choice;
    
    typewrite("\nOh wait, i know it");
    if (choice == 1){
        typewrite("\nYou are Dr. Don't Do Shit");
        typewrite("\nYour deal is you walk up to people, look threatening, talk a big game then don't do shit about it");
        typewrite("\nAlso, you're not a real doctor cause you're a fuckin' idiot");
         typewrite("\nPerson: Ha ha, shit, that is damn");
    }
    else if(choice == 2){
        typewrite("\nYou know what, you are Mr. Wet Ponytail");
        typewrite("\nYour superpower is in, obviously, your ponytail, which aside from being disgusting, has the ability to never not be wet");
        typewrite("\nIn battle you whip it around and anyone it touches fuckin' kills themself");
        typewrite("\nPerson: Ha ha, shit, that is damn");
    }
    else if(choice == 3){
        typewrite("\nYou are Sunglasses, Indoors, at Night Guy. ");
        typewrite("\nYour superpoweris that you're able to let everyone know in the room that you're a douchebag");
        typewrite("\ncause you should literally never do that unless you're at the final table of the Worl Series of Poker");
        typewrite("\n--but even then, if you win, you're still a fuckin' loser");
        typewrite("\nPerson: Ha ha, shit, that is damn");
    }
    else {
        cout << "Invalid Input" << endl;
    }
    
    typewrite("\nFlambe: You Good?");
    typewrite("\nPerson: Sorry, I choked on my spit");
    typewrite("\nNo, Mecha Bitch. I control the fire--");
    typewrite("\nMecha man: The fire?");
    typewrite("\nFlambae: And the flame.. and my skin does not burn... I'am flambae, and you--");
    typewrite("\nMecha man: Wait, oh shit i do remember you");
    typewrite("\nYou're that shitty villain i busted up");
    typewrite("\nFlambae: Not anymore, Mecha Dck. As i literally just said, I am flambae, a real superhero");
    typewrite("\nand you are not Mecha man anymore. So you need to get the fuck out of here. \nNow, we can do this the easy way..");
    cout << "1. Water";
    cout << "2. Alcohol";
    cout << "Choice: ";
    cin >> choice;
    
    if (choice == 1){
        cout << "*\nMecha man spills water on flambae*" << endl;
        cout << "\n*Extinguishes flames; creates a subdued, painful outcome to flambae*" << endl;
        typewrite("\nMecha man: There the easy way. You're gonna hitme now right?");
        typewrite("\nFlambae: I've been waiting a long time for this");
        cout << "\n*Flambae charges on Mecha man and slips resulting to knockout*" << endl;
        Blazer_Impression_Score += 1;
        
    }
    else if (choice == 2){
        cout << "\n*Mecha man throws a glass of alcohol to flambae*" << endl;
        cout << "\n*Amplified the fire powers of flambae; sets hair ablaze creating chaos*"<< endl;
        cout << "\n*Leaves a stronger impression on witnesses and is remembered by Blonde Blazer*" << endl;
        Blazer_Impression_Score += 5;
    }
    else {
        cout << "Invalid input" << endl;
    }
    
    
    
}









