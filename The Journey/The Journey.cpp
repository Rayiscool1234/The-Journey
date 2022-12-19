#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include "Additfunc.h"
#include <ranges>
#include <thread>
std::string Segment1 = "Choose a skill to continue\n1.Hacking\n2.Fighting\n3.Sharpshooting\n4.Glitching";
std::string Icon = "  _______ _              _                                  \n |__   __| |            (_)                                  \n    | |  | |__   ___     _  ___  _   _ _ __ _ __   ___ _   _ \n    | |  | '_ \\ / _ \\   | |/ _ \\| | | | '__| '_ \\ / _ \\ | | |\n    | |  | | | |  __/   | | (_) | |_| | |  | | | |  __/ |_| |\n    |_|  |_| |_|\___|    | |\\___/ \\__,_|_|  |_| |_|\\___|\\__, |\n                       _/ |                             __/ |\n                      |__/                             |___/ ";
int speed = 50;
std::thread thread_obj(Music);
bool New_person = true;
std::string speedA = "Medium";
std::string soundA = "Unavailable";
class Player {
public:
	int Skill;
	int power;
	bool Healthy;
	int health;
	Player(int Askill, int Apower, bool AHealthy, int Ahealth) {

		Skill = Askill;
		power = Apower;
		Healthy = AHealthy;
		health = Ahealth;
	}
};
Player Player1(1, 2, true, 20);
void Option() {
	int Value;
	std::cout << "General:\n\nText speed: " << speedA << " \nSound: " << soundA << " \n\nMore options soon coming!" << std::endl;
	std::cin >> Value;
	
	switch (Value) {
		
	case 1:
		std::cout << "you typed 1" << std::endl;
		break;
	case 2:
		std::cout << "you typed 2" << std::endl;
		break;
	default:
		std::cout << "you typed wrong" << std::endl;
		break;

	}
	Sleep(500);
	Clear();


	
	






}
void gamesec1() {


}
void game() {
	bool cont;
	bool typed;
	std::string Choice;
	
	do {
		Textprintout("Yes or no?", 9);
		std::cin >> Choice;
		if (Choice == "yes") {
			typed = true;
			cont = true;
			Clear();
		}
		else if (Choice == "no") {

			typed = true;
			cont = false;
			Clear();
		}
		else {

			typed = false;
			
		}
	} while (!typed);
	if (cont == true) {
		int Output;
		bool restart = false;
		Textprintout(Segment1, Segment1.length());
		std::cin >> Output;
		do {
			switch (Output) {
			case 1:
				std::cout << "1";
				restart = false;
				break;
			case 2:
				restart = false;
				break;
			case 3:
				restart = false;
				break;
			case 4:
				restart = false;
				break;

			default:
				restart = true;
				Clear();
				break;
			}
		} while (restart == true);

	}
	else {

	}
	
}
void Continue_game() {



}
void New_game() {

	game();
}



void Credits() {
	std::string None;
	std::string Credits = "		The Journey!\n	Made by Ray\n	Concept from The Oregon Trail\n";
	Print(Credits);
	std::cin >> None;
	
}



void Menu() {
	
	std::string list = "1.New game\n2.Continue Game\n3.Option\n4.Credits\n5.Exit";
	int Chosen = 0;
	if (New_person) {
		Print(Icon);
		Print("\n\n\n");
		Textprintout(list, list.length());
		New_person = false;
		std::cin >> Chosen;
		

	}
	else {
		Print(Icon);
		Print("\n\n\n");
		Print(list);
		std::cin >> Chosen;

	}
	
	
	switch (Chosen) {

		case 1:
			Clear();
			std::cout << "Starting new game!" << std::endl;
			New_game();
			break;
		case 2:
			Clear();
			std::cout << "Continue a game!" << std::endl;
			Continue_game();
			break;
		case 3:
			Clear();
			std::cout << "Here are the options" << std::endl;
			Option();
			break;
		case 4:
			Clear();
			std::cout << "Best peps" << std::endl;
			Credits();
			break;
		case 5:
			Clear();
			std::cout << "See ya later" << std::endl;
			Sleep(1000);
			for (bool j = false; j; Print("Attempted to exit")) {
				bool Firsttime;
				if (Firsttime) { Print("Please wait while we close all processes"); Print("Don't worry if it takes time"); }
				Escape = false;
				sndPlaySoundA()

			}
			exit(EXIT_SUCCESS);
			break;

		default:
			Clear();
			std::cout << "The character you typed isn't regonized" << std::endl;
			break;
	}

}





int main() {
	
	bool test = false;
	bool testing = false;
	do {

		Menu();

	} while (test == false);

}