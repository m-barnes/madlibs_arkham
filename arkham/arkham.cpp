//Critter caretaker project as designed by Jeremy Oakes, programmer extrodinaire
#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>


using namespace std;

int currentCell = 1;
string currentVillain = "Mad Hatter";
string cell1 = "Mad Hatter";
string cell2 = "Riddler";
string cell3 = "Scarecrow";
string cell4 = "Two Face";
string cell5 = "Joker";
string cell6 = "Harley Quinn";
string cell7 = "Poison Ivy";
string cell8 = "Mr. Freeze";
int MadHatter_Hunger = 0;
int Riddler_Hunger = 0;
int Scarecrow_Hunger = 0;
int TwoFace_Hunger = 0;
int Joker_Hunger = 0;
int HarleyQuinn_Hunger = 0;
int PoisonIvy_Hunger = 0;
int MrFreeze_Hunger = 0;
int MadHatter_Boredom = 0;
int Riddler_Boredom = 0;
int Scarecrow_Boredom = 0;
int TwoFace_Boredom = 0;
int Joker_Boredom = 0;
int HarleyQuinn_Boredom = 0;
int PoisonIvy_Boredom = 0;
int MrFreeze_Boredom = 0;

string BestFood = "Mad Hatter";

void Color(int color)
{
	//COLORS LIST
	//1: Blue
	//2: Green
	//3: Cyan
	//4: Red
	//5: Purple
	//6: Yellow (Dark)
	//7: Default white
	//8: Gray/Grey
	//9: Bright blue
	//10: Brigth green
	//11: Bright cyan
	//12: Bright red
	//13: Pink/Magenta
	//14: Yellow
	//15: Bright white
	//Numbers after 15 include background colors
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0);
	void Talk();
	void Status();
	void Change();
	void Feed();
	void Eat(int food = 4);
	void Play(int fun = 4);

private:
	int m_Hunger;
	int m_Boredom;

	int GetMood() const;
	void PassTime(int time = 1);

};

Critter::Critter(int hunger, int boredom) :
	m_Hunger(hunger),
	m_Boredom(boredom)
{}

inline int Critter::GetMood() const
{
	return (m_Hunger + m_Boredom);
}

void Critter::PassTime(int time)
{
	MadHatter_Hunger += time;
	MadHatter_Boredom += time;
	Riddler_Hunger += time;
	Riddler_Boredom += time;
	Scarecrow_Hunger += time;
	Scarecrow_Boredom += time;
	TwoFace_Hunger += time;
	TwoFace_Boredom += time;
	Joker_Hunger += time;
	Joker_Boredom += time;
	HarleyQuinn_Hunger += time;
	HarleyQuinn_Boredom += time;
	PoisonIvy_Hunger += time;
	PoisonIvy_Boredom += time;
	MrFreeze_Hunger += time;
	MrFreeze_Boredom += time;
}

