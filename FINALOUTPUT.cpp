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

// phase 4
void scene_billboard();

// phase 5 =====
void scene_combat_toxic();

// conclusion
void epilogue_summary();

// Rates
int Robert_Mercy_Rating = 0;
bool isRobertInjured = false;




int main() {
    int choice;
    char again;
    
    do{
	cout << "=============================Dispatch Decision Engine=============================" << endl;
	cout << "By: Mark Angelo C. Panis, Benedict Ronald D. Eborde, Romeo Alejandro P. Valenciano" << endl;
	cout << "Total of 15 Answerable Options." << endl;
	cout << "Angelo = 6, Benedict = 5, Romeo = 5" << endl;
	cout << "Enjoy!!" << endl;
	cout << "==================================================================================" << endl;
	cout << "\n======You can either choose an episode or just a Playthrough======" << endl;
	cout << "[1]. Introduction" << endl;
	cout << "[2]. Interogation Scene" << endl;
	cout << "[3]. Street Fight Scene" << endl;
	cout << "[4]. Flambae Bar Scene" << endl;
	cout << "[5]. Billboard Scene" << endl;
	cout << "[6]. Combat Toxic Scene" << endl;
	cout << "[7]. Whole Playthrough" << endl;
	cout << "[0]. Exit" << endl;
	cout << "==================================================================" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	
	
	switch(choice) {
	
	case 1:
	theIntro();
	break;
	
	case 2:
	scene_interogation();
	break;
	
	case 3:
	scene_street_fight();
	break;
	
	case 4:
	scene_bar_flambae();
	break;
	
	case 5:
	scene_billboard();
	break;
	
	case 6:
	scene_combat_toxic();
	break;
	
	case 7:
	theIntro();
	scene_interogation();
	scene_street_fight();
	scene_bar_flambae();
	scene_billboard();
	scene_combat_toxic();
	epilogue_summary();
	break;
	
	case 0:
	cout << "Goodbye...." << endl;
	break;
	
	default:
	cout << "Invalid choice" << endl;
	}
	cout << "Do you want to choose again?(y/n): ";
	cin >> again;
}
while (again == 'y' || again == 'Y');
cout << "Goodbye...";

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


	cout <<  "\n==========THE INTRO==========" << endl; // Benedict Eborde
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
	// Angelo Panis
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


void scene_interogation() { // Angelo Panis
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
		typewrite("\nYou pulled him up.\n+Compassionate reputatuion");
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
    typewrite("\nNews Anchor: Earlier today, Mecha man broke  his silence and adressed the media..."); //Romeo Valenciano
    typewrite("\nMecha man: There's been a lot of speculation about my health and the state of  the mecha man suit, and I'm here to put that speculation to rest");
    typewrite("\nThe suit has been damaged beyond my ability to repair, so i will be stepping back from superhero work..effective immedietly");
    typewrite("\n*People Asked Questions*");
    typewrite("\nOne at a time please");
    typewrite("\nAshley Rhiness: Do you have anything to say to your fans? The public outpouring. The vigils. A lot of them were worried you wouldn't wake up");
    cout << "\n1. Thank you";
    cout << "\n2. I did my best";
    cout << "\n3. It was all  for you";
    cout << "\nChoice: ";
    cin >>  choice;
    
    if (choice == 1){
        typewrite("\nMecha man: I just want to say, Thank you for the support. I hope to be worthy of it");
        
    }
    
    else if (choice == 2){
        typewrite("\nMecha man: I suppose i want them to know i did my best, I worked as long as i could as hard as i could and that's all anyone can do.");
        
    }
    
    else if (choice  == 3){
        typewrite("\nMecha man: Everything i've done, every sacrifice me and my family have made has been for the people of Los Angeles");
        
    }
    
    else {
        cout << "Invalid choice" << endl;
    }
    
    typewrite("\nNext Question.");
    typewrite("\nChris Stratton: Does this mean your retiring as Mecha man? Word on the street is you're donezo."); // Romeo Valenciano
    typewrite("\nMecha man: Are you a hundred years old? Why're you talking like that?");
    typewrite("\nChris: Answer the question, buddy boy. Are you retiring? My readers need the skinny and i aim to deliver. Let's get it into the record");
    cout << "\n1. No comment";
    cout << "\n2. Pretty much";
    cout << "\n3. Not yet";
    cout << "\nChoice: ";
    cin >> choice;
    
    if (choice == 1){
        typewrite("\nMecha man: I'm not looking to commment on that just yet. That's the only skinny i can give you");
        
    }
    
    else if (choice == 2){
        typewrite("\nMehca man: Well, I don't have a suit, and i don't have any superpowers so yeah, short of a miracle...pretty much");
        typewrite("\nChris: Is pretty muchc the same as definitively?");
        typewrite("\nMecha man: Pretty much is the same as pretty much, buddy boy.");
        
    }
    
    else if (choice == 3){
        typewrite("\nMecha man: Look, I'm not retiring. Not yet at least");
        typewrite("\nChris: Any idea what you can do without the Mecha man suit?");
        typewrite("\nMecha man: Not yet.");
        
    }
    
    else {
        cout << "Invalid choice" << endl;
    }
    
    typewrite("\nAlright, just one more please, I gotta get back to uh, just, just one more. Preferably someone from this century");
    //  Romeo Valenciano
    typewrite("\nCharles Kingsley: So. Shroud kills your father, goes to jail fifteen years, breaks out and immedietly dupes you into a trap");
    typewrite("\nwhere he destroys the Mecha man suit and puts you in a coma for months");
    typewrite("\nMecha man: I didn't hear a question in there.");
    typewrite("\nCharles: Two parter. First, why didn't Shroud kill you? You haven't been conscious for months, it'd be easy money taking you out");
    typewrite("\nMehca man: Ok, Shroud wanted  the Astral Pulse and Mecha man gone. He got both, I'm not sure i mattered much");
    typewrite("\nCharles: Right. You're unimportant. Which leads me to my next question. Most heroes avenge their family. You did the opposite");
    typewrite("\nyou killed their legacy. How dissapointed would your dad be if he were here right now? Your father, your grandfather, they must be rolling over in their graves.");
    cout << "\n1. Leave";
    cout << "\n2. Answer";
    cout << "\n3. Attack";
    cout << "\nChoice: ";
    cin >> choice;
    
    if (choice == 1){
        typewrite("\n*Mecha man Left*");
        
    }
    
    else if (choice == 2){
        typewrite("\nMecha man: I think he'd be proud... cause i'm alive, which, as you so sensitively pointed out, he isn't");
        typewrite("\ni think he knows that i sacrificed everything.. and that i did my best..Being mecham man.. protecting my community, was the greated honor i'll ever have...");
        typewrite("\nnow i have to live knowing that. Thank you for coming");
        
    }
    
    else if (choice == 3){
        typewrite("\n*Mecha man attacks charles and stomped on him*");
        cout << "+Intimidation Factor";
        typewrite("\nCharles on TV: Do i want to  sue? Of course? But there's two issues there, He clearly has nothing left and he was wearing a mask so..");
        typewrite("\nHow do you feel about the crowd seemingly encouraging him? It did explain why after the first 3-4 minutes no one was stepping in, yes. I was dissapointed with the chanting");
    }
    
    else{
        cout << "Invalid chooice" << endl;
    }
    // Benedict Eborde
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
    // Angelo Panis
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
    // Benedict Eborde
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
    
    typewrite("\n*You still got beaten up*");
    typewrite("\n*Blonde Blazer to the rescue*");
    typewrite("\nBlonde Blazer: That guy i threw.. he landed on the roof, right?");
    typewrite("\nGuy: All good!");
    typewrite("\nBlonde: Phew. Hi, I'm blonde blazer. I work over at superhero Dispatch Network");
    typewrite("\nMecha man: Hey, hi yeah. I know who you are. You're like famous");
    typewrite("\nBlonde: Oh. Uh, i don't know about that, i'm just a corporate hero for hire. You're the real deal. You're the famous one");
    typewrite("\nMecha: Right.. I don't think infamous is the same as famous but--");
    typewrite("\nBlonde: Oh gosh, your arm");
    typewrite("\nMecha: Ahh fuck, Hmm? Oh. Yeah, that's gross");
    typewrite("\nBlonde: You look like some kinda mime DJ. Let me see  it, I'll help you");
    cout << "\n1. Have you done this before?";
    cout << "\n2. I'd prefer a professional";
    cout << "\n3. I can do it myself";
    cout << "\nChoice: ";
    cin >> choice;
    
    typewrite("\nIt usually dislocates the other way");
    
    if (choice == 1){
        typewrite("\nMecha: Okay, but have you done this before? Cause mmaybe--Owwwww, wow-ay. WOW, that's, that's okay. Thank you");
        
    }
    
    else if (choice == 2){
        typewrite("\nMecha: No offense, but i'd prefer a medical professional to do i--uooowwwhhokayyy...uhh. thats, uh, thats okay");
        
    }
    
    else if (choice == 3){
        typewrite("\nMecha: It's fine. No, no its fine don't worry. I can do it myse-- fuckk yeah, that's okay. okay ohh yeah, thank you");
        
    }
    else {
        cout << "Invalid choice" << endl;
    }
    cout << "\n*Police came*" << endl;
    typewrite("\nBlonde: One of them is on that roof");
    typewrite("\nHey, you look like you could use a drink");
    typewrite("\nMecha: What makes you say that?");
    
    
    cout << "\nDon't worry, You've been save by Blonde Blazer(by a girl)" << endl;
    cout << "===================================================\n" << endl;
}

void scene_bar_flambae(){ // Angelo Panis and Romeo Alejandro
    int choice;
    
    cout << "\n====================Scene 3: The Superhero Bar Scene====================" << endl; 
    cout << "*Blonde blazer got spit by alcohol by Mecha Man and will bre right back*" << endl;
    cout << "========================================================================" << endl;
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
    // Angelo Panis
    typewrite("\nFlambe: You Good?"); 
    typewrite("\nPerson: Sorry, I choked on my spit");
    typewrite("\nNo, Mecha Bitch. I control the fire--");
    typewrite("\nMecha man: The fire?");
    typewrite("\nFlambae: And the flame.. and my skin does not burn... I'am flambae, and you--");
    typewrite("\nMecha man: Wait, oh shit i do remember you");
    typewrite("\nYou're that shitty villain i busted up");
    typewrite("\nFlambae: Not anymore, Mecha Dck. As i literally just said, I am flambae, a real superhero");
    typewrite("\nand you are not Mecha man anymore. So you need to get the fuck out of here. \nNow, we can do this the easy way..");
    cout << "\n1. Water";
    cout << "\n2. Alcohol";
    cout << "\nChoice: ";
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

void scene_billboard() { // Benedict Eborde
    int choice;
    
    cout << "\n=============Scene 4: Romance Route: Billboard Scene=============" << endl;
    cout << "\n=*Mecha Man & Blonde blazer flew up to the billboard & drinking*=" << endl;
    cout << "\n=================================================================" << endl;
    
    typewrite("\nRobert: I actually thought you were taking us to sit on it"); 
    typewrite("\nBlonde blazer: Hmm! Oh yeah, that woulda been cool ");
    typewrite("\nBut, no, yeah, this, this is better cause you can see it(HOLLYWOOD).. and it looks like there's a couple up there already so.");
    cout << "\n1. I really needed this.";
    cout << "\n2. Thanks for helping me.";
    cout << "\n3. Sorry about the spit thing.";
    cout << "\nChoice: ";
    cin >> choice;
    
    
    
    if (choice == 1){
        typewrite("\nRobert: All this has been pretty...overwhelming, you know. I don't get out, often and i think i really needed this");
        typewrite("\nSo, thank you. For bringing me out. I had a really great time.");
    }
    
    else if (choice == 2){
        typewrite("\nRobert: I really appreciate you coming to my rescue back there. I still think i could've handle it but--all i'm trying to say is.");
        typewrite("\nThanks. I should've just said that..But, yep I'm still talking");
    }
    
    else if (choice == 3){
        typewrite("\nRobert: I know i shouldn't bring it up cause it was mortifying for the both of us, but I am seriously sorry about the whole spitting thing.");
        typewrite("\nBlonde: Yeah that's usually like a second date kinda thing with me");
        typewrite("\nI'm joking. I'm joking. This is, this is not a date");
        typewrite("\nRobert: No, totally. I was thinking about something else. But yeah. Thanks. Thank you again..");
    }
    else {
        cout << "Invalid Input" << endl;
    }
    
    // Angelo Panis
    typewrite("\nBlonde: Don't you worry about it Robert Roberson"); 
    typewrite("\nRobert: How do you know my name?");
    typewrite("\nBlonde: Whoops!");
    typewrite("\nRobert: What's going on?");
    typewrite("\nBlonde: Okay I'll tell  you, but only after you tell me how you ended up with a name like that");
    typewrite("\nRobert: Oh you mean a name like Robert Roberson the Third?");
    typewrite("\nBlonde: The Third?! Three times this happened?");
    typewrite("\nRobert: There was grandpa Bobby, then my dad, who i called dad, but everyone else called Robie, and then me,");
    typewrite("\nCause i wanted to be taken seriously");
    typewrite("\nBlonde: Mhmm, a family tradition");
    typewrite("\nRobert: In more ways than one");
    typewrite("\nGramps was the first Mecha Man, he died in the suit before i was born");
    typewrite("\nDad was  killed fighting Shroud. That's when i took over, there was a little inheritance and the life insurance money");
    typewrite("\nBlonde: I'm so sorry. I didn't realize");
    typewrite("\nRobert: Just your run of the mil, sad superhero origin story.");
    typewrite("\nThe family tradition, if there is one, is dying in that suit");
    typewrite("\nwhich i guess, i don't have to worry about anymore......What is it?");
    typewrite("\nBlonde: I'm not quite drunk enough to share my origin story just yet..but, remind me to tell you someday");
    typewrite("\nRobert: Definitely");
    cout << "\n*Blonde blazer touched and glazed robert' face*" << endl; 
    typewrite("\nBlonde: We can work with this");
    cout << "\n1. Kiss her";
    cout << "\n2. Let the moment pass";
    cout << "\nChoice: ";
    cin >> choice;
    
    if (choice == 1){
        typewrite("\n*You kissed her and she blushed(I think) and spark ignites  within*\n");
        typewrite("\nBlonde: No. This..I'm, I'm soryy if i gave the wrong impression");
        isRomanticTensionActive = true;
        Blazer_Impression_Score += 5;
        
    }
    
    else if (choice == 2){
        typewrite("\n*You hold back. She looks away, but the tension remains*\n");
        typewrite("\nBlonde: Sorry, I'm actually here with..a purpose and..");
        isRomanticTensionActive = false;
        
        
    }
    else {
        cout << "Invalid Input" << endl;
    }
    
    typewrite("\nRobert: Oh no");
    typewrite("\nBlonde It's my fault");
    typewrite("\nRobert: I'm so sorry. I totally misread that--");
    typewrite("\nBlonde: You didn't-- I mean, you did, but i definitely...");
    typewrite("\nThe way I went about things tonight...I'm sorry. It was all a little loose. A little unprofessional");
    typewrite("\nRobert: Unprofessional? I'm not sure that that applies to this but--");
    
    cout << "\n================================================================" << endl;
    
}

void scene_combat_toxic() { // Benedict Eborde
    int choice;
    
    cout << "\n============Scene 4: Character Reflection: Combat Decision=============" << endl;
    cout << "\n= Punt vs. Stomp Dilemma against Toxic to reflect robert's personality=" << endl;
    cout << "\n=======================================================================" << endl;
    
    
    cout << "\n*Robert went to the location where soothing goon told him*" << endl; 
    cout << "\n1. Prepare to die";
    cout << "\n2. It's over, Shroud";
    cout << "\n3. I'm here to fuck you up";
    cout << "\nChoice: ";
    cin >> choice;
    
    typewrite("\nMecha Man: Hey, um, can i get a copy of that video when we're through here?");
    
    if (choice == 1){
        typewrite("\nCause there are some people out there who're gonna want proof you're dead.");
        typewrite("\nSoothing goon: Oh no. Should i update my wikipidea page?");
        
    }
    
    else if(choice == 2){
        typewrite("\nCause it's over, Shroud..and it would be nice to watch that back at a different angle.");
        typewrite("\nSoothing goon: Oh no. It's over, Shroud!");
        
    }
    
    else if (choice == 3){
        typewrite("\nCause, I'm about to fuck you up and those videos do numbers. Maybe we can go viral--");
        typewrite("\nSoothing goon: Ohhh. Maybe we can go virallll...");
    
    }
    else {
        cout << "Invalid choice" << endl;
    }
    // Angelo Panis
        typewrite("\nAll this buildup. Face to face with your father's killer and you come in here with that lame shit?");
        typewrite("\nMecha man: Ugh. Where the fuck is shroud?");
        typewrite("\nSoothing goon: He'll be here in a bit. Oh, hey, after our conversation, I asked him about dad. Fun little tidbit, he was very well hydrated");
        typewrite("\nit turns out right after Shroud shot him in the chest, your dad pissed his pants. Betcha didn't know that, huh? So, after that bullet tore through his inside");
        typewrite("\nhe still had enough time to know how absolutely fucked he was and just pissed himself like a little bitch. It was like, so much piss");
        cout << "\n1. PUNT";
        cout << "\n2. STOMP";
        cout << "\nChoice: ";
        cin >> choice;
        
        typewrite("\nCause your dad was wearing shorts so it just--");
        typewrite("\nMecha man: Hey. I get it");
        
        if (choice == 1){
            typewrite("\n*You punt toxic like a football.*");
            cout << "\n*Flashy approach; creative problem-solving; comic relief*" << endl;
            isMerciful = true;

            
        }
        else if(choice == 2){
            typewrite("\n*A heavy stomp ends the fight efficiently*");
            cout << "\nEven merciful robert has limits" << endl;
            cout << "\n*Brutal efficiency + No nonsense approach + Intimidation" << endl;
            isMerciful = false;
            
        }
        else {
            cout << "Invalid choice" << endl;
        }
        cout << "\n===================================================================" << endl;
}

void epilogue_summary(){  // Angelo Panis & Benedict Eborde
    cout << "\n===================================" << endl;
    cout << "\n= E P I L O G U E   S U M M A R Y =" << endl;
    cout << "\n===================================" << endl;
    
    if (isMerciful) {
        cout << "Robert walks the path of compassion.\n";
    } else {
        cout << "Robert embraces pragmatic efficiency.\n";
    }

    // Street fight
    if (isRobertInjured) {
        cout << "He carries bruises from earlier mistakes.\n";
    }

    // Impression Score
    cout << "\nBlonde Blazer’s impression score: " 
         << Blazer_Impression_Score << "\n";

    if (Blazer_Impression_Score >= 6)
        cout << "She remembers Robert vividly — for better or worse.\n";
    else
        cout << "Her impression of Robert is faint and uncertain.\n";

    // Romance tension
    if (isRomanticTensionActive)
        cout << "A future romance with Blonde Blazer is now possible.\n";
    else
        cout << "Romantic tension lingers, unresolved.\n";

    cout << "\nRobert's Pivot begins — from hero to dispatcher.\n";
}









