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


// Rates
int Robert_Mercy_Rating = 0;
bool isRobertInjured = false;




int main() {
	cout << "=====Dispatch Decision Engine=====" << endl;
	cout << "By: Mark Angelo C. Panis" << endl;
	cout << "Enjoy" << endl;
	
	theIntro();
	scene_interogation();

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