void Critter::Talk()
{

	Color(12);

	cout << "\n";

	if (currentVillain == "Mad Hatter")
	{
		cout << "If you're asking how I feel, good sir, I'm afraid I'm filled with malice\n";
		cout << "For you see, I'm trapped in here without my beloved Alice\n";

		if (MadHatter_Hunger < 6)
		{
			cout << "I'll say one thing for sure, the food here is divine\n";
			cout << "Just the right amount of pepper for that squealing infant swine\n";
		}

		if (MadHatter_Hunger > 5 && MadHatter_Hunger < 11)
		{
			cout << "You may have me in this cell, but you will never beat me\n";
			cout << "Could I have a piece of cake with a note that says 'Eat me'?\n";
		}

		if (MadHatter_Hunger > 10 && MadHatter_Hunger < 16)
		{
			cout << "Even the Queen of Hearts would have spared a piece of bread\n";
			cout << "If you do not feed me soon, you may just lose your head\n";
		}
		if (MadHatter_Hunger > 15)
		{
			cout << "I need more sustenance, I've been driven close to starving\n";
			cout << "Bring to me a butcher's knife and I'll begin the carving\n";
		}

		if (MadHatter_Boredom < 6)
		{
			cout << "You've done well to entertain, and I can't well say I'm bored\n";
			cout << "But I won't be truly happy 'til you're bleeding on the floor\n\n";
		}

		if (MadHatter_Boredom > 5 && MadHatter_Boredom < 11)
		{
			cout << "I'm not exactly going crazy, though I'm not that entertained\n";
			cout << "If you want to liven up the joint, you could show us all your brains\n\n";
		}

		if (MadHatter_Boredom > 10 && MadHatter_Boredom < 16)
		{
			cout << "Things are getting awful boring and I'm dying for some fun\n";
			cout << "Look into my eyes, dear boy, and offer me your gun\n\n";
		}
		if (MadHatter_Boredom > 15)
		{
			cout << "I cannot stand this long ennui, you are boring me to tears\n";
			cout << "You should bring the Scarecrow and then show us all your fears\n\n";
		}

	}


	if (currentVillain == "Riddler")
	{
		cout << "You look positively perplexed, my friend.\n";
		cout << "Perhaps you should flex that puny organ that you call a brain.\n";

		if (Riddler_Hunger < 6)
		{
			cout << "I am heavy and uncomfortable, but in time that will pass.\n";
			cout << "At least, until I am made heavy again. What am I?\n";
		}

		if (Riddler_Hunger > 5 && Riddler_Hunger < 11)
		{
			cout << "I am a yearning you can barely feel, an emptiness within fullness.\n";
			cout << "I cannot be satisfied, for I am already satiated. What am I?\n";
		}

		if (Riddler_Hunger > 10 && Riddler_Hunger < 16)
		{
			cout << "I am constantly growing, like a hole within a chamber.\n";
			cout << "If I am not filled, I will eventually shrink. What am I?\n";
		}
		if (Riddler_Hunger > 15)
		{
			cout << "I am violent like the gnashing of teeth. I twist and turn\n";
			cout << "like a hurricane fueled by need. What am I?\n";
		}

		if (Riddler_Boredom < 6)
		{
			cout << "I make your heart lighter, I quicken the pace of time.\n";
			cout << "You pursue me, but often do not have me. What am I?\n\n";
		}

		if (Riddler_Boredom > 5 && Riddler_Boredom < 11)
		{
			cout << "I am flat like a mattress, sharp like a note.\n";
			cout << "You are fine with me, because I could be worse. What am I?\n\n";
		}

		if (Riddler_Boredom > 10 && Riddler_Boredom < 16)
		{
			cout << "I'm like nails on a chalkboard, making you fidget.\n";
			cout << "You'll want more, but I keep you from obtaining it. What am I?\n\n";
		}
		if (Riddler_Boredom > 15)
		{
			cout << "I am fast and full of fire, I rain down and I overcome.\n";
			cout << "I will be your death if you do not address me. What am I?\n\n";
		}
	}


	if (currentVillain == "Scarecrow")
	{
		cout << "You seem accustomed to the darkness and shadows here.\n";
		cout << "So I wonder, what is it that truly terrifies you?\n";

		if (Scarecrow_Hunger < 6)
		{
			cout << "Are you afraid of a post-scarcity world?\n";
			cout << "Where every basic need is met and you no longer have purpose?\n";
		}

		if (Scarecrow_Hunger > 5 && Scarecrow_Hunger < 11)
		{
			cout << "Are you afraid of that gnawing in the pit of your stomach?\n";
			cout << "Knowing you are wel-fed but somehow still yearn for more?\n";
		}

		if (Scarecrow_Hunger > 10 && Scarecrow_Hunger < 16)
		{
			cout << "Are you afraid of the growing hunger?\n";
			cout << "How will you eat as the food becomes scarce?\n";
		}
		if (Scarecrow_Hunger > 15)
		{
			cout << "Are you afraid of starving to death?\n";
			cout << "Are you willing to risk your life over a scrap of food?\n";
		}

		if (Scarecrow_Boredom < 6)
		{
			cout << "Perhaps you afraid of being truly satisfied.\n";
			cout << "Maybe that's the reason you always end up a failure.\n\n";
		}

		if (Scarecrow_Boredom > 5 && Scarecrow_Boredom < 11)
		{
			cout << "Perhaps you're afraid of the creeping ennui.\n";
			cout << "Choking out your life before you even feel its grasp.\n\n";
		}

		if (Scarecrow_Boredom > 10 && Scarecrow_Boredom < 16)
		{
			cout << "Perhaps you're afraid of going stir crazy in here.\n";
			cout << "Maybe YOU'RE the one who belongs behind these bars.\n\n";
		}
		if (Scarecrow_Boredom > 15)
		{
			cout << "Perhaps you feel the terror of nothingness.\n";
			cout << "The eternal embrace of death before you even close your eyes.\n\n";
		}
	}

	if (currentVillain == "Two Face")
	{
		cout << "If the coin lands on this side, you may address us.\n";
		cout << "But if it lands on this side, we'll break every bone in your body.\n";

		if (TwoFace_Hunger < 6)
		{
			cout << "The walls in here could use a nice two-tone paint job.\n";
			cout << "But we've got no complaints about the food.\n";
		}

		if (TwoFace_Hunger > 5 && TwoFace_Hunger < 11)
		{
			cout << "We don't need to eat again just yet.\n";
			cout << "But you better not forget us come dinner time.\n";
		}

		if (TwoFace_Hunger > 10 && TwoFace_Hunger < 16)
		{
			cout << "We're starting to get a little aggravated.\n";
			cout << "We suggest you feed us immediately.\n";
		}
		if (TwoFace_Hunger > 15)
		{
			cout << "Feed us or you're going to regret it.\n";
			cout << "We're so hungry we could eat our coin.\n";
		}

		if (TwoFace_Boredom < 6)
		{
			cout << "We're actually having a fair bit of fun in here.\n";
			cout << "This is going to be the easiest stretch we've ever done.\n\n";
		}

		if (TwoFace_Boredom > 5 && TwoFace_Boredom < 11)
		{
			cout << "We could stand to liven things up around here a little.\n";
			cout << "Are you a gambling man? We'll flip, you call it.\n\n";
		}

		if (TwoFace_Boredom > 10 && TwoFace_Boredom < 16)
		{
			cout << "We should play a game of poker to liven things up around here.\n";
			cout << "We'll deal, no limit and dueces are wild.\n\n";
		}
		if (TwoFace_Boredom > 15)
		{
			cout << "We're going to murder someone if we don't get some entertainment.\n";
			cout << "And the coin says we're going to start with YOU.\n\n";
		}
	}

	if (currentVillain == "Joker")
	{
		cout << "A visitor?! For me? Wonderful!\n";
		cout << "Well don't just stand there, make me laugh...\n";

		if (Joker_Hunger < 6)
		{
			cout << "I must say the food here is positively exquisite!\n";
			cout << "I give the food at Arkham five bars!\n";
		}

		if (Joker_Hunger > 5 && Joker_Hunger < 11)
		{
			cout << "I wish I could see a menu...\n";
			cout << "But I can't even see why kids like the taste of cinnamon toast crunch!\n";
		}

		if (Joker_Hunger > 10 && Joker_Hunger < 16)
		{
			cout << "I must say, I'm feeling rather famished.\n";
			cout << "Would you kindly see if Mr. Freeze has some cold cuts he can spare?\n";
		}
		if (Joker_Hunger > 15)
		{
			cout << "I'm so hungry I could eat a tree!\n";
			cout << "Surely Ivy has one or two she could spare?\n";
		}

		if (Joker_Boredom < 6)
		{
			cout << "I can't begin to tell you how much fun I'm having.\n";
			cout << "Why, you're almost as much fun as old Bats himself!\n\n";
		}

		if (Joker_Boredom > 5 && Joker_Boredom < 11)
		{
			cout << "This is a pretty swell place, but let's make it more fun!\n";
			cout << "Bring me a pencil and I'll show you a magic trick...\n\n";
		}

		if (Joker_Boredom > 10 && Joker_Boredom < 16)
		{
			cout << "I'm really starting to miss Bats right about now.\n";
			cout << "It may be time to arrange another breakout soon...\n\n";
		}
		if (Joker_Boredom > 15)
		{
			cout << "I haven't been this bored since the Batman died!\n";
			cout << "Maybe killing a few more people will lighten my spirits...\n\n";
		}
	}

	if (currentVillain == "Harley Quinn")
	{
		cout << "Hey, you in the mall cop getup!\n";
		cout << "Don't ya know it's impolite to keep a girl all cooped up?!\n";

		if (HarleyQuinn_Hunger < 6)
		{
			cout << "I gotta give you props for the food though.\n";
			cout << "Reminds me of the first time I cooked for Mr. J...\n";
		}

		if (HarleyQuinn_Hunger > 5 && HarleyQuinn_Hunger < 11)
		{
			cout << "I gotta say, the food here's not too bad.\n";
			cout << "Could use a little more pepper. Or some cyanide...\n";
		}

		if (HarleyQuinn_Hunger > 10 && HarleyQuinn_Hunger < 16)
		{
			cout << "The food here is the absolute pits!\n";
			cout << "I'd rather starve to death than eat this slop!\n";
		}
		if (HarleyQuinn_Hunger > 15)
		{
			cout << "What are ya tryin' to do anyway, starve me to death?!\n";
			cout << "I need some food, mister!\n";
		}

		if (HarleyQuinn_Boredom < 6)
		{
			cout << "This is the most fun I've ever had while locked up!\n";
			cout << "Okay, okay, maybe not the MOST fun...\n\n";
		}

		if (HarleyQuinn_Boredom > 5 && HarleyQuinn_Boredom < 11)
		{
			cout << "This is a pretty cool place ya got here.\n";
			cout << "I just wish Bud and Lou were here with me...\n\n";
		}

		if (HarleyQuinn_Boredom > 10 && HarleyQuinn_Boredom < 16)
		{
			cout << "This place is getting kinda dull, ya know?!\n";
			cout << "Could ya at least stick me in the same cell with Mister J?\n\n";
		}
		if (HarleyQuinn_Boredom > 15)
		{
			cout << "It's so boring! I thought I was nuts before...\n";
			cout << "But this place is making me go crazy all over again!\n\n";
		}
	}

	if (currentVillain == "Poison Ivy")
	{
		cout << "This place is so dismal and dreary...\n";
		cout << "Too much grey and not enough green.\n";

		if (PoisonIvy_Hunger < 6)
		{
			cout << "The sunlight you provide is more than adequate.\n";
			cout << "Say what you will about the decor, at least I'm well-nourished.\n";
		}

		if (PoisonIvy_Hunger > 5 && PoisonIvy_Hunger < 11)
		{
			cout << "This place could stand a little more sunlight.\n";
			cout << "But I guess this is Gotham, after all.\n";
		}

		if (PoisonIvy_Hunger > 10 && PoisonIvy_Hunger < 16)
		{
			cout << "I hope you're not trying to starve me out...\n";
			cout << "I suggest you give me sunlight immediately.\n";
		}
		if (PoisonIvy_Hunger > 15)
		{
			cout << "What kind of monster blocks out the sun?\n";
			cout << "You will pay for this, I promise you...\n";
		}

		if (PoisonIvy_Boredom < 6)
		{
			cout << "For a human, you're surprisingly entertaining...\n";
			cout << "But I would still kill a hundred of you to save a single flower.\n\n";
		}

		if (PoisonIvy_Boredom > 5 && PoisonIvy_Boredom < 11)
		{
			cout << "I am content with these visits, if not entranced.\n";
			cout << "Perhaps you would like a lesson in enchanting someone?\n\n";
		}

		if (PoisonIvy_Boredom > 10 && PoisonIvy_Boredom < 16)
		{
			cout << "You really should do more to make this place hospital.\n";
			cout << "Even a house plant to talk to would be a start...\n\n";
		}
		if (PoisonIvy_Boredom > 15)
		{
			cout << "All it will take is a single seed on the wind...\n";
			cout << "And then I will end this crushing boredom and your life.\n\n";
		}
	}

	if (currentVillain == "Mr. Freeze")
	{
		cout << "My incarceration is a waste of time...\n";
		cout << "Time that would be better spent finding a cure for Nora.\n";

		if (MrFreeze_Hunger < 6)
		{
			cout << "I am perfectly satisfied with the amount of food I have received.\n";
		}

		if (MrFreeze_Hunger > 5 && MrFreeze_Hunger < 11)
		{
			cout << "I believe our food portions should be slightly increased.\n";
		}

		if (MrFreeze_Hunger > 10 && MrFreeze_Hunger < 16)
		{
			cout << "If you do not feed me soon, there will be consequences.\n";
		}
		if (MrFreeze_Hunger > 15)
		{
			cout << "I demand to be fed immediately.\n";
			cout << "If I am not, my retribution will be chilling...\n";
		}

		if (MrFreeze_Boredom < 6)
		{
			cout << "Despite the conditions I find myself in,\n";
			cout << "I'm having an ice time...\n\n";
		}

		if (MrFreeze_Boredom > 5 && MrFreeze_Boredom < 11)
		{
			cout << "I feel like a movie would help me pass the time.\n";
			cout << "Could you check the prison library for a copy of Frozen?\n\n";
		}

		if (MrFreeze_Boredom > 10 && MrFreeze_Boredom < 16)
		{
			cout << "I wish I could suffer the infliction known as brain freeze.\n";
			cout << "Then my mind would be unable to contemplate this boredom.\n\n";
		}
		if (MrFreeze_Boredom > 15)
		{
			cout << "I'm so completely bored that... that...\n";
			cout << "(Sorry, Batman & Robin used literally ALL THE ICE PUNS!)\n\n";
		}
	}

	Color(7);



	PassTime();
}

