#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <stdlib.h>
#include <thread>
bool Played = false;
bool Escape = false;
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
void PlayMusic() {
	bool Exit = false;
	Sleep(1000);
	if (!Played) {
		Played = true;
		do {
			Exit = Escape;
			PlaySoundA("Music.wav", NULL, SND_SYNC);
		} while (!Exit);
		
	}
	else {


	}
}
void StopMusic() {


}