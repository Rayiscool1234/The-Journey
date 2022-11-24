#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <thread>
bool Played = false;
void Print(std::string Message) {

	std::cout << Message << std::endl;

}
void Clear() {

	system("CLS");

}
int Range(int Num1, int Num2, int Specnum) {
	bool Inrange = false;
	if (Num1 <= Specnum) {

		if (Num2 >= Specnum) {


			Inrange = true;
		}

	}
	return Inrange;
}
void Textprintout(std::string text, int Char) {
	for (int i = 0; i < Char; i++) {
		Sleep(25);
		std::cout << text[i];

	}
	std::cout << std::endl;

}
void TextprintoutAD(std::string text, int Char, double Speed) {
	for (int i = 0; i < Char; i++) {
		Sleep(Speed);
		std::cout << text[i];

	}
	std::cout << std::endl;
	
}
void Music() {
	int z = 5;
	if (!Played) {
		Played = true;
		do {
			PlaySoundA("Music.wav", NULL, SND_SYNC);
		} while (z == 5);
		
	}
	else {


	}
}