string GetGender(string name)
{
	string gender = "He";

	if (name == "Harley Quinn" || name == "Poison Ivy")
	{
		gender = "She";
	}

	return gender;
}

string Mood(string name)
{
	int mood;
	string outMood = "calm";

	if (currentVillain == "Mad Hatter")
	{
		mood = (MadHatter_Hunger + MadHatter_Boredom);
	}
	if (currentVillain == "Riddler")
	{
		mood = (Riddler_Hunger + Riddler_Boredom);
	}
	if (currentVillain == "Scarecrow")
	{
		mood = (Scarecrow_Hunger + Scarecrow_Boredom);
	}
	if (currentVillain == "Two Face")
	{
		mood = (TwoFace_Hunger + TwoFace_Boredom);
	}
	if (currentVillain == "Joker")
	{
		mood = (Joker_Hunger + Joker_Boredom);
	}
	if (currentVillain == "Harley Quinn")
	{
		mood = (HarleyQuinn_Hunger + HarleyQuinn_Boredom);
	}
	if (currentVillain == "Poison Ivy")
	{
		mood = (PoisonIvy_Hunger + PoisonIvy_Boredom);
	}
	if (currentVillain == "Mr. Freeze")
	{
		mood = (MrFreeze_Hunger + MrFreeze_Boredom);
	}

	if (mood > 15)
	{
		outMood = "furious";
	}
	else if (mood > 10)
	{
		outMood = "angry";
	}
	else if (mood > 5)
	{
		outMood = "agitated";
	}
	else
	{
		outMood = "calm";
	}

	return outMood;
}

void Critter::Status()
{
	Color(10);
	cout << "You are standing outside of " << currentVillain << "'s cell.\n\n";
	cout << GetGender(currentVillain) << " appears " << Mood(currentVillain) << ".\n\n";
	Color(7);
}

void Critter::Eat(int food)
{
	cout << "Brruppp.\n";

	m_Hunger -= food;
	if (m_Hunger < 0)
	{
		m_Hunger = 0;
	}
	PassTime();
}

void Critter::Play(int fun)
{
	if (currentVillain == "Mad Hatter")
	{
		MadHatter_Boredom -= fun;
		if (MadHatter_Boredom < 0)
		{
			MadHatter_Boredom = 0;
		}
	}

	if (currentVillain == "Riddler")
	{
		Riddler_Boredom -= fun;
		if (Riddler_Boredom < 0)
		{
			Riddler_Boredom = 0;
		}
	}

	if (currentVillain == "Scarecrow")
	{
		Scarecrow_Boredom -= fun;
		if (Scarecrow_Boredom < 0)
		{
			Scarecrow_Boredom = 0;
		}
	}

	if (currentVillain == "Two Face")
	{
		TwoFace_Boredom -= fun;
		if (TwoFace_Boredom < 0)
		{
			TwoFace_Boredom = 0;
		}
	}

	if (currentVillain == "Joker")
	{
		Joker_Boredom -= fun;
		if (Joker_Boredom < 0)
		{
			Joker_Boredom = 0;
		}
	}

	if (currentVillain == "Harley Quinn")
	{
		HarleyQuinn_Boredom -= fun;
		if (HarleyQuinn_Boredom < 0)
		{
			HarleyQuinn_Boredom = 0;
		}
	}

	if (currentVillain == "Poison Ivy")
	{
		PoisonIvy_Boredom -= fun;
		if (PoisonIvy_Boredom < 0)
		{
			PoisonIvy_Boredom = 0;
		}
	}

	if (currentVillain == "Mr. Freeze")
	{
		MrFreeze_Boredom -= fun;
		if (MrFreeze_Boredom < 0)
		{
			MrFreeze_Boredom = 0;
		}
	}



}

void Critter::Change()
{

	int choice;

	cout << "\nWhose cell would you like to visit?\n\n";
	cout << "1 - Mad Hatter\n";
	cout << "2 - Riddler\n";
	cout << "3 - Scarecrow\n";
	cout << "4 - Two Face\n";
	cout << "5 - Joker\n";
	cout << "6 - Harley Quinn\n";
	cout << "7 - Poison Ivy\n";
	cout << "8 - Mr. Freeze\n\n";
	cout << "0 - Cancel\n\n";


	cout << "Choice: ";
	Color(10);
	cin >> choice;
	Color(7);
	cout << "\n\n";
	switch (choice)
	{
	case 0:
		break;
	case 1:
		currentVillain = "Mad Hatter";
		break;
	case 2:
		currentVillain = "Riddler";
		break;
	case 3:
		currentVillain = "Scarecrow";
		break;
	case 4:
		currentVillain = "Two Face";
		break;
	case 5:
		currentVillain = "Joker";
		break;
	case 6:
		currentVillain = "Harley Quinn";
		break;
	case 7:
		currentVillain = "Poison Ivy";
		break;
	case 8:
		currentVillain = "Mr. Freeze";
		break;
	}

}


void Critter::Feed()
{

	int choice;

	cout << "\nWhich meal would you like to send out?\n\n";
	cout << "1 - Banana Cream Pie\n";
	cout << "2 - Double Cheeseburger\n";
	cout << "3 - Fugu (Puffer Fish Sushi)\n";
	cout << "4 - Fried Mushrooms\n";
	cout << "5 - Jambalaya\n";
	cout << "6 - Arctic Char\n";
	cout << "7 - Mystery Meat\n";
	cout << "8 - Monitor Poison Ivy Sunlight Intake\n\n";

	cout << "Choice: ";
	Color(10);
	cin >> choice;
	Color(7);
	cout << "\n\n";
	switch (choice)
	{
	case 1:
		cout << "You send out banana cream pies.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "The Joker seems especially pleased.\n\n";
		Joker_Hunger -= 4;
		system("PAUSE");
		break;
	case 2:
		cout << "You send out double cheeseburgers.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "Two Face seems especially pleased.\n\n";
		TwoFace_Hunger -= 4;
		system("PAUSE");
		break;
	case 3:
		cout << "You send out fugu.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "Scarecrow seems especially pleased.\n\n";
		Scarecrow_Hunger -= 4;
		system("PAUSE");
		break;
	case 4:
		cout << "You send out fried mushrooms.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "Mad Hatter seems especially pleased.\n\n";
		MadHatter_Hunger -= 4;
		system("PAUSE");
		break;
	case 5:
		cout << "You send out jambalaya.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "Harley Quinn seems especially pleased.\n\n";
		HarleyQuinn_Hunger -= 4;
		system("PAUSE");
		break;
	case 6:
		cout << "You send out arctic char.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "Mr. Freeze seems especially pleased.\n\n";
		MrFreeze_Hunger -= 4;
		system("PAUSE");
		break;
	case 7:
		cout << "You send out mystery meat.\n";
		cout << "Everyone eats except Poison Ivy.\n";
		cout << "The Riddler seems especially pleased.\n\n";
		Riddler_Hunger -= 4;
		system("PAUSE");
		break;
	case 8:
		cout << "You monitor Poison Ivy's sunlight intake.\n";
		cout << "No one else eats.\n";
		cout << "Poison Ivy is especially pleased.\n\n";
		PoisonIvy_Hunger -= 8;
		MadHatter_Hunger += 4;
		Riddler_Hunger += 4;
		TwoFace_Hunger += 4;
		Scarecrow_Hunger += 4;
		Joker_Hunger += 4;
		HarleyQuinn_Hunger += 4;
		MrFreeze_Hunger += 4;
		system("PAUSE");
		break;
	}

	MadHatter_Hunger -= 4;
	Riddler_Hunger -= 4;
	TwoFace_Hunger -= 4;
	Scarecrow_Hunger -= 4;
	Joker_Hunger -= 4;
	HarleyQuinn_Hunger -= 4;
	MrFreeze_Hunger -= 4;

	if (MadHatter_Hunger < 0)
	{
		MadHatter_Hunger = 0;
	}
	if (Riddler_Hunger < 0)
	{
		Riddler_Hunger = 0;
	}
	if (TwoFace_Hunger < 0)
	{
		TwoFace_Hunger = 0;
	}
	if (Scarecrow_Hunger < 0)
	{
		Scarecrow_Hunger = 0;
	}
	if (Joker_Hunger < 0)
	{
		Joker_Hunger = 0;
	}
	if (HarleyQuinn_Hunger < 0)
	{
		HarleyQuinn_Hunger = 0;
	}
	if (PoisonIvy_Hunger < 0)
	{
		PoisonIvy_Hunger = 0;
	}
	if (MrFreeze_Hunger < 0)
	{
		MrFreeze_Hunger = 0;
	}



	PassTime();

	cout << "\n";
}



int main()
{

	Critter crit;

	Color(6);

	cout << "                                  .      .\n";
	cout << "                         ./       |      |        \\.\n";
	cout << "                       .:(        |i __ j|        ):`.\n";
	cout << "                     .'   `._     |`::::'|     _.'    `.\n";
	cout << "                   .'        \"---.j `::' f.---\"         `.\n";
	cout << "             _____/     ___  ______      __    __   ___   \\_   __\n";
	cout << "            |      \\   |   ||      |`__'|  \\  /  | |   | |\" \\ |  |\n";
	cout << "            |  .-.  | .'   `|_    _|\\--/|   \\/   |.'   `.|   \\|  |\n";
	cout << "            |  |_|  | |  i  | |  |  :\"\":|        ||  i  ||    |  |\n";
	cout << "            |       / | .^. | |  |  ::::|        || .^. ||       |\n";
	cout << "            |  .-.  \\ | | | | |  |   :: |        || | | ||  |\\   |\n";
	cout << "            |  | |  |.' \"\"\" `.|  |      |  i  i  j' \"\"\" `.  | \\  | \n";
	cout << "            |  `-'  ||   _   ||  |      |  |\\/|  |   _   |  | [  |\n";
	cout << "           [|      / |  | |  ||  |      |  |  |  |  | |  |  | |  |].\n";
	cout << "          ] `-----'  :--' `--::--'      `--' ::--\"--::`--\"--' `--':[\n";
	cout << "          |      __  ::-\"\"\"`.:' \"--.    .----::.----:: ,.---._    :|\n";
	cout << "          [  .-\"\"  \"`'              \\  /      \"      `'       `-. :].\n";
	cout << "         ]:.'                        \\/                          `.:[\n";
	cout << "         |/                                                        \\|";

	cout << "\n";

	Color(14);

	cout << "                              ARKHAM SIMULATOR";

	cout << "\n\n";

	Color(7);

	system("PAUSE");

	cout << "\n\n";

	cout << "Welcome to your new role as warden of Arkham Asylum. Sorry we don't have your\n";
	cout << "office ready yet, we're still cleaning up the mess after what happened to the\n";
	cout << "last warden. Believe me, the prisoners here aren't just violent, they aren't\n";
	cout << "just crazy. They're a darkness that exists beyond the limit of terror itself.\n";
	cout << "Would you listen to me, I'm starting to sound just like these maniacs...\n\n";

	system("PAUSE");

	cout << "\n\n";

	cout << "If you want to keep the population happy, I suggest you spend your time talking\n";
	cout << "to every one of them. Nothing satisfies the entertainment needs of raging\n";
	cout << "egomaniacs like a rapt audience. You'll also need to keep 'em fed. They've got\n";
	cout << "their own preferences, but you'll have to handle Poison Ivy a bit differently.\n";
	cout << "She lives on sunlight, so make sure you open the roof once in a while to let it\n";
	cout << "in. You'll need to watch her closely to make sure she doesn't escape. When Ivy\n";
	cout << "eats, no one else will be able to. You'll figure it all out, warden. Now go get\n";
	cout << "used to keeping those loonies in line. I'm sure Batman will be bringing us more\n";
	cout << "very soon.\n\n";

	system("PAUSE");

	cout << "\n\n";

	int choice;
	do
	{
		crit.Status();
		cout << "1 - Talk to " << currentVillain << "\n";
		cout << "2 - Feed all inmates\n";
		cout << "3 - Change cell\n\n";
		cout << "0 - Quit\n\n";

		cout << "Choice: ";
		Color(10);
		cin >> choice;
		Color(7);

		switch (choice)
		{
		case 0:
			break;
		case 1:
			crit.Talk();
			crit.Play();
			break;
		case 2:
			crit.Feed();
			break;
		case 3:
			crit.Change();
		}
	} while (choice != 0);

	cout << "\n\n";

	cout << "Well, you're not the first Arkham warden to walk out on the job.\n";
	cout << "Maybe this time the inmates will stay put and NOT go on a killing\n";
	cout << "spree. But I guess that's not your problem anymore. If you'll\n";
	cout << "excuse me, I need to call Commissioner Gordon and tell him to\n";
	cout << "go ahead and warm up that Bat Signal.\n\n";

	system("PAUSE");

	return 0;
}